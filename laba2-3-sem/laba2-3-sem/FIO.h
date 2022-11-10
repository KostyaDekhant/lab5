#pragma once
#include <string>

using namespace std;

class FIO
{
private:
	string firstname;
	string middle;
	string lastname;
public:
	string getFirst();
	string getMid();
	string getLast();

	void setFirst(string first);
	void setMid(string mid);
	void setLast(string last);

	FIO();
	FIO(string first);
	FIO(string firstname, string middle, string lastname);
	~FIO();
};

//FIO FIOInit(char *first, char* mid, char* last);