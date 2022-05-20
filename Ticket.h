#pragma once
/*Ticket*/
#include<iostream>
#include "RegisteredStudent.h"
#include "SupportAgent.h"
using namespace std;

class Ticket
{
protected:
    
    string Discription;
    string Subject;
    char TID[6];

public:
    Ticket();
    Ticket(char Tid[], string discription, string subject);
    void DisplayTicket();
    void NotifyAgent();
    void StoreDetails();
    void DisplayStatus();
    ~Ticket();
};
