#pragma once
#include "NineByNine.h"
#include "Horizontal.h"
#include "Vertical.h"

class ThreeByThree : public NineByNine
{
public:
	void read();
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

void ThreeByThree::read()
{
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			threeByThree1[i][j] = getNineByNine(i, j);
		}
	}
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			threeByThree2[i][j] = getNineByNine(i, j + 3);
		}
	}
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			threeByThree3[i][j] = getNineByNine(i, j + 6);
		}
	}
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			threeByThree4[i][j] = getNineByNine(i + 3, j);
		}
	}
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			threeByThree5[i][j] = getNineByNine(i + 3, j + 3);
		}
	}
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			threeByThree6[i][j] = getNineByNine(i + 3, j + 6);
		}
	}
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			threeByThree7[i][j] = getNineByNine(i + 6, j);
		}
	}
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			threeByThree8[i][j] = getNineByNine(i + 6, j + 3);
		}
	}
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			threeByThree3[i][j] = getNineByNine(i + 6, j + 6);
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