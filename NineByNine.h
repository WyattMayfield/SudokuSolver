#pragma once

#include <iostream>
#include <fstream>

using namespace std;

const int maxRow = 9;
const int maxColumn = 9;

class NineByNine
{
public:
	void readIn();
	int getNineByNine(int r, int c);
	bool solved();
	void insert(int r, int c, int n);
	void test();
	//void insert(int number, int row, int column);
	void print();
private:
	int nineByNine[maxRow][maxColumn] = { 0 };
};

void NineByNine::readIn()
{
	ifstream i_s;
	i_s.open("Test01.txt");
	if (!i_s) {
		cerr << "Unable to open file datafile.txt";
		exit(1);   // call system to stop
	}
	int num;
	for (int i = 0; i < maxRow; i++)
	{
		for (int j = 0; j < maxColumn; j++)
		{
			i_s >> num;
			nineByNine[i][j] = num;
		}
	}
	i_s.close();
}

int NineByNine::getNineByNine(int r, int c)
{
	return nineByNine[r][c];
}

/*void NineByNine::insert(int n, int r, int c)
{
	nineByNine[r - 1][c - 1] = n;
}*/

bool NineByNine::solved()
{
	for (int i = 0; i < maxRow; i++)
	{
		for (int j = 0; j < maxColumn; j++)
		{
			if (nineByNine[i][j] == 0)
			{
				return false;
			}
		}
	}
	return true;
}

void NineByNine::print()
{
	for (int i = 0; i < maxRow; i++)
	{
		if (i == 0)
		{
			cout << "--------------------------------" << endl;
			cout << "--------------------------------" << endl;
		}
		cout << "|| ";
		for (int j = 0; j < maxColumn; j++)
		{
			if (nineByNine[i][j] == 0)
			{
				cout << " |";
			}
			else
			{
				cout << nineByNine[i][j] << "|";
			}
			if (j == 2 || j == 5 || j == 8)
			{
				cout << "| ";
			}
			else
			{
				cout << " ";
			}
		}
		cout << endl;
		cout << "--------------------------------" << endl;
		if (i == 2 || i == 5 || i == 8)
		{
			cout << "--------------------------------" << endl;
		}
	}
}

void NineByNine::insert(int r, int c, int n)
{
	nineByNine[r][c] = n;
	print();
}

void NineByNine::test()
{
	int f = 0;
	do
	{
		for (int i = 0; i < 9; i++)
		{
			for (int j = 0; j < 9; j++)
			{
				f++;
				if (getNineByNine(i, j) == 0)
				{
					cout << endl << endl;
					insert(i, j, 1);
				}
			}
		}
	} while (!solved() && f < 1000);
}