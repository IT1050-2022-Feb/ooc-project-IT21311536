#include<iostream>
#include<string.h>
#include "UnregisteredStudent.h"
#include "RegisteredStudent.h"
#include "SupportAgent.h"
#include "User.h"
#include "Notice.h"
#include "FAQ.h"
#include "Ticket.h"

using namespace std;

int main()
{
	RegisteredStudent * regstudent = new RegisteredStudent();
	SupportAgent * supagent = new SupportAgent();
 	UnRegisteredStudent * unregstuent = new UnRegisteredStudent();
 	Notice * notice = new Notice();
 	FAQ * newFAQ = new FAQ();
 	Ticket * newTicket = new Ticket();

	delete regstudent;
	delete supagent;
 	delete unregstuent;
 	delete notice;
 	delete FAQ;
 	delete Ticket;
}