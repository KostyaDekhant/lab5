#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <conio.h>
#include <stdio.h>

using namespace std;

class passport_data
{
private:
	string number;
	string series;
public:
	string getNum();
	string getSer();

	void setNum(string num);
	void setSer(string ser);

	passport_data();
	passport_data(string num);
	passport_data(string num, string ser);
	~passport_data();
};

