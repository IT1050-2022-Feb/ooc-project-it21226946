#include <train.h>
#define size 5

Class StationMaster {
	
	private :
		char SMID[10];
		char SMname[10];
		int MobileNo;
		char address[10];
		Train*train[size];

	public :
		StationMaster(const char smId[], const char smName[], int mobileNo, const char Address[]);
		void addtraindetails();
		void displaytraindetails();
		void login();
		~NStationMaster();
};
