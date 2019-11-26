#pragma once

class Vertical : public NineByNine
{
public:
	void read();
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

void Vertical::read()
{
	for (int i = 0; i < 9; i++)
	{
		vertical1[i] = getNineByNine(i, 0);
	}
	for (int i = 0; i < 9; i++)
	{
		vertical2[i] = getNineByNine(i, 1);
	}
	for (int i = 0; i < 9; i++)
	{
		vertical3[i] = getNineByNine(i, 2);
	}
	for (int i = 0; i < 9; i++)
	{
		vertical4[i] = getNineByNine(i, 3);
	}
	for (int i = 0; i < 9; i++)
	{
		vertical5[i] = getNineByNine(i, 4);
	}
	for (int i = 0; i < 9; i++)
	{
		vertical6[i] = getNineByNine(i, 5);
	}
	for (int i = 0; i < 9; i++)
	{
		vertical7[i] = getNineByNine(i, 6);
	}
	for (int i = 0; i < 9; i++)
	{
		vertical8[i] = getNineByNine(i, 7);
	}
	for (int i = 0; i < 9; i++)
	{
		vertical9[i] = getNineByNine(i, 8);
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