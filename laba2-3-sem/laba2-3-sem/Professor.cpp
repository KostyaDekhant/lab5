#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <conio.h>
#include <stdio.h>
#include "Professor.h"
#include "Function.h"

Professor::Professor()
{
	Human initHuman;
	this->human = initHuman;
	this->wage = 25000;
	this->subject = "Математика";
	this->experience = 20;
	count_prof++;
}
Professor::Professor(int wg)
{
	Human initHuman;
	this->human = initHuman;
	this->wage = wg;
	this->subject = "Информатика";
	this->experience = 15;
	count_prof++;
}
Professor::Professor(int wg, int exp, string sub, class Human human)
{
	this->human = human;
	this->wage = wg;
	this->subject = sub;
	this->experience = exp;
	count_prof++;
}
Professor::~Professor()
{

}

int Professor::count_prof = 0;

int Professor::GetCount()
{
	return count_prof;
}

void Professor::SetCount(int count)
{
	count_prof = count;
}

Professor Professor::operator + (Professor prof)
{
	return Professor(this->experience + prof.experience);
}
Professor& Professor::operator ++ ()
{
	this->human.setAge((this->human.getAge()) + 1);
	return *this;
}
Professor Professor::operator ++ (int)
{
	Professor prof = *this;
	++* this;
	return prof;
}


void Professor::ChangeInfo()
{
	int inp;
	inp = write_num(7);
	if (inp == 7)
		return;
	else if (inp == 1)
	{
		string first, mid, last;
		cout << "Введите фамилию преподавателя: ";
		last = write_str(29);
		cout << "Введите имя преподавателя: ";
		first = write_str(29);
		cout << "Введите отчество преподавателя: ";
		mid = write_str(29);
		this->human.setFIO(first, mid, last);
	}
	else if (inp == 2)
	{
		string num, ser;
		cout << "Введите номер паспорта: ";
		num = write_pd(4);
		cout << "Введите серию паспорта: ";
		ser = write_pd(6);
		this->human.setPD(num, ser);
	}
	else if (inp == 3)
	{
		cout << "Введите возраст: ";
		this->human.setAge(write_num(125));
	}
	else if (inp == 4)
	{
		cout << "Введите название предмета: ";
		cin >> this->subject;
	}
	else if (inp == 5)
	{
		cout << "Введите размер заработной платы: ";
		this->wage = write_num(100000);
	}
	else if (inp == 6)
	{
		cout << "Введите стаж: ";
		this->experience = write_num(this->human.getAge()-1);
	}
}

void Professor::prof_analysis(int* prof_sum_age, int* prof_sum_wage,
	int* count_professors, int* max_wage, int* min_wage, int* sum_experience)
{
	system("cls");
	if (!*count_professors)
	{
		*max_wage = this->wage;
		*min_wage = this->wage;
	}
	else if (this->wage > *max_wage)
	{
		*max_wage = this->wage;
	}
	else if (this->wage < *min_wage)
	{
		*min_wage = this->wage;
	}
	*prof_sum_wage += this->wage;
	*count_professors += 1;
	*sum_experience += this->experience;
	*prof_sum_age += this->human.getAge();
}

void Professor::InputProf()
{
	system("cls");
	string first, mid, last, num, ser;
	cout << "Введите фамилию преподавателя: ";
	last = write_str(29);
	cout << "Введите имя преподавателя: ";
	first = write_str(29);
	cout << "Введите отчество преподавателя: ";
	mid = write_str(29);
	this->human.setFIO(first, mid, last);
	cout << "Введите возраст: ";
	this->human.setAge(write_num(125));
	cout << "Введите номер паспорта: ";
	num = write_pd(4);
	cout << "Введите серию паспорта: ";
	ser = write_pd(6);
	this->human.setPD(num, ser);
	cout << "Введите размер заработной платы: ";
	this->wage = write_num(100000);
	cout << "Введите предмет: ";
	cin >> this->subject;
	cout << "Введите стаж: ";
	this->experience = write_num(this->human.getAge() - 1);
}
void Professor::OutputProf(int i)
{
	cout << to_string(i + 1) + "-й человек: " << endl;
	cout << "---------------------------------" << endl;
	cout << "ФИО: " + this->human.getFIO().getLast() + " " + this->human.getFIO().getFirst() + " " + this->human.getFIO().getMid() << endl;
	cout << "Паспортные данные: " + this->human.getPD().getNum() + " " + this->human.getPD().getSer() << endl;
	cout << "Возраст: " + to_string(this->human.getAge()) << endl;
	cout << "Предмет: " + this->subject << endl;
	cout << "Заработная плата: " + to_string(this->wage) << endl;
	cout << "Стаж: " + to_string(this->experience) << endl;
	cout << "---------------------------------\n\n" << endl;
}

