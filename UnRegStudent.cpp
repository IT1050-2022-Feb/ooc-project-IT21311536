
/* Unregistered Student */

#include <iostream>
#include <string.h>
#include "UnregisteredStudent.h"
using namespace std;

UnRegisteredStudent::UnRegisteredStudent()
{
    utempId[0] = 0;
    cout << "Adding Unregistered student." << endl;
}

UnRegisteredStudent::UnRegisteredStudent(char tempId[])
{
    strcpy_s(utempId, tempId);
}

void UnRegisteredStudent::viewNotices()
{

}

void UnRegisteredStudent::createAccount()
{

}

void UnRegisteredStudent::viewFAQ()
{

}

UnRegisteredStudent::~UnRegisteredStudent()
{
    
}

