#include <iostream>
#include <string>
#include <windows.h>
#include<fstream>
#include <vector>
#include <algorithm>
#include <iomanip>
#include "Header.h"
using namespace std;
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	ofstream fout;
	ifstream fin;
	Student Leysan = { 1,"Мухамеджанова", "Лейсан", "Ринатовна",'ж', 18, 1.64 };
	Leysan.i = "Алсу";
	//cout << Leysan.f << " " << Leysan.i << " " << Leysan.o << " " << Leysan.pol << " " << Leysan.vozr << " " << Leysan.rost << " " << endl;//
	cout_(Leysan);
	fout_(Leysan);
}
