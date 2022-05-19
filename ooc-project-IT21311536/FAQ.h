#pragma once
#include<iostream>
#include<cstring>
#include<string>
#include "User.h"
using namespace std;


class FAQ 
{

protected:
	char FAQ_id[20];
	string FAQ_type;
	string FAQ_discription;

public:
	FAQ();
	FAQ(char Fid[], string Ftype, string Fdiscription);
	void addFAQ();
	void deleteFAQ();
	void editFAQ();
	void displayFAQ();
	~FAQ();

};



