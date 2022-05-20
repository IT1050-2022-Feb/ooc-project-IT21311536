#pragma once
/*Registered Student*/
#include<iostream>
#include "User.h"
#include "Ticket.h"

class RegisteredStudent : public User
{

	protected:
		char SID[6];
		 Ticket * ticket[0];

	public:
		RegisteredStudent();
		RegisteredStudent(char name[], int phoneNumber, char NIC[], char email[], char sid[]);
		void viewNotice();
		void provideFeedback();
		~RegisteredStudent();
};