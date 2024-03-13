#include <iostream>
#include <string>

using namespace std;

struct Time { 
    int hours = 0, minutes = 0, seconds = 0; 
    }start, interval;

Time time_add(Time start, Time interval){
    Time a;
    a.hours = ((start.hours + interval.hours) % 24) + ((start.minutes + interval.minutes) / 60);
    a.minutes = ((start.minutes + interval.minutes) % 60) + ((start.seconds + interval.seconds) / 60) ;
    a.seconds = (start.seconds + interval.seconds) % 60;
    return a;
}

int main(){
    start.hours = 10;
    start.minutes = 20;
    start.seconds = 30;
    interval.hours = 40;
    interval.minutes = 50;
    interval.seconds = 60;
    time_add(start, interval);
    return 0;
}