#include<iostream>
#include<string>
#include "interview.h"
using namespace std;

int main()
{

    Interview* I;
    I = new Interview();

    I->setInterviewId(23);
    I->setinterviewType("online");
    I->setinterviewDate("sdf");
    I->setinterviewTime("12:08");
    I->setinterviewCompany("Tesla");
    
     cout << endl;
     
    I->getdisplayID();
    I->getdisplayTYPED();
    I->getdisplayDATE();
    I->getdisplayTIME();
    I->getdisplayCOMPANY();
   

    delete I;
    
    return 0;
}
