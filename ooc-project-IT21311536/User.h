#pragma once
/*User*/

#include<iostream>
using namespace std;
class User {

protected:
	char uName[20];
	int uPhoneNumber;
	char uNIC[12];
	char uEmail[30];

public:
	User();
	User(char name[], int phoneNumber, char NIC[], char email[]);
	void viewTicket();
	void viewTicketStatus();
	~User();
};
