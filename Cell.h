
#include <list>
#include <queue>

using namespace std;

class cell { //a way to look at a cell
public:
	cell(int row, int col) {
		r = row;
		c = col;
	}
	pair<int, int> getlocation() {
		pair<int, int> thecell;
		thecell.first = r;
		thecell.second = c;
		return thecell;
	};
	void setpossiblevalues(list<int> thevalues) {
		possiblevalues = thevalues;
	}
	list<int> getpossiblevalues() {
		return possiblevalues;
	}
	int getrow() {
		return r;
	}
	int getcol() {
		return c;
	}
	
private:
	int r;
	int c;
	list<int> possiblevalues;
};
