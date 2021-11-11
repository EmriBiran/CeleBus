#pragma once
#include "Enums.hpp"

class Vehicle
{
private:
    Enums_T::VehicleType mVehicleType;
    Enums_T::Color mVehicleColor;
    int mNumOfSeats;

public:

    // Constructors
    Vehicle();
    Vehicle(Enums_T::VehicleType vehicleType, Enums_T::Color color, int numOfSeats);
    
    // Distractors
    virtual ~Vehicle();
    
    // Getters
    int GetNumOfSeats() const;
    const Enums_T::Color& GetVehicleColor() const;
    const Enums_T::VehicleType& GetVehicleType() const;
    
    // Setters
    Vehicle& SetNumOfSeats(int numOfSeats);
    Vehicle& SetVehicleColor(const Enums_T::Color& vehicleColor);
    Vehicle& SetVehicleType(const Enums_T::VehicleType& vehicleType);
    
};
