#pragma once
#include <Enums.hpp>
#include <iostream>

class Vehicle
{
private:
    Enums_T::VehicleType mVehicleType;
    Color mVehicleColor;
    int mNumOfSeats;

public:

    // Constructors
    Vehicle();
    Vehicle(VehicleType vehicleType, Color color, int numOfSeats);
    
    // Distractors
    virtual ~Vehicle()  = default;
    
    // Getters
    int GetNumOfSeats() const;
    const Color& GetVehicleColor() const;
    const VehicleType& GetVehicleType() const;
    
    // Setters
    SysError SetNumOfSeats(int numOfSeats);
    SysError SetVehicleColor(const Color& vehicleColor);
    SysError SetVehicleType(const VehicleType& vehicleType);
    
};
