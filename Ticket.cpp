#include <iostream>
#include<string.h>
#include "Ticket.h"
using namespace std;

Ticket::Ticket()
{
	TID[0] = 0;
	cout << "Adding new Ticket." << endl;

};
Ticket::Ticket(char Tid[], string discription, string subject): RegisteredStudent(SID), SupportAgent(EmpId)
{
	char SID;
	char EmpId;
	strcpy_s(TID, Tid);
	string Discription = discription;
	string Subject = subject;
}
void Ticket::DisplayTicket()
{

}
void Ticket::NotifyAgent()
{

}
void Ticket::StoreDetails()
{

}
void Ticket::DisplayStatus()
{

}
Ticket::~Ticket()
{
	cout << "Deleting Ticket" << endl;
}


int main() {

	Ticket* ticket = new Ticket();

	delete ticket;



	return 0;
}