#include <string>
#include <iostream>
#include <ostream>
#include "Subdivision.h"
using namespace std;
#include "House.h"
Subdivision::Subdivision(){
       size1=0;
         name1="";
         count = 0;
         lift=new House[size1];
}                               // default constructor
Subdivision::Subdivision(std::string subName, int size){
     size1=size;
     name1=subName;
     count = 0;
      lift=new House[size];
}  // constructor with given subdivision size and 
                                             // subdivision name

// returns the number of houses currently built on the the subdivision
int Subdivision::get_num_houses(){
    
         return count;
}

string Subdivision::get_subdiv_name(){
    return name1;
} // returns the subdivision's name
House * Subdivision::get_houses(){
    return lift;
}          // returns the array of houses currently on the subdivision

// returns true and adds new house to the subdivision if the subdivision is not full
// otherwise returns false
bool Subdivision:: add_house(House new_house){
    
    if(count < size1){
    lift[count]=new_house;
    count++;
        return true;
    } else{
        return false;
    }
    
}

Subdivision::~Subdivision(){
    delete[] lift;
} // destructor