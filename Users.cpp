

#include <iostream>

#include<iostream>
#include "User.h"
#include<string.h>

User::User()
{
	uPhoneNumber = 0;
	uEmail[0] = 0;
	uNIC[0] = 0;
	uName[0] = 0;
}
User::User(char name[], int phoneNumber, char NIC[], char email[])
{
	strcpy_s(uName, name);
	strcpy_s(uNIC, NIC);
	strcpy_s(uEmail, email);
	uPhoneNumber = phoneNumber;
}
void User::viewTicket()
{
}
void User::viewTicketStatus()
{
}
User::~User()
{
}

