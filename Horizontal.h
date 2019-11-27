#pragma once

class Horizontal
{
public:
	Horizontal(NineByNine board) {
		read(board);
	}
	void read(NineByNine board);
	int * getHorizontal(int x);
	int * getHorizontal1();
	int * getHorizontal2();
	int * getHorizontal3();
	int * getHorizontal4();
	int * getHorizontal5();
	int * getHorizontal6();
	int * getHorizontal7();
	int * getHorizontal8();
	int * getHorizontal9();
private:
	int horizontal1[9];
	int horizontal2[9];
	int horizontal3[9];
	int horizontal4[9];
	int horizontal5[9];
	int horizontal6[9];
	int horizontal7[9];
	int horizontal8[9];
	int horizontal9[9];
};

void Horizontal::read(NineByNine board)
{
	for (int i = 0; i < 9; i++)
	{
		horizontal1[i] = board.getNineByNine(0, i);
	}
	for (int i = 0; i < 9; i++)
	{
		horizontal2[i] = board.getNineByNine(1, i);
	}
	for (int i = 0; i < 9; i++)
	{
		horizontal3[i] = board.getNineByNine(2, i);
	}
	for (int i = 0; i < 9; i++)
	{
		horizontal4[i] = board.getNineByNine(3, i);
	}
	for (int i = 0; i < 9; i++)
	{
		horizontal5[i] = board.getNineByNine(4, i);
	}
	for (int i = 0; i < 9; i++)
	{
		horizontal6[i] = board.getNineByNine(5, i);
	}
	for (int i = 0; i < 9; i++)
	{
		horizontal7[i] = board.getNineByNine(6, i);
	}
	for (int i = 0; i < 9; i++)
	{
		horizontal8[i] = board.getNineByNine(7, i);
	}
	for (int i = 0; i < 9; i++)
	{
		horizontal9[i] = board.getNineByNine(8, i);
	}
}

int * Horizontal::getHorizontal1()
{
	return horizontal1;
}

int * Horizontal::getHorizontal2()
{
	return horizontal2;
}

int * Horizontal::getHorizontal3()
{
	return horizontal3;
}

int * Horizontal::getHorizontal4()
{
	return horizontal4;
}

int * Horizontal::getHorizontal5()
{
	return horizontal5;
}

int * Horizontal::getHorizontal6()
{
	return horizontal6;
}

int * Horizontal::getHorizontal7()
{
	return horizontal7;
}

int * Horizontal::getHorizontal8()
{
	return horizontal8;
}

int * Horizontal::getHorizontal9()
{
	return horizontal9;
}

int * Horizontal::getHorizontal(int x) { //takes a row and returns all values in that row
	if (x == 0) {
		return horizontal1;
	}
	if (x == 1) {
		return horizontal2;
	}
	if (x == 2) {
		return horizontal3;
	}
	if (x == 3) {
		return horizontal4;
	}
	if (x == 4) {
		return horizontal5;
	}
	if (x == 5) {
		return horizontal6;
	}
	if (x == 6) {
		return horizontal7;
	}
	if (x == 7) {
		return horizontal8;
	}
	if (x == 8) {
		return horizontal9;
	}
}