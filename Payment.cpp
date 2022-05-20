#include "Payment.h"
#include<cstring>
Payment::Payment(){
strcpy(paymentID, "" );
strcpy(paymentType, "" );
amount = 0;
}
Payment::Payment(const char paymentID, const char paymentType[], double
amount){
strcpy(paymentID, P_ID);
strcpy(paymentType, P_Type);
amount = 100000;
}
void Payment::checkPayment()
{
}
void Payment::displayPaymentDetails()
{
}
void Payment::addPayment()
{
}
Payment::~Payment()
{
cout << "Payment removed" << endl;
}
