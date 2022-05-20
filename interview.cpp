#include "interview.h"

void Interview::setInterviewId(int interId)
{
	interviewId= interId;
	cout << "Interview ID :" ;
	cin >> interviewId;

}
int Interview::getdisplayID()
{
	cout << "Interview ID :" << interviewId << endl;
	return 0;
}


void Interview::setinterviewType(string interType)
{
	interviewType= interType;
	cout << "Interview Type :";
	cin >> interviewType;
	

}
int Interview::getdisplayTYPED()
{
	cout << "Interview Type :" << interviewType << endl;
	return 0;
}


void Interview::setinterviewDate(string interDate)
{
	interviewDate= interDate;
	cout << "Interview Date :";
	cin >> interviewDate;

}
int Interview::getdisplayDATE()
{
	cout << "Interview Date :" << interviewDate << endl;
	return 0;
}

void Interview::setinterviewTime(string interTime)
{
	interviewTime= interTime;
	cout << "Interview Time :" ;
	cin >> interviewTime;

}
int Interview::getdisplayTIME()
{
	cout << "Interview Time :" << interviewTime << endl;
	return 0;
}

void Interview::setinterviewCompany(string interCom)
{
	interviewCompany= interCom;
	cout << "Interview Company :" ;
	cin >> interviewCompany;

}
int Interview::getdisplayCOMPANY()
{
	cout << "Interview Company :" << interviewCompany << endl;
	return 0;
}
