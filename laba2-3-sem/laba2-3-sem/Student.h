#pragma once
#define _CRT_SECURE_NO_WARNINGS
#define MAX_SIZE 100
#include <iostream>
#include <cstdio>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "Human.h"

using namespace std;

class Student
{
private:
	class Human human;
	int scholarship;
	string group;
	static int count_stud;
public:
	static int GetCount();
	static void SetCount(int count);
	Student operator + (Student stud);
	Student& operator ++ ();
	Student operator ++ (int);
	Student();
	Student(int scholarship);
	Student(class Human human, int scholarship, string group);
	~Student();

	void FileRead(Student* stud);
	void FileWrite(Student* stud);
	
	void OutputStud(int i);
	void stud_analysis(int* stud_sum_age, int* stud_sum_scholarship,
		int* count_students, int* max_scholarship, int* min_scholarship);
	void ChangeInfo();

	friend void InputStud(Student &stud);
};

