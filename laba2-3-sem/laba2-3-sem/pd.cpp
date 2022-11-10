#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <conio.h>
#include <stdio.h>
#include "pd.h"

passport_data::passport_data()
{
	this->number = "0111";
	this->series = "548834";
}
passport_data::passport_data(string num)
{
	this->number = num;
	this->series = "132454";
}
passport_data::passport_data(string num, string ser)
{
	this->number = num;
	this->series = ser;
}
passport_data::~passport_data()
{

}

string passport_data::getNum()
{
	return this->number;
}
string passport_data::getSer()
{
	return this->series;
}

void passport_data::setNum(string num)
{
	number = num;
}
void passport_data::setSer(string ser)
{
	series = ser;
}