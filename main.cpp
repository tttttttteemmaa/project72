#include "main.h"

class Student {
public:
	string name;
	int age;
	double mark;
	bool alive;

	Student(string name, int age, double mark, bool alive) {
		this->name = name;
		this->age = age;
		this->mark = mark;
		this->alive = alive;
	}
};

int main() {

	Student st1("Alex", 15, 9.5, true);
	Student st2("Peter", 14, 4.5, false);

	Student* array = new Student[2]{ st1, st2 };

	ofstream fout;

	fout.open("students.txt");
	if (fout.is_open()) {

		fout << "testing..." << "testing..." << "testing...";
		fout.close();
	}
	
	ifstream fin;
	fin.open("text.txt");
	if (fin.is_open()) {
		string msg;
		fin >> msg;
		cout << "Out from file: " << msg;
		fin.close();
	}

	return 0;
}