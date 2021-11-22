#pragma once
#include "Event.hpp"
#include "Include/enums.hpp"

#include <string>
#include <vector>
#include <algorithm>
#include <cctype>

class AppMember
{
private:
    std::string mMemberFirstName;
    std::string mMemberFamilyName;
    std::string mPhoneNumber;
    std::string mEmailAddress;
    std::String mMemberPassword;
    std::vector<Event*> mEventList;

public:

    // Constructors
    AppMember();
    
    // Distructors
    virtual ~AppMember() = default;
    
    // Setters
    SysError SetMEmailAddress(const std::string& emailAddress);
    SysError SetMMemberFamilyName(const std::string& memberFamilyName);
    SysError SetMMemberFirstName(const std::string& memberFirstName);
    SysError SetMMemberPassword(const std::String& memberPassword);
    SysError SetMPhoneNumber(const std::string& phoneNumber);
    SysError SetMEventList(const std::vector<Event*>& eventList);
    
    // Getters
    const std::string& GetMEmailAddress() const;
    const std::string& GetMMemberFamilyName() const;
    const std::string& GetMMemberFirstName() const;
    const std::String& GetMMemberPassword() const;
    const std::string& GetMPhoneNumber() const;
    const std::vector<Event*>& GetMEventList() const;

};
