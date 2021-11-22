#include <iostream>
#include <string>

// Return value with positive outcome shouled
enum class SysError {
    FAILED = 0,
    SUCCESS,
    NOT_SUPPORTED,
    NOT_AVAILABLE,
    OUT_OF_RANGE,
    OUT_OF_BOUND,
    VALUE_TOO_HIGH,
    VALUE_TOO_LOW,
    NUMBERS_ONLY,
    CHARECTERS_ONLY,
    TOO_MANY_CHARS,
    TOO_LITTLE_CHARS
};

enum class Color { WHITE = 0, RED, BLUE, GREEN };
static std::string ColorToStr(Color colorCode)
{
    std::string sRetVal;

    switch(colorCode) {
    case Color::WHITE:
        sRetVal = "White";
        break;
    case Color::RED:
        sRetVal = "Red";
        break;
    case Color::BLUE:
        sRetVal = "Blue";
        break;
    case Color::GREEN:
        sRetVal = "Green";
        break;
    default:
        sRetVal = "UnDefined";
        break;
    }
    return sRetVal;
}

enum class VehicleType { BUS = 0, TAXI, PRIVATE_CAR };
static std::string VehicleTypeToStr(VehicleType vehicleTypeCode)
{
    std::string sRetVal;

    switch(vehicleTypeCode) {
    case VehicleType::BUS:
        sRetVal = "Bus";
        break;
    case VehicleType::TAXI:
        sRetVal = "Taxi";
        break;
    case VehicleType::PRIVATE_CAR:
        sRetVal = "Private Car";
        break;
    default:
        sRetVal = "UnDefined";
        break;
    }
    return sRetVal;
}
