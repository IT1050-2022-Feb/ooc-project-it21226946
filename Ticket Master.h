#include<train.h>
#define size 5

class trainmaster{s
	   
	   private:
	   	    char TMID[10];
	   	    char TMname;
	   	    int MObileNO;
	   	    char address[10];
	   	    train*train[size];
	   	    
	   	public:
			trainmaster();
			trainmaster(const char TMId[], const char TMname[], int mobileNo, const char Address[]);
		    void updateTrainDetails();
		    void updateTicketDetails();
		    void login;
		    ~trainmaster();
};
