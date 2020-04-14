#include<iostream>
#include"Student.h"
#include"StudentList.h"
using namespace std;
int main() {
	StudentList L;
	Student s1("mariem", 5, 4.9);
	Student s2("mohammed", 3, 9.9);
	Student s3("John", 0, 10);
	L.insert(s1);
	L.insert(s2);
	L.insert(s3);
	L.Display();
	Student s4("Eminem",1, 20);
	L.insert(s4);
	L.Display();
}