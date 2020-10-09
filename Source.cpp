// Skynet HK-Aerial
// Jesus Uribe


#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
	srand(static_cast<unsigned int>(time(0)));  //seed random number generator
	
	int searchGridLowNumber = 1;
	int searchGridHighNumber = 64;
	
	int targetLocation = rand() % 64 + 1;  // random number between 1 and 64	
	int tries = 0;

	cout << "\tSkynet Location Tracker\n\n";

	while (true)// Binary search algorithm
	{
		int targetLocationPrediction = ((searchGridHighNumber - searchGridLowNumber) / 2) + searchGridLowNumber;
		tries++;
		

		if (targetLocationPrediction == targetLocation) {	// Statement if both prediction and location are equal 
			cout << "Skynet Counting amount of tries  " << tries << endl;
			cout << "Found in area......#" << targetLocation << endl;
			cout << "Was found at...  #" << targetLocationPrediction << endl;
			cout << "Number of tries Skynet took  " << tries << "  tries." << endl;
			cout <<"...................................................."<< endl;
			break;
		}
		else if (targetLocationPrediction > targetLocation) {  //Statement if prediction is greater than location 
			cout << "Skynet Counting amount of tries  " << tries << endl;
			cout << "Was found at... # " << targetLocationPrediction << " Found in area......." << targetLocation << endl;
			searchGridHighNumber = targetLocationPrediction - 1;
			cout << "The new searchGridHighNumber = " << searchGridHighNumber << endl;
			cout << "...................................................." << endl;

			
			
		}
		else if (targetLocationPrediction < targetLocation) {  //Statement if prediction is lessthan location
			cout << "Skynet Counting amount of tries  " << tries << endl;
			cout << "Was found at... #" << targetLocationPrediction << " Found in area...... " << targetLocation << endl;

			searchGridLowNumber = targetLocationPrediction + 1;
			cout << "The new searchGridLowNumber = " << searchGridLowNumber << endl;
			cout << "...................................................." << endl;
			
		}
	}
	return system("PAUSE");// Returns to start 
}