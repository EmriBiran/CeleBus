#include "Vehicle.hpp"

Vehicle::Vehicle(): mVehicleColor(Color::WHITE), mVehicleType(VehicleType::BUS), mNumOfSeats(0) { }
Vehicle::Vehicle(VehicleType vehicleType, Color color, int numOfSeats): mVehicleColor(color), mVehicleType(vehicleType), mNumOfSeats(numOfSeats) { }

Vehicle::~Vehicle () {}

// Getters
int Vehicle::GetNumOfSeats() const { return mNumOfSeats; }
const Color& Vehicle::GetVehicleColor() const { return mVehicleColor; }
const VehicleType& Vehicle::GetVehicleType() const { return mVehicleType; }

// Setters
Vehicle& Vehicle::SetNumOfSeats(int numOfSeats) {
    this->mNumOfSeats = numOfSeats;
    return *this;
}
Vehicle& Vehicle::SetVehicleColor(const Color& vehicleColor) {
    this->mVehicleColor = vehicleColor;
    return *this;
}
Vehicle& Vehicle::SetVehicleType(const VehicleType& vehicleType) {
    this->mVehicleType = vehicleType;
    return *this;
}