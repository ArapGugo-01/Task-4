#include<iostream>
#include <string>
using namespace std;
/* ---------- DATA STRUCTURE ---------- */
struct Student {
    int regNo;
    string name;
    int age;
    float averageMark;
};

int main() {

    /* ---------- STRUCTURE USAGE ---------- */
    Student student1;

    student1.regNo = 1023;
    student1.name = "John";
    student1.age = 20;
    student1.averageMark = 75.5;

    cout << "Student Details" << endl;
    cout << "Reg No: " << student1.regNo << endl;
    cout << "Name: " << student1.name << endl;
    cout << "Age: " << student1.age << endl;
    cout << "Average Mark: " << student1.averageMark << endl << endl;

    /* ---------- SELECTION STATEMENTS ---------- */
    int marks;
    cout << "Enter marks: ";
    cin >> marks;

    // IF - ELSE IF - ELSE
    if (marks >= 70) {
        cout << "Grade: Distinction" << endl;
    }
    else if (marks >= 50) {
        cout << "Grade: Pass" << endl;
    }
    else {
        cout << "Grade: Fail" << endl;
    }

    // SWITCH STATEMENT
    char grade;
    cout << "Enter grade (A/B/C): ";
    cin >> grade;

    switch (grade) {
        case 'A':
            cout << "Excellent" << endl;
            break;
        case 'B':
            cout << "Good" << endl;
            break;
        case 'C':
            cout << "Average" << endl;
            break;
        default:
            cout << "Invalid Grade" << endl;
    }

    /* ---------- ITERATION STATEMENTS ---------- */

    // FOR LOOP
    cout << "\nFor Loop Output:" << endl;
    for (int i = 1; i <= 5; i++) {
        cout << i << " ";
    }
    cout << endl;

    // WHILE LOOP
    cout << "\nWhile Loop Output:" << endl;
    int i = 1;
    while (i <= 5) {
        cout << i << " ";
        i++;
    }
    cout << endl;

    // DO - WHILE LOOP
    cout << "\nDo-While Loop Output:" << endl;
    int j = 1;
    do {
        cout << j << " ";
        j++;
    } while (j <= 5);

    cout << endl;

    return 0;
}