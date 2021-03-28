#pragma once
#ifndef _SORT_H_
#define _SORT_H_
#include <iostream>
#include <exception>
#include <string>

using namespace std;



void Sort(double* values, int count);

void DemoSort();

struct Contact
{
	string Name;
	int Number;
	int SecondNumber;
};

struct Song
{
	string Name;
	string Gengre;
	int Year;
};

struct Discipline
{
	int Appraisal;
	string Name;
	string TeachersName;
};




#endif