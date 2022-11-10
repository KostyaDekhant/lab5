#pragma once
#define MAX_SIZE 100
#include "Human.h"
#include <string>

using namespace std;

class Professor
{
private:
	int wage;
	int experience;
	string subject;
	class Human human;
	static int count_prof;
public:
	static int GetCount();
	static void SetCount(int count);
	Professor operator + (Professor stud);
	Professor& operator ++ ();
	Professor operator ++ (int);
	Professor();
	Professor(int wg);
	Professor(int wage, int experience, string subject, class Human human);
	~Professor();
	void InputProf();
	void OutputProf(int i);
	void prof_analysis(int* prof_sum_age, int* prof_sum_wage,
		int* count_professors, int* max_wage, int* min_wage, int* sum_experience);
	void ChangeInfo();
};
