#define SIZE1 5
#define SIZE2 5
class Report{
private:
char reportID;
Booking* book[SIZE1];
Payment* pay[SIZE2];
public:
Report();
Report(const char reportID[], Booking* rbook[], Payment* rpay[]
);
void bookingDetailReport();
void salesReport();
void paymentDetailReport();
~Report();
};
