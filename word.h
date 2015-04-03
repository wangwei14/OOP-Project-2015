#include <iostream>
#include <vector>
#include <string>
using namespace std;

class word
{
private:
	string wordName; // word name
	string wordPron; // word pronunciation
	// make these three a struct ? 
	string wordPS; // word part of speech
	string trans; // word translation
	string sentence; // word sentence

	int wordLevel; // raw grey or done
public:
	word();
	~word();
	
};