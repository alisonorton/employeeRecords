// Employees.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include "Employee.h"

using namespace std;

int main(int argc, char **argv)
{
    //Checking for parameter
    if (argc == 1) {
        cout << "You forgot the file name" << endl;
        exit(0);
    }

    ifstream ifs;
    ifs.open(argv[1], ios::in);
    //Checking for file
    if (!ifs) {
        cout << "Could not find file" << argv[1] << endl;
        exit(0);
    }

    //Getting num of rows in file
    string index;
    getline(ifs, index);
    int n = stoi(index);

    //Array of employee objects
    Employee** employeeIndex = new Employee*[n];

    //Looping to read, store, and populate Employee objects
    for (int i = 0; i < n; i++) {
        //Place holder vars
        string ph1;
        string ph2;
        string ph3;

        //Employee class data
        string name;
        int id;
        int age;
        string job;
        int year;

        //Reading and storing data
        getline(ifs, name, '|');
        getline(ifs, ph1, '|');
        id = stoi(ph1);
        getline(ifs, ph2, '|');
        age = stoi(ph2);
        getline(ifs, job, '|');
        getline(ifs, ph3);
        year = stoi(ph3);

        //Adding employee object into array
        Employee* emp = new Employee(name, id, age, job, year);
        employeeIndex[i] = emp;
    }

    //Dispalying employee information
    for (int i = 0; i < n; i++) {
        employeeIndex[i]->print();
    }
   

}
