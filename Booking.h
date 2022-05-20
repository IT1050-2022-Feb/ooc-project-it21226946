#include"Payment.h"
#define SIZE 2
class Booking 
{
private:
   char BookDescription[50];
   char BookDate[20];
   char BookID[100];
   double BookPrice;
   int count = 0;
   Payment* payment[SIZE];
public:
   Booking();
   Booking(const char pbookDescription[], const char pbookDate[],const char pbookID[],double pbookPrice,int pay1, int pay2);
   void calculateBookPrice(int id, char pType[], double pAmt);
   void displayBookPrice();
   void addBooking();
   ~Booking();
};
