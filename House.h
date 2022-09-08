#ifndef HOUSE.H
#define HOUSE.H

#include <string>
#include <iostream>
#include <ostream>

using namespace std;
class House{
public:
House();  // a default constructor lot number is zero and owner name is an empty string ""
House(string ownerName, int lotNumber);// a constructor that takes the lot number and house owner name
string get_owner_name(); // returns the name of the house owner
int get_lot_number();  // returns the house's lot number
~House(); //destructor  
private:
string name;
int number;
} ;
#endif             