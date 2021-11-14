#include <stdlib.h>
#include <stdio.h>
#include <ctime>
#include <math.h>
#include <string>
#include <iostream>
#include <timercpp>
using namespace std;

int main(void){
	Timer t = Timer();

t.setInterval([&]() {
    cout << "Hey.. After each 1s..." << endl;
}, 1000); 

t.setTimeout([&]() {
    cout << "Hey.. After 5.2s. But I will stop the timer!" << endl;
    t.stop();
}, 5200);
	return(0);
}
