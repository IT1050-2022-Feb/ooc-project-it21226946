class Payment{
private:
char paymentID;
char paymentType[20];
double amount;
public:
Payment();
Payment(const char paymentID, const char paymentType[], double amount);
void checkPayment();
void displayPaymentDetails();
void addPayment();
~Payment();
};