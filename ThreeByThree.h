#pragma once
#include "NineByNine.h"
#include "Horizontal.h"
#include "Vertical.h"
#include "Cell.h"
#include <cstdio>



class ThreeByThree
{
public:
	ThreeByThree(NineByNine board) {
		read(board);
	}
	void read(NineByNine board);
	int **square(cell);
	//void test();
private:
	int threeByThree1[3][3];
	int threeByThree2[3][3];
	int threeByThree3[3][3];
	int threeByThree4[3][3];
	int threeByThree5[3][3];
	int threeByThree6[3][3];
	int threeByThree7[3][3];
	int threeByThree8[3][3];
	int threeByThree9[3][3];
};

int **ThreeByThree::square(cell location) {//returns a pointer to the array of what square the cell is in
	int row = location.getrow();
	int col = location.getcol();
	int rowsquare = -1;
	int colsquare = -1;
	if (row == 0 || row == 1 || row == 2) { //calculating which square 1,2,3 in the rows
		rowsquare = 0;
	}
	if (row == 3 || row == 4 || row == 5) {
		rowsquare = 1;
	}
	if (row == 6 || row == 7 || row == 8) {
		rowsquare = 2;
	}
	if (col == 0 || col == 1 || col == 2) { //calculating which square 1,2,3 in the cols
		colsquare = 0;
	}
	if (col == 3 || col == 4 || col == 5) {
		colsquare = 1;
	}
	if (col == 6 || col == 7 || col == 8) {
		colsquare = 2;
	}
	if (colsquare == 0 && rowsquare == 0) {
		int** toreturn = new int* [3];
		for (int i = 0; i < 3; i++) { //row
			toreturn[i] = new int[3];
			for (int k = 0; k < 3; k++) {//col
				toreturn[i][k] = threeByThree1[i][k];
			}
		}
		return toreturn;
	} 
	if (colsquare == 1 && rowsquare == 0) {
		int** toreturn = new int* [3];
		for (int i = 0; i < 3; i++) { //row
			toreturn[i] = new int[3];
			for (int k = 0; k < 3; k++) {//col
				toreturn[i][k] = threeByThree2[i][k];
			}
		}
		return toreturn;
	}
	if (colsquare == 2 && rowsquare == 0) {
		int** toreturn = new int* [3];
		for (int i = 0; i < 3; i++) { //row
			toreturn[i] = new int[3];
			for (int k = 0; k < 3; k++) {//col
				toreturn[i][k] = threeByThree3[i][k];
			}
		}
		return toreturn;
	}
	if (colsquare == 0 && rowsquare == 1) {
		int** toreturn = new int* [3];
		for (int i = 0; i < 3; i++) { //row
			toreturn[i] = new int[3];
			for (int k = 0; k < 3; k++) {//col
				toreturn[i][k] = threeByThree4[i][k];
			}
		}
		return toreturn;
	}
	if (colsquare == 1 && rowsquare == 1) {
		int** toreturn = new int* [3];
		for (int i = 0; i < 3; i++) { //row
			toreturn[i] = new int[3];
			for (int k = 0; k < 3; k++) {//col
				toreturn[i][k] = threeByThree5[i][k];
			}
		}
		return toreturn;
	}
	if (colsquare == 2 && rowsquare == 1) {
		int** toreturn = new int* [3];
		for (int i = 0; i < 3; i++) { //row
			toreturn[i] = new int[3];
			for (int k = 0; k < 3; k++) {//col
				toreturn[i][k] = threeByThree6[i][k];
			}
		}
		return toreturn;
	}
	if (colsquare == 0 && rowsquare == 2) {
		int** toreturn = new int* [3];
		for (int i = 0; i < 3; i++) { //row
			toreturn[i] = new int[3];
			for (int k = 0; k < 3; k++) {//col
				toreturn[i][k] = threeByThree7[i][k];
			}
		}
		return toreturn;
	}
	if (colsquare == 1 && rowsquare == 2) {
		int** toreturn = new int* [3];
		for (int i = 0; i < 3; i++) { //row
			toreturn[i] = new int[3];
			for (int k = 0; k < 3; k++) {//col
				toreturn[i][k] = threeByThree8[i][k];
			}
		}
		return toreturn;
	}
	if (colsquare == 2 && rowsquare == 2) {
		int** toreturn = new int* [3];
		for (int i = 0; i < 3; i++) { //row
			toreturn[i] = new int[3];
			for (int k = 0; k < 3; k++) {//col
				toreturn[i][k] = threeByThree9[i][k];
			}
		}
		return toreturn;
	}

}

void ThreeByThree::read(NineByNine board)
{
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			threeByThree1[i][j] = board.getNineByNine(i, j);
		}
	}
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			threeByThree2[i][j] = board.getNineByNine(i, j + 3);
		}
	}
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			threeByThree3[i][j] = board.getNineByNine(i, j + 6);
		}
	}
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			threeByThree4[i][j] = board.getNineByNine(i + 3, j);
		}
	}
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			threeByThree5[i][j] = board.getNineByNine(i + 3, j + 3);
		}
	}
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			threeByThree6[i][j] = board.getNineByNine(i + 3, j + 6);
		}
	}
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			threeByThree7[i][j] = board.getNineByNine(i + 6, j);
		}
	}
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			threeByThree8[i][j] = board.getNineByNine(i + 6, j + 3);
		}
	}
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			threeByThree9[i][j] = board.getNineByNine(i + 6, j + 6);
		}
	}
}

/*void ThreeByThree::test()
{
	do
	{
		for (int i = 0; i < 9; i++)
		{
			for (int j = 0; j < 9; j++)
			{
				if (getNineByNine(i, j) == 0)
				{
					insert(i, j, 1);
					cout << endl << endl;
				}
			}
		}
	} while (!solved());
}*/