#pragma once
#include <string>

using namespace std;

class Employee
{
private:
string name;
int id;
int age;
string job;
int year;

public:
Employee(string, int, int, string, int);
void print();

};
