#include <iostream>
using namespace std;

int main() {

    int credits;
    double gpa;
    int holds;
    int courseReq;

    cout << "Credits: ";
    cin >> credits;

    cout << "GPA: ";
    cin >> gpa;

    cout << "Holds: ";
    cin >> holds;

    cout << "Course requirements: ";
    cin >> courseReq;

    if (credits >= 60 && gpa >= 2.0 && holds == 0 && courseReq == 0) {
        cout << "You can graduate!" << endl;
    }
    else {
        if (credits < 60) {
            cout << "You need more credits." << endl;
        }

        if (gpa < 2.0) {
            cout << "Your GPA is too low." << endl;
        }

        if (holds > 0) {
            cout << "You have a hold." << endl;
        }

        if (courseReq > 0) {
            cout << "You have course requirements left." << endl;
        }
    }

    return 0;
}
