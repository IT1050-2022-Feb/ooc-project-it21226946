#include "Feedback.h"
#include <cstring>
#include <iostream>
using namespace std;
Feedback::Feedback()
{
strcpy(feedbackID, "");
strcpy(feedbackType, "");
} 
Feedback::Feedback(const char feedbackID, const char feedbackType)
{ 
strcpy(feedbackID, F_ID);
strcpy(feedbackType, F_type); 
} 
void Feedback::checkFeedback()
{
} 
void Feedback::displayFeedback()
{
}
Feedback::~Feedback()
{
cout << "Feedback removed" << endl; 
}
