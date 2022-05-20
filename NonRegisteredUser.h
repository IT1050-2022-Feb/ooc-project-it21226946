class NonRegisteredUser{
private:
char nUserID[10];
char nName[20];
char nEmail[30];
char nAddress[50];
int nMobileNo[10];
public:
NonRegisteredUser();
NonRegisteredUser(const char nUserID[], const char nName[], const char
nEmail[], const char nAddress[], int nMobileNo[]);
void displayNonRegisteredUserDetails();
void setMobileNo();
void login();
void logout();
char checkLoginDetails();
~NonRegisteredUser();
};
