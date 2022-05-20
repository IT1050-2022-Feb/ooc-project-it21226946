Train Master.cpp

#include<TrainMaster.h>
#include<Train.h>
#include<cstring>

TrainMaster::TrainMaster()
{
			strcpy (TMID,"");
	   	    strcpy (TMname,"");
	   	    MobileNO=0;
	   	    strcpy(address,"");
	   	    for(i=0 ; i <= SIZE ; SIZE++)
			   train[i] = 0 ; 
}
TrainMaster::TrainMaster(const char tmId[], const char tmName[], int mobileNo, const char Address[])
{
	strcpy(TMID, tmId);
	strcpy(TMname, tmName);
	MobileNo = mobileNo;
	strcpy(address, Address);
}

void TrainMaster::updatetraindetails() 
{
	
}

void TrainMaster::updateticketdetails() 
{

}

void TrainMaster::login() 
{

}

TrainMaster::~NTrainMaster()
{
}
;