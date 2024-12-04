// Police Officer - Class definition- header file 

#pragma once  // remember, can use #ifndef PARKEDCAR_H , #define PARKEDCAR_H, #endif // PARKEDCAR_H

#include <string>
#include <iostream>
#include "ParkedCar.h"
#include "ParkingMeter.h"
#include "ParkingTicket.h"


using namespace std;

class ParkingTicket;

class PoliceOfficer
{
public:


	PoliceOfficer(const string& first = "Firstname", const string& last = "Lastname", const int& badge = 0)
		:firstname(first), lastname(last), badgeNumber(badge) {} /* constructor(are the type) arguments passed
	 // to constructor, a member variable license is intialized with value of (ln),{} can be empty or include additonal logic
	  // it inintializes the member variables of a class directly with the values passed as arguments to the constructor,*?
	  rather than assigning them inside the constructor body.*/

	//Precondition enter string
	string getFirstname() const { return firstname; } // Begins inline member functions, returns the license number,string&
	string getLastname() const { return lastname; } //returns the make - if separate -string ParkedCar::getMake() const {return make;}
	int getBadgeNumber() const { return badgeNumber; } //returns the minutes parked,int&




	bool examineParkedCar(const ParkedCar& pcar, const ParkingMeter& pmeter) const

	{
		if (pcar.getMinParked() > pmeter.getMinPurchased())
		{
			//ParkingTicket pticket (pcar, pmeter);
			
			//pticket.printTicket();

			return true;
		}
		else
		{
			
			return false;
		}
	}


private:
	string firstname;
	string lastname;
	int badgeNumber;

	//class ParkingTicket; //forward declaration, so don't bring in entire definition, lessen circular dependency
	ParkedCar pcar;  //instance of ParkedCar
	ParkingMeter pmeter;
	//ParkingTicket pticket;
	
};