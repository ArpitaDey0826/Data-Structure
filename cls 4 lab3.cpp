#include <iostream>
using namespace std;


    struct Student {
    int id;
    int creditsCompleted;
    float cgpa;
};



int main() {

    Student students[10];
    students[0] = {1, 60, 3.8};
    students[1] = {2, 45, 3.9};
    students[2] = {3, 70, 3.7};
    students[3] = {4, 55, 3.6};
    students[4] = {5, 80, 3.8};
    students[5] = {6, 40, 3.9};
    students[6] = {7, 65, 3.5};
    students[7] = {8, 75, 3.7};
    students[8] = {9, 30, 3.8};
    students[9] = {10, 90, 3.6};



    cout << "Students with CGPA > 3.75:" << endl;
    for (int i = 0; i < 10; i++) {
        if (students[i].cgpa > 3.75) {
            cout << "Student ID: " << students[i].id << endl;
        }
    }



    cout << "Students with Credits Completed > 50:" << endl;
    for (int i = 0; i < 10; i++) {
        if (students[i].creditsCompleted > 50) {
            cout << "Student ID: " << students[i].id << endl;
        }
    }



    return 0;
}

