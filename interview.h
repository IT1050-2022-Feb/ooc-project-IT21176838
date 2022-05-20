#include<iostream>
#include<string>
using namespace std;
class Interview
{
private: 
	int interviewId;
	string interviewType;
	string interviewDate;
	string interviewTime;
	string interviewCompany;
public:
	void setInterviewId(int interId);	
	void setinterviewType(string interType);	
	void setinterviewDate(string interDate);	
	void setinterviewTime(string interTime);	
	void setinterviewCompany(string interCom);
	
	int getdisplayID();
	int getdisplayTYPED();
	int getdisplayDATE();
	int getdisplayTIME();
	int getdisplayCOMPANY();
};
