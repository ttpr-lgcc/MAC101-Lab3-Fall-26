#include <iostream>
using namespace std;

int main(){
    string name;
    double gpa;
    int credits;
    int holds;
    int coursereq;

    cout <<"Hey, what is your name?" << endl;
    cin >> name;
    cout <<"Hey " <<name <<" what is your GPA?" << endl;
    cin >> gpa;
    cout <<"How many credits do you have?" << endl;
    cin >> credits;
    cout <<"How many holds do you have?" << endl;
    cin >> holds;
    cout <<"How many course reqs do you have left to take?" << endl;
    cin >> coursereq;
    
    if(credits >= 60 && gpa >= 2.0 && holds == 0 && coursereq == 0){
        cout <<"Yay " <<name <<"! You can graduate!" << endl;

    }
    else{
        cout << "Sorry, you can't graduate. You still have work to do!" << endl;
    }

    return 0;
}
