// Police Officer - Class definition- header file 

#pragma once  // remember, can use #ifndef PARKEDCAR_H , #define PARKEDCAR_H, #endif // PARKEDCAR_H

#include <string>
#include <iostream>
#include "ParkedCar.h"
#include "ParkingMeter.h"
#include "PoliceOfficer.h"


using namespace std;



class ParkingTicket

{
public:
	ParkingTicket(const ParkedCar& pcar, const ParkingMeter& pmeter, const PoliceOfficer& pofficer);
		 /* constructor declared with initialization list, constructor definition cannot be included in the headerfile.*/
	

	
	void printTicket() const; //Print the ticket
	
	double calculateFine() const;   /// Calculate the fine based on time exceeded
	
	//ParkingTicket(string ln = "Lic", string mk = "mak", string ml = "mol", string co = "col", int mn = 0, int minPur = 0,
	//	string first = "first", string last = "last", int ID = 0);
	//Constructor 
	//The member variables are set according to the 
	//parameters.
	//Postcondition: firstName = first; lastName = last;
	//               dMonth = month; dDay = day; 
	//               dYear = year; personID = ID;
	//               If no values are specified, the default 
	//               values are used to initialize the member 
	//               variables.


private:
	const double baseFine = 25.0;        // Initial fine for the first hour
	const double hourlyFine = 10.0;     // Additional fine for each subsequent hour

	ParkedCar parkcar;  //instance of ParkedCar
	ParkingMeter parkingme;
	PoliceOfficer polofficer;
	
};
