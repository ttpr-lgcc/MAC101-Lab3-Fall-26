#include<iostream>
using namespace std;
int main(){
    //variables
    int credits;
    double gpa;
    int holds;
    int courseReq;
    //user input
    cout<<"Enter total credits earned: ";
    cin>>credits;
    cout<<"Enter GPA: ";
    cin>>gpa;
    cout<<"Enter number of holds on account: ";
    cin>>holds;
    cout<<"Enter number of remaining course requirements: ";
    cin>>courseReq;
//single if statement that uses && operator to check if all 4 conditions are met at once
    if(credits>=60&&gpa>=2.0&&holds==0&&courseReq==0){
        cout<<"Congratulations! You are eligible to graduate!\n";
    }
//else block using nested if statemeents to give user helpful feedback if they do not qualify
else {
    cout<<"You are not eligible to graduate yet. Please review the missing requirements below:\n";
    if(credits<60){
        cout<<"Credits: You have "<<credits<<" credits. You need at least 60.\n";
    }
    if(gpa<2.0){
        cout<<"GPA: Your GPA is "<<gpa<<". You must have at least a 2.0.\n";
    }
    if(holds!=0){
        cout<<"Holds: You have "<<holds<<" active hold(s). Clear all holds on your account.\n";
    }
    if(courseReq!=0){
        cout<<"Course Requirements: You have "<<courseReq<<" course(s) remaining to finish.\n";
    }
}
return 0;
}
