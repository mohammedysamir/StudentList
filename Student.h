#pragma once
#include<iostream>
using namespace std;
class Student
{
	string Name;
	int ID;
	float GPA;
public:
	Student();
	Student(string n, int i, float g);
	void set_Name(string n);
	string get_Name();
	void set_ID(int i);
	int get_ID();
	void set_GPA(float n);
	float get_GPA();
	friend ostream &operator<<(ostream& out, Student& s) {
		out << s.Name << " " << s.ID << " " << s.GPA << endl;
		return out;
	}
	friend istream& operator>>(istream& in, Student& s) {
		in >> s.Name >> s.ID >> s.GPA;
		return in;
	}
};

