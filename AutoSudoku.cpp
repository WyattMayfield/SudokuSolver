// AutoSudoku.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include "ThreeByThree.h"
#include <list>
#include <queue>

using namespace std;


list<int> possiblevalues(NineByNine field, cell location) {//calculates possible values that can go in the cell
	list<int> possible = { 1,2,3,4,5,6,7,8,9 };

	Horizontal hvalue(field);
	
	int rowneeded = location.getrow();
	int* horizontalarray = hvalue.getHorizontal(rowneeded);
	for (int i = 0; i < 9; i++) {
		possible.remove(horizontalarray[i]); //removes possible values in the row
	}

	Vertical vvalue(field);
	
	int colneeded = location.getcol();
	int* verticalarray = vvalue.getVertical(colneeded);
	for (int i = 0; i < 9; i++) {
		possible.remove(verticalarray[i]); //removes possible values in the col
	}

	ThreeByThree box(field);
	
	int** thebox = box.square(location);
	for (int i = 0; i < 3; i++) {
		for (int k = 0; k < 3; k++) {
			possible.remove(thebox[i][k]);
		}
	}
	return possible;
}

list<cell> ConstraintSudoku(NineByNine& field) {
	list<cell> toreturn;
	for (int r = 0; r < 9; r++) {
		for (int c = 0; c < 9; c++) {
			if (field.getNineByNine(r, c) == 0) {
				cell temp(r, c);
				toreturn.push_front(temp); //puts all cells in a list you supply that need possible values calculated
			}
		}
	}
	return toreturn;
}

queue<cell> onelist(list<cell> thelist) { //just gives a queue of all cells that have one possible value to them
	queue<cell> priorityqueue;
	list<cell>::iterator it;
	for(it = thelist.begin(); it != thelist.end(); it++){
		cell temp = (*it);
		if ((temp.getpossiblevalues()).size() == 1) {
			priorityqueue.push(*it);
		}
	}
	return priorityqueue;
}

int main()
{
	NineByNine n1;
	//ThreeByThree t1;
	/*int number, row, column;
	char again;*/

	cout << "Welcome to Auto Sudoku" << endl << endl;
	n1.readIn();

	/*cout << "Please enter the numbers and their corresponding coordinates on the 9X9 grid and 's' to stop." << endl;
	cout << "Ex. 5 2 4 enters a five in the second row down and fourth column from the left: ";
	do
	{
		cin >> number;
		while(number < 1 || number > 9)
		{
			cout << "Invalid number. Please enter a number 1-9: ";
			cin >> number;
		}
		cin >> row;
		while (row < 1 || row > maxRow)
		{
			cout << "Invalid row value. Please enter a value 1-9: ";
			cin >> row;
		}
		cin >> column;
		while (column < 1 || column > maxColumn)
		{
			cout << "Invalid column value. Please enter a value 1-9: ";
			cin >> column;
		}
		n1.insert(number, row, column);
		cout << "Would you like to continue(y/n): " << endl;
		cin >> again;
	} while (again == 'y' || again == 'Y');*/
	n1.print();
	while (!n1.solved()) {
		list<cell> positions;
		positions = ConstraintSudoku(n1);
		list<cell>::iterator it;
		for (it = positions.begin(); it != positions.end(); it++) { //cycles through all cells that were = 0 and calculates possible values
			list<int> temp = possiblevalues(n1, (*it));
			(*it).setpossiblevalues(temp);//gives cell the list of possible values for itself
		}
		queue<cell> onevalues = onelist(positions); //uses algorithm to have queue of all 1 possible values and insert them
		while (!onevalues.empty()) {
			cell toinsert = onevalues.front();
			onevalues.pop();
			int coltoinsert = toinsert.getcol();
			int rowtoinsert = toinsert.getrow();
			int value = (toinsert.getpossiblevalues()).front();
			(toinsert.getpossiblevalues()).pop_front();
			n1.insert(rowtoinsert, coltoinsert, value);
			n1.print();
		}
		while (!positions.empty()) {
			positions.pop_front();
		}
	}
	n1.print();
	cout << "solved";
}