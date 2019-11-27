#pragma once

class Vertical
{
public:
	Vertical(NineByNine board) {
		read(board);
	}
	void read(NineByNine board);
	int * getVertical(int);
	int * getVertical1();
	int * getVertical2();
	int * getVertical3();
	int * getVertical4();
	int * getVertical5();
	int * getVertical6();
	int * getVertical7();
	int * getVertical8();
	int * getVertical9();
private:
	int vertical1[9];
	int vertical2[9];
	int vertical3[9];
	int vertical4[9];
	int vertical5[9];
	int vertical6[9];
	int vertical7[9];
	int vertical8[9];
	int vertical9[9];
};

void Vertical::read(NineByNine board)
{
	for (int i = 0; i < 9; i++)
	{
		vertical1[i] = board.getNineByNine(i, 0);
	}
	for (int i = 0; i < 9; i++)
	{
		vertical2[i] = board.getNineByNine(i, 1);
	}
	for (int i = 0; i < 9; i++)
	{
		vertical3[i] = board.getNineByNine(i, 2);
	}
	for (int i = 0; i < 9; i++)
	{
		vertical4[i] = board.getNineByNine(i, 3);
	}
	for (int i = 0; i < 9; i++)
	{
		vertical5[i] = board.getNineByNine(i, 4);
	}
	for (int i = 0; i < 9; i++)
	{
		vertical6[i] = board.getNineByNine(i, 5);
	}
	for (int i = 0; i < 9; i++)
	{
		vertical7[i] = board.getNineByNine(i, 6);
	}
	for (int i = 0; i < 9; i++)
	{
		vertical8[i] = board.getNineByNine(i, 7);
	}
	for (int i = 0; i < 9; i++)
	{
		vertical9[i] = board.getNineByNine(i, 8);
	}
}

int * Vertical::getVertical1()
{
	return vertical1;
}

int * Vertical::getVertical2()
{
	return vertical2;
}

int * Vertical::getVertical3()
{
	return vertical3;
}

int * Vertical::getVertical4()
{
	return vertical4;
}

int * Vertical::getVertical5()
{
	return vertical5;
}

int * Vertical::getVertical6()
{
	return vertical6;
}

int * Vertical::getVertical7()
{
	return vertical7;
}

int * Vertical::getVertical8()
{
	return vertical8;
}

int * Vertical::getVertical9()
{
	return vertical9;
}

int * Vertical::getVertical(int x) { //takes a col and returns all values in that col
	if (x == 0) {
		return vertical1;
	}
	if (x == 1) {
		return vertical2;
	}
	if (x == 2) {
		return vertical3;
	}
	if (x == 3) {
		return vertical4;
	}
	if (x == 4) {
		return vertical5;
	}
	if (x == 5) {
		return vertical6;
	}
	if (x == 6) {
		return vertical7;
	}
	if (x == 7) {
		return vertical8;
	}
	if (x == 8) {
		return vertical9;
	}
}