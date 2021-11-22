#include "AppMember.hpp"

AppMember::AppMember() : mEmailAddress("Example@Company.com"), 
                         mMemberFamilyName("Family Name"), 
                         mMemberFirstName("First Name"),  
                         mMemberPassword("Password"),
                         mPhoneNumber("050XXXXXXX"){}


SysError AppMember::SetMEmailAddress(const std::string& emailAddress) {
    this->mEmailAddress = emailAddress;
    return SysError::SUCCESS;
}

SysError AppMember::SetMMemberFamilyName(const std::string& memberFamilyName) {
    SysError retVal = IsValidString(memberFamilyName);
    if(retVal == SysError::SUCCESS)
        this->mMemberFirstName = memberFamilyName;
    return retVal;
}

SysError AppMember::SetMMemberFirstName(const std::string& memberFirstName) {
    SysError retVal = IsValidString(memberFirstName);
    if(retVal == SysError::SUCCESS)
        this->mMemberFirstName = memberFirstName;
    return retVal;
}

SysError AppMember::SetMMemberPassword(const std::String& memberPassword) {
    if(memberPassword.size() < 8) return SysError::TOO_LITTLE_CHARS;
    this->mMemberPassword = memberPassword;
    return SysError::SUCCESS;
}

SysError AppMember::SetMPhoneNumber(const std::string& phoneNumber) {
    this->mPhoneNumber = phoneNumber;
    return SysError::SUCCESS;
}

SysError AppMember::SetMEventList(const std::vector<Event>& eventList) {
    this->mEventList = eventList;
    return SysError::SUCCESS;
}

const std::string& AppMember::GetMEmailAddress() const { return mEmailAddress; }    
const std::vector<Event>& AppMember::GetMEventList() const { return mEventList; }
const std::string& AppMember::GetMMemberFamilyName() const { return mMemberFamilyName; }
const std::string& AppMember::GetMMemberFirstName() const { return mMemberFirstName; }
const std::String& AppMember::GetMMemberPassword() const { return mMemberPassword; }
const std::string& AppMember::GetMPhoneNumber() const { return mPhoneNumber; }


// return true if the string contains only chars and 2-10 charecters
static SysError IsValidString(const std::string& s) {
    if(s.size() > 10) return SysError::TOO_MANY_CHARS;
    if(s.size() < 2) return SysError::TOO_LITTLE_CHARS;
    if(std::any_of(s.begin(), s.end(), std::isdigit)) return SysError::CHARECTERS_ONLY;
    return SysError::SUCCESS;
}
