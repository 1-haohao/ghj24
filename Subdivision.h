#ifndef SUB.H
#define SUB.H
#include <string>
#include <iostream>
#include <ostream>

using namespace std;
#include "House.h"
class Subdivision{
public:
Subdivision();                               // default constructor
Subdivision(std::string subName, int size);  // constructor with given subdivision size and 
                                             // subdivision name

// returns the number of houses currently built on the the subdivision
int get_num_houses(); 

std::string get_subdiv_name();  // returns the subdivision's name
House * get_houses();           // returns the array of houses currently on the subdivision

// returns true and adds new house to the subdivision if the subdivision is not full
// otherwise returns false
bool add_house(House new_house);

~Subdivision(); // destructor
private:
int size1;
std::string name1;
House*  lift;
int count;
};
#endif