#include<iostream>
#include<string.h>
#include "RegisteredStudent.h"


using namespace std;


RegisteredStudent::RegisteredStudent()
{
	SID[0] = 0;
	cout << "Adding new student." << endl;
}
RegisteredStudent::RegisteredStudent(char name[], int phoneNumber, char NIC[], char email[], char sid[]) : User(name, phoneNumber, NIC, email)
{
	strcpy_s(SID, sid);
}
void RegisteredStudent::viewNotice()
{
}
void RegisteredStudent::provideFeedback()
{
}
RegisteredStudent::~RegisteredStudent()
{
	cout << "Deleting registered student details" << endl;
}