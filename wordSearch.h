#ifndef __wordSearch__
#define __wordSearch__

//#include "  "
//#include "  "
//#include "  "
#include <iostream>
#include <cstring>

class wordSearch
{
	private:
		int Maxnum;
		string TargetWord;
	public:
		void getMaxnum(int x);
		void getTargetWord(string w);
		void binarySearch();
};

#endif
