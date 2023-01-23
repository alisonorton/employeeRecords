#include "Employee.h"
#include <iostream>

using namespace std;

Employee::Employee(string n, int i, int a, string j, int y) {
name = n;
id = i;
age = a;
job = j;
year = y;

}

void Employee::print()
{
cout << "Name:           " << name << endl;
cout << "ID:             " << id << endl;
cout << "Age:            " << age << endl;
cout << "Job:            " << job << endl;
cout << "Hire Year:      " << year << endl;
cout << "*********************************************" << endl;
}
