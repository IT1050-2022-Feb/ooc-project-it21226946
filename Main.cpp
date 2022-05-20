#include "Packages.h"
#include "Feedback.h"
#include "Booking.h"
#include "StationMaster.h"
#include "TicketMaster.h"
#include "AdminStaff.h"
#include "Train.h"
#include "NonRegisteredUser.h"
#include "Payment.h"
#include "RegisteredUser.h"
#include "Report.h"
#include <iostream>
using namespace std;
int main()
{
//---- Object creation ------
NonRegisteredUser* registeredUser = new RegisteredUser(); // Object -
RegisteredUser class
AdminStaff* stationMaster = new StationMaster(); // Object - StationMaster 
class
AdminStaff* ticketMaster = new TicketMaster(); // Object - TicketMaster 
class
Train* train = new Train(); // Object - Train class
Payment* payment = new Payment(); // Object - Payment class
Booking* booking = new Booking(); // Object - Booking class
Feedback* feedback = new Feedback(); // Object - Feedback class
Report* report = new Report(); // Object - Report class
Packages* packages = new Packages(); // Object - Packages class
//----Method Calling------
registeredUser->login();
registeredUser->displayrUserDetails();
stationMasterr->login();
stationMaster->displayTrainDetails();
stationMaster->addTrainDetails();
ticketMaster->login();
ticketMaster->displayTicketDetails();
ticketMaster->addTicketDetails();
train->updateTrainDetails();
train->deleteTrainDetails();
train->displayTrainDetails();
train->checkAvailability();
payment->checkPayment();
payment->displayPaymentDetails();
payment->addPayment();
booking->displayPrice();
booking->addBooking();
booking->calculateBookingPrice();
feedback->checkFeedback();
feedback->displayFeedback();
report->bookingDetailReport();
report->paymentDetailReport();
packages->addPackage();
packages->displayPackage();
packages->addPackage();
//----Delete Dynamic objects------
delete registeredUser;
delete stationMaster;
delete ticketMaster;
delete train;
delete payment;
delete booking;
delete feedback;
delete report;
delete packages;
return 0;
}
