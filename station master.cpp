StationMaster.cpp

#include<StationMaster.h>
#include<Train.h>
#include<cstring>

StationMaster:: StationMaster(const char smId[], const char smName[], int mobileNo, const char Address[])
{
	strcpy(SMID, smId);
	strcpy(SMname, smName);
	MobileNo = mobileNo;
	strcpy(address, Address);
}

void StationMaster::addtraindetails() 
{
	
}

void StationMaster::displaytraindetails() 
{

}

void StationMaster::login() 
{

}

StationMaster::~NStationMaster()
{
	
}
