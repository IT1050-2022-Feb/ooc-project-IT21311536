/* Unregistered Student */
#pragma once
#include <iostream>

class UnRegisteredStudent
{
protected:
	char utempId[6];

public:
	UnRegisteredStudent();
	UnRegisteredStudent(char tempId[]);
	void viewNotices();
	void createAccount();
	void viewFAQ();
	~UnRegisteredStudent();
};
