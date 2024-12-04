// Parking Ticket Simulator Project.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "ParkingTicket.h"
#include "ParkedCar.h"
#include "ParkingMeter.h"
#include "PoliceOfficer.h"

int main() 
{
   
    ParkedCar pcar("XYZ123", "Toyota", "Corolla", "Blue", 350); //  minutes parked, create Parked car object

    
    ParkingMeter pmeter(60); // 60 minutes purchased, parking meter object

   
    PoliceOfficer pofficer("Immanuel", "Braxton", 1234); // Officer name and badge number,  police officer object

   
    pofficer.examineParkedCar(pcar, pmeter);// Examine the car and issue a ticket if needed
    
    ParkingTicket pticket(pcar, pmeter, pofficer);
    
    pticket.printTicket();

    return 0;
}   