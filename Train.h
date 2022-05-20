class Train{
private:
char trainID[10];
char trainName[20];
char trainFacility[30];
int trainPrice[10];
public:
Train();
Train(const char trainID[], const char trainName[], const char
trainFacility[], int trainPrice[]);
void addTrainDetails();
void deleteTrainDetails();
void updateTrainDetails();
void displayTrainDetails();
void checkAvailability();
~Train();
};
