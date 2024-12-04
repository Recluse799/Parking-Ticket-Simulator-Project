// Parking Meter - Class definition- header file 

#pragma once  // remember, can use #ifndef PARKEDCAR_H , #define PARKEDCAR_H, #endif // PARKEDCAR_H


#include <iostream>

using namespace std;

class ParkingMeter
{
public:
	ParkingMeter( int minPur = 0): minPurchased(minPur) 
		{
			if (minPurchased < 0) {
				cout << "Error: Minutes parked cannot be negative. Exiting program." << endl;
				exit(EXIT_FAILURE); // Exit the program with failure status
			}
		} /* constructor(are the type) arguments passed
	 // to constructor, a member variable license is intialized with value of (ln),{} can be empty or include additonal logic
	  // it inintializes the member variables of a class directly with the values passed as arguments to the constructor,*?
	  rather than assigning them inside the constructor body. const int&*/  

	int getMinPurchased() const { return minPurchased; } //returns the minutes purchased int&

private:
	int minPurchased;

	 // Begins inline member functions, returns the license number
	//returns the make - if separate -string ParkedCar::getMake() const {return make;}
	
	
};
