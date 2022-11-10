#define _CRT_SECURE_NO_WARNINGS
#define MAX_SIZE 100
#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <locale.h>
#include <string>
#include <windows.h>
#include "Human.h"
#include "Student.h"
#include "Professor.h"
#include "Function.h"
#include <fstream>

int main()
{
	setlocale(LC_ALL, "rus");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	bool exit = false;
	int inp;
	Student *stud = new class Student[MAX_SIZE];
	Professor* prof = new class Professor[MAX_SIZE];
	stud->SetCount(1);
	stud->FileRead(stud);
	prof->SetCount(0);
	&stud[0].operator++();
	do {
		print_choise();
		inp = write_num(9);
		if (inp == 9)
			exit = true;
		else
			act_choise(inp, stud, prof);

	} while (!exit);
	stud->FileWrite(stud);
	delete[] stud, prof;
}
