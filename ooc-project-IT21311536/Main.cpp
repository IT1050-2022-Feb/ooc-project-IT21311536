#include<iostream>
#include<string.h>
#include "UnregisteredStudent.h"
#include "RegisteredStudent.h"
#include "SupportAgent.h"
#include "User.h"
#include "Notice.h"

using namespace std;

int main()
{
	RegisteredStudent * regstudent = new RegisteredStudent();
	SupportAgent * supagent = new SupportAgent();
  UnRegisteredStudent * unregstuent = new UnRegisteredStudent();
  Notice * Notice = new Notice();

	delete regstudent;
	delete supagent;
  delete unregstuent;
  delete notice;
}