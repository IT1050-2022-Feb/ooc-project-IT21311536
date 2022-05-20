
#include<iostream>
#include<string.h>
#include "SupportAgent.h"


using namespace std;

SupportAgent::SupportAgent()
{
	empId[0] = 0;
	cout << "Adding new Support Agent." << endl;
}
SupportAgent::SupportAgent(char name[], int phoneNumber, char NIC[], char email[], char EID[]) : User(name, phoneNumber, NIC, email)
{
	strcpy_s(empId, EID);
}
void SupportAgent::resolveTickets()
{

}
void SupportAgent::updateTicketStatus()
{

}
void SupportAgent::sendEmail()
{

}
SupportAgent::~SupportAgent()
{
	cout << "Deleting Support agent details" << endl;
}