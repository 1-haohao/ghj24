#include <string>
#include <iostream>
#include <ostream>
#include"House.h"
using namespace std;
int main(){
    House a1("", 0);
    cout<< a1.get_owner_name()<<" "<<a1.get_lot_number()<<endl;
}