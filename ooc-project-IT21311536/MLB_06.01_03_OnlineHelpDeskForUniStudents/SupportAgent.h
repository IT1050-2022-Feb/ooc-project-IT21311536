#pragma once
#include<iostream>
#include "User.h"
class SupportAgent :public User
{
	protected:
		char empId[6];

	public:
		SupportAgent();
		SupportAgent(char name[], int phoneNumber, char NIC[], char email[], char EID[]);
		void resolveTickets();
		void updateTicketStatus();
		void sendEmail();
		~SupportAgent();
};


