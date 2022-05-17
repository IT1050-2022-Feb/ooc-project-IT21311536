#include<iostream>
#include<string.h>
#include "RegisteredStudent.h"
#include "SupportAgent.h"
#include "User.h"

using namespace std;

int main()
{
	RegisteredStudent * regstudent = new RegisteredStudent();
	SupportAgent * supagent = new SupportAgent();

	delete regstudent;
	delete supagent;
}