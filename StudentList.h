#pragma once
#include <iostream>
#include"Student.h"
using namespace std;
/*
	1.insert(Student s) order with ID
*/
class StudentList {
	struct Node {
		Student item;
		Node* next;
	};
	Node* front, * end;
	int length;
public:
	StudentList();
	void insert(Student s);
	void Display();
	void search(int id);
	void Delete(int id);
};

