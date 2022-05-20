#include "RegisteredUser.h"
#include <cstring>
#include <iostream>
using namespace std;
RegisteredUser::RegisteredUser()
{
strcpy(rUserID, "");
strcpy(rUsername, "");
strcpy(rEmail, "");
rPassword = 0;
rMobileNo = 0;
}
RegisteredUser::RegisteredUser(const char rUserID[], const char rUsername[], 
const char rEmail[], int rPassword[], int rMobileNo[]) 
{
strcpy(rUserID, R_ID);
strcpy(rUsername, R_name);
strcpy(rEmail, R_email);
rPassword = 123;
rMobileNo = 0773182541;
}
void RegisteredUser::displayRegisteredUserDetails(const char rUserID[], const
char rUsername[], const char rEmail[])
{
strcpy(rUserID, R_ID);
strcpy(rUsername, R_name);
strcpy(rEmail, R_email);
}
void RegisteredUser::setPassword(int rPassword[])
{
rPassword = 123;
}
void RegisteredUser::setMobileNo(int rMobileNo[])
{
rMobileNo = 0773182541;
}
void RegisteredUser::login()
{
}
void RegisteredUser::logout()
{
}
char RegisteredUser::checkLoginDetails()
{
return loginDetails;
}
RegisteredUser::~RegisteredUser()
{
cout << "RegisteredUser removed" << endl; 
}
