/*Notice*/
#include <iostream>
#include<string.h>
#include"Notice.h"
using namespace std;

Notice :: Notice()
{
  NID[0] = 0;
  cout << "Notice."<< endl;
}
Notice :: Notice(char NID)
{
  strcpy_s(NID);
}
void Notice :: addNewNotice()
{
  
}
void Notice :: deleteExNotice()
{
  
}
void Notice :: updateExNotice()
{
  
}