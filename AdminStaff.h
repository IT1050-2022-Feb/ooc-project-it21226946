class AdminStaff{
private:
char adStaffID[10];
char name[20];
char username[30];
char password[20];
public:
AdminStaff();
AdminStaff(const char adStaffID[], const char name[], const char username[], 
const char password[]);
void addDetails();
void manageDetails();
~AdminStaff();
};
