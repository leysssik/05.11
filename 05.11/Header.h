#pragma once
#include <iostream>
#include <string>
#include <windows.h>
#include<fstream>
#include <vector>
#include <algorithm>
#include <iomanip>
#include "Header.h"
using namespace std;
struct Student
{
	int id{};
	string f{};
	string i{};
	string o{};
	char pol{};
	int vozr{};
	float rost{};
};
void cout_(Student st)
{
	cout << st.f << " " << st.i << " " << st.o << " " << st.pol << " " << st.vozr << " " << st.rost << " " << endl;
}
void fout_(Student st)
{
	ofstream fout;
	fout.open("student.txt", ios::app);
	fout << st.f << " " << st.i << " " << st.o << " " << st.pol << " " << st.vozr << " " << st.rost << " " << endl;
	fout.close();
}