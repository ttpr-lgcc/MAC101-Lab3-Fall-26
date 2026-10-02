#include <iostream> 
int main(){ 
double gpa = 4.00;
int holds=0;
int credits=61;
int courseReq= 0;

std:: cout<< "What is your GPA?"<< std::endl;
 std::cin >> gpa;

 std::cout << "Hello my gpa is " << gpa
              << std::endl;

 std:: cout<<"How many holds you have?" <<std::endl;
 std::cin >>holds;

 std:: cout<<"I have " <<holds<<std::endl;

 std:: cout<< "How many credits do you have?"<<std::endl;
 std::cin>>credits; 

 std::cout<<"I have "<<credits<<std::endl;

 std:: cout<<"How many course requirements you have left?"<<std::endl;
 std::cin>>courseReq;

 std::cout<<"I have "<<courseReq<<" left."<<std::endl;


if (gpa>=2.00 && credits>=60 && holds==0 && courseReq==0){
 std:: cout << "You can graduate";
 return 0;

} else {
    std::cout<< "You cannot graduate!";
}

}
;

