#pragma once

#include <iostream>
#include <vector>

#include "Vehicle.hpp"
#include "AppMember.hpp"


class Event
{
private:
    std::string mEventName;
    int mNumOfParticipants;
    std::vector<AppMember*> mEventOwnerVec;
    std::vector<AppMember*> mEventParticipantsVec;
    
public:
    Event();
    virtual ~Event();

};

