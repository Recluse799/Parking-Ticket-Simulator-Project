// Parking Meter - Class definition- header file 

#pragma once  // remember, can use #ifndef PARKEDCAR_H , #define PARKEDCAR_H, #endif // PARKEDCAR_H

#include <string>

using namespace std;

class ParkedCar
{
public:
	ParkedCar(const string& ln = "lICENSE", const string& mk = "MAKE", const string& ml = "MODEL", const string& co = "COLOR",
		const int& mn = 0) :license(ln), make(mk), model(ml), color(co)
	{
		if (mn < 0) {
			throw invalid_argument("Minutes parked cannot be negative.");
		} minParked = mn;
	} 
		/* constructor(are the type) arguments passed
	 // to constructor, a member variable license is intialized with value of (ln),{} can be empty or include additonal logic
	  // it inintializes the member variables of a class directly with the values passed as arguments to the constructor,*?
	  rather than assigning them inside the constructor body.*/


	// Pre condition: enter string
	string getLicense() const { return license; } // Begins inline member functions, postcondition: returns the license number
	string getMake() const { return make; } // Postcondition: returns the make - if separate -string ParkedCar::getMake() const {return make;}
	string getModel() const { return model; } //Postcondition: returns the model
	string getColor() const { return color; } //Postcondition: returns the color

	//Preconditon: must be an integer
	int getMinParked() const { return minParked; } //returns the minutes parked

private:
	string license;
	string make;
	string model;
	string color;
	int minParked;

	
};

 