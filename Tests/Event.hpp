#pragma once

#include <iostream>
#include <vector>
#include <linkedlist>
#include <string>

#include "Vehicle.hpp"
#include "AppMember.hpp"


class Event
{
private:
    std::string mEventName;
    int mNumOfParticipants;
//    std::vector<AppMember*> mEventOwnerVec;
//    std::vector<AppMember*> mEventParticipantsVec;
//    std::linkedlist<Location> mPickUpLocations;
    
public:
    // Constructors
    Event();
    
    // Distractors
    virtual ~Event();
    
    //Getters
    
    // Setters

};

