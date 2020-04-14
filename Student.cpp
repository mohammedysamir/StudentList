#include "Student.h"
Student::Student() {
	Name = " ";
	ID = 0;
	GPA = 0.0;
}
Student::Student(string n, int i, float g) {
	Name = n;
	ID = i;
	GPA = g;
}
void Student::set_Name(string n) {
	Name = n;
}
void Student::set_ID(int i) {
	ID=i;
}
void Student::set_GPA(float g) {
	GPA=g;
}
string Student::get_Name() {
	return Name;
}
int Student::get_ID() {
	return ID;
}
float Student::get_GPA() {
	return GPA;
}