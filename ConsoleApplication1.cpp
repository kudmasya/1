// ConsoleApplication10.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <fstream>
#include <iostream>
#include "stdlib.h"
#include <string>
using namespace std;


int _tmain(int argc, _TCHAR* argv[])
{
	setlocale(LC_ALL, "RUS");
	ifstream f1("1.txt");
	fstream f3("3.txt");
	string s;
	string s1;
	int k = 0;
	int i = 1;
	while (!f1.eof())  //1-ый сравнить со 2-ым
	{
		getline(f1, s);
		ifstream f2("2.txt");
		while (!f2.eof())
		{
			getline(f2, s1);
			if (s == s1)
			{
				k = 1;
			}
		}
		f2.close();
		if (k == 0) { f3 << "1.txt  "<< i<< "  " << s << "\n"; }
		k = 0;
		i++;
    }
	f1.close();
	
	i = 0;
	
	ifstream f2("2.txt");       //2-ой сравнить с 1-ым
	while (!f2.eof())
	{
		getline(f2, s);
		ifstream f1("1.txt");
		while (!f1.eof())
		{
			getline(f1, s1);
			if (s == s1)
			{
				k = 1;
			}
		}
		f1.close();
		if (k == 0)
		{
			f3 << "2.txt  " << i << "  "<< s << "\n";
		}
		k = 0;
		i++;
	}
	
	f2.close();
	
	
	f3.close();
	return 0;
}

