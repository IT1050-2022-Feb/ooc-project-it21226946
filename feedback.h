class Feedback { 
private :
char feedbackID; 
char feedbackType; 
public:
Feedback(); 
Feedback(const char feedbackID, const char feedbackType); 
void checkFeedback(); 
void displayFeedback(); 
~Feedback();
};
