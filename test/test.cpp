#include "../src/header.hpp"

#include <iomanip>
#include <iostream>
using namespace std;

int main(){

if(multiple(0, 1) != 0){
    cerr << "Fail: wrong answer!" << endl;
    return 1;
}

if(multiple(-1, 1) != -1){
    cerr << "Fail: wrong answer!" << endl;
    return 1;
}


cout << "OK" << endl;


    return 0;
}