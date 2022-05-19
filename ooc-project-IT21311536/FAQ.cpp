#include<iostream>
#include<cstring>
#include<string.h>
#include"FAQ.h"
using namespace std;



FAQ::FAQ() {
	cout << "Adding new FAQ " << endl;
	strcpy_s(FAQ_id, " ");
	FAQ_type = "";
	FAQ_discription = "";


};

FAQ::FAQ(char Fid[], string Ftype, string Fdiscription) 
{

	strcpy_s(FAQ_id, Fid);
	FAQ_type = Ftype;
	FAQ_discription = Fdiscription;

};
void FAQ::addFAQ() {

};
void FAQ::deleteFAQ() {

};
void FAQ::editFAQ() {

};

void FAQ::displayFAQ() {

};

FAQ::~FAQ() {

	cout << "Deleting FAQ " << endl;
};




