#include "Train.h"
#include <cstring>
#include <iostream>
using namespace std;
Train::Train()
{
strcpy(trainID, "");
strcpy(trainName, "");
strcpy(trainFacility, "");
trainPrice = 0;
}
Train::Train(const char trainID[], const char trainName[], const char
trainFacility[], int trainPrice[]) 
{
strcpy(trainID, T_ID);
strcpy(trainName, T_name);
strcpy(trainFacility, T_Facility);
trainPrice = 2000;
}
void Train::addTrainDetails()
{
}
void Train::deleteTrainDetails()
{
}
void Train::updateTrainDetails()
{
}
void Train::displayTrainDetails()
{
}
void Train::checkAvailability()
{
}
Train::~Train()
{
cout << "Train removed" << endl; 
}
