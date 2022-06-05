#include <iostream>
#include <vector>
using std::string;
using std::vector;

class Subject {
	string fio;
public:
	void searching();
	void seeMarks();
	void homework();
};

class Student: public Subject {
	unsigned int id;
	vector<Book> books;
	string group;
public:
	void return_book();
};

class Teacher : public Subject {
public:
	void doMarks();
};

class Journal {
	vector<Student> students;
	vector<string> date;
public:
	void printMarks();
};

class Bureau{
public:
	void doShedule();
	void searching();
};

class Shedule {
	vector<Day> days;
	unsigned short nweek;
public:
	void printS();
	void setter(Day day);
};

class Day {
	vector<Lesson> lessons;
public:
	void printD();
};

class Lesson {
	string name;
	string teacher_fio;
	string homework;
	vector<Mark> marks;
};

class Mark {
	Student student;
	unsigned short mark;
};

class Book {
	string name;
	unsigned int id;
	bool hasInLib;
public:
	bool hasInLib();
};

class Library {
	vector<Book> books;
public:
	void printInc();
	void printAbsent();
	void printAll();
};

class Librarist {
	string fio;
public:
	void giveBook();
	void searchLib();
};


void Bureau::doShedule() {
	Shedule s;
	
	
}


void Subject::searching() {
	
}