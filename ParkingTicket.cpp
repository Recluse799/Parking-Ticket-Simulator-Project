// Police Officer - Class definition- header file 

#pragma once  // remember, can use #ifndef PARKEDCAR_H , #define PARKEDCAR_H, #endif // PARKEDCAR_H


#include <iostream>

#include "ParkingTicket.h"

using namespace std;


ParkingTicket::ParkingTicket(const ParkedCar& pcar, const ParkingMeter& pmeter, const PoliceOfficer& pofficer) 
	: parkcar(pcar), parkingme(pmeter), polofficer(pofficer) {} // constructor definition/* constructor(are the type) arguments passed
	 // to constructor, a member variable license is intialized with value of (ln),{} can be empty or include additonal logic
	  // it inintializes the member variables of a class directly with the values passed as arguments to the constructor,*?
	  //rather than assigning them inside the constructor body.*/
	
	void ParkingTicket::printTicket() const
	{
		cout << "*** Parking Ticket ***:\n";
		cout << "Officer: " << polofficer.getFirstname() << " " << polofficer.getLastname() << " Badge #" << polofficer.getBadgeNumber() << " \n";
		cout << " Vehicle License Number: " << parkcar.getLicense() << "\n";
		cout << "Make: " << parkcar.getMake() << " Model: " << parkcar.getModel() << " Color: " << parkcar.getColor() << "\n";
		cout << "Meter Minutes: " << parkingme.getMinPurchased() << " Minutes Parked: " << parkcar.getMinParked() << " minutes\n";
		cout << "Parking Fee: $" << calculateFine() <<".00" << endl;
	}


	double ParkingTicket:: calculateFine() const   /// Calculate the fine based on time exceeded
	{
		int overMinutes = parkcar.getMinParked() - parkingme.getMinPurchased();
		if (overMinutes <= 0) 
		{
			cout << "No violation. Have a great day!" << endl;// No violation

			return 0.0;// No fine

		}
		
		int ExtraMinutes = (overMinutes - 1) / 60; // Determine extra hours (rounded down)
		return baseFine + ExtraMinutes * hourlyFine;
	}

	
