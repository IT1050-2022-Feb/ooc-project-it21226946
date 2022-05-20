#include "AdminStaff.h"
#include<cstring>
AdminStaff::AdminStaff()
{
strcpy(adStaffID, "");
strcpy(name, "");
strcpy(username, "");
strcpy(password, "");
}
AdminStaff::AdminStaff(const char adStaffID[], const char name[], const char
username[], const char password[])
{
strcpy(adStaffID, admin_ID);
strcpy(name, adStaff_Name);
strcpy(username, adStaff_Username);
strcpy(password, adStaff_Password);
}
void AdminStaff::addDetails()
{
}
void AdminStaff::manageDetails()
{
}
AdminStaff::~AdminStaff()
{
//Destructor 
cout << "AdminStaff removed" << endl;
}
