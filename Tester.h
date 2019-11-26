#pragma once
#include "ThreeByThree.h"
#include "Horizontal.h"
#include "Vertical.h"

class Tester : public Vertical, public Horizontal, public ThreeByThree
{
	public:
		void test(int row, int j);
};

void Test()