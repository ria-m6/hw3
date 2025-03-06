#ifndef EVENT_H
#define EVENT_H
#include "wire.h"

struct Event
{
    uint64_t time;
    Wire* wire;
    char state;
};

typedef struct EventLess {
        //write the operator() required to make this a functor that compares Events by time
        //In event.h write the operator() implementation for EventLess to create a functor for your heap implementation. 
        //The operator() will take two Event*'s as it’s input and 
        //needs to sort them using the Event::time data member in such a way that your heap will be a min-heap.
        // i.e. Event's are sorted by time.
        bool operator()(const Event* event1, const Event* event2) const {
            return event1->time < event2->time;
        }
} EventLess;
	
#endif
