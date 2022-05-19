#pragma once
#include<iostream>
#include "User.h"
class RegisteredStudent : public User
{

	protected:
		char SID[6];

	public:
		RegisteredStudent();
		RegisteredStudent(char name[], int phoneNumber, char NIC[], char email[], char sid[]);
		void viewNotice();
		void provideFeedback();
		~RegisteredStudent();
};