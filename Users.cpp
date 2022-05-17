// Users.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

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


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
