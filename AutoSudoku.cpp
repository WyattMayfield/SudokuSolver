// AutoSudoku.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include "ThreeByThree.h"
#include "PriorityQueue.h"

using namespace std;

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
	n1.test();
}