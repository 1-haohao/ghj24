#include <string>
#include <iostream>
#include <ostream>
#include"House.h"
using namespace std;
House::House(){
    name="";
    number=0;
} // a default constructor lot number is zero and owner name is an empty string ""
House::House(string ownerName, int lotNumber){
    name=ownerName;
    number=lotNumber;
}
string House:: get_owner_name(){
    return name;
}
int House:: get_lot_number(){
    return number;
}  // returns the house's lot number
House::~House(){}//destructor  