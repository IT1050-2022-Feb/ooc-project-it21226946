Booking.cpp
#include "Payment.h"
#include "Booking.h"
#include<cstring>
Booking::Booking()
{
    strcpy(BookDescription, "");
    strcpy(BookDate, "");
    strcpy(BookID, "");
    BookPrice = 0;
}
Booking::Booking(const char pbookID[],const char pbookDate[], const char pbookDescription[], double pbookPrice, int pay1, int pay2)
{
    strcpy(BookDescription, pbookDescription);
    strcpy(BookDate, pbookDate);
    strcpy(BookID, pbookID);
    BookPrice = 0;
}
void Booking::calculateBookPrice(int id, char pType[], double pAmt)
{
    if (count < SIZE)
    {
       payment[count] = new Payment(id, pType, pAmt);
       count++;
    }
}
void Booking::displayBookPrice()
{
}
void Booking::addBooking()
{
}
Booking::~Booking()
{
    //Destructor
    for (int i = 0; i < SIZE; i++)
    {
       delete payment[i];
    }
}
