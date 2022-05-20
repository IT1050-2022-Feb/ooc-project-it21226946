#include "Report.h"
Report::Report()
{
strcpy(reportID, "");
for (int i = 0; i < SIZE1; i++)
{
book[i] = 0;
}
for (int j = 0; j < SIZE2; j++)
{
pay[j] = 0;
}
}
Report::Report(const char reportID[], Booking* rbook[], Payment* rpay[])
{
strcpy(reportID, R_ID);
for (int i = 0; i < SIZE1; i++)
{
book[i] = rbook[i];
}
for (int j = 0; j < SIZE2; j++)
{
pay[j] = rpay[j];
}
}
void Report::bookingDetailReport()
{
}
void Report::salesReport()
{
}
void Report::paymentDetailReport()
{
}
Report::~Report()
{
//Destructor 
for (int i = 0; i < SIZE1; i++)
{
delete book[i] ;
}
for (int j = 0; j < SIZE2; j++)
{
delete pay[j] ;
}
}
