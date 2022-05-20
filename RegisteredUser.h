class RegisteredUser{
private:
char rUserID[10];
char rUsername[20];
char rEmail[30];
int rPassword[10];
int rMobileNo[10];
public:
RegisteredUser();
RegisteredUser(const char rUserID[], const char rUsername[], const char
rEmail[], int rPassword[], int rMobileNo[]);
void displayRegisteredUserDetails();
void setPassword();
void setMobileNo();
void login();
void logout();
char checkLoginDetails();
~RegisteredUser();
};
