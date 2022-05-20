#include "NonRegisteredUser.h"
#include <cstring>
#include <iostream>
using namespace std;
NonRegisteredUser::NonRegisteredUser()
{
strcpy(nUserID, "");
strcpy(nName, "");
strcpy(nEmail, "");
strcpy(nAddress, "");
nMobileNo = 0;
}
NonRegisteredUser::NonRegisteredUser(const char nUserID[], const char nName[], 
const char nEmail[], const char nAddress[], int nMobileNo[]) 
{
strcpy(nUserID, N_ID);
strcpy(nName, N_name);
strcpy(nEmail, N_email);
strcpy(nAddress, N_address);
nMobileNo = 0713736126;
}
void NonRegisteredUser::displayNonRegisteredUserDetails(const char nUserID[], 
const char nName[], const char nEmail[], const char nAddress
{
strcpy(nUserID, N_ID);
strcpy(nName, N_name);
strcpy(nEmail, N_email);
strcpy(nAddress, N_address);
}
void NonRegisteredUser::setMobileNo(int nMobileNo[])
{
nMobileNo = 0713736126;
}
void NonRegisteredUser::login()
{
}
void NonRegisteredUser::logout()
{
}
char NonRegisteredUser::checkLoginDetails()
{
return loginDetails;
}
NonRegisteredUser::~NonRegisteredUser()
{
cout << "NonRegisteredUser removed" << endl; 
}
