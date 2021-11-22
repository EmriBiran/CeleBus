#include "Vehicle.hpp"

Vehicle::Vehicle(): mVehicleColor(Color::WHITE), mVehicleType(VehicleType::BUS), mNumOfSeats(0) { }
Vehicle::Vehicle(VehicleType vehicleType, Color color, int numOfSeats): mVehicleColor(color), mVehicleType(vehicleType), mNumOfSeats(numOfSeats) { }

// Getters
int Vehicle::GetNumOfSeats() const { return mNumOfSeats; }
const Color& Vehicle::GetVehicleColor() const { return mVehicleColor; }
const VehicleType& Vehicle::GetVehicleType() const { return mVehicleType; }

// Setters
SysError Vehicle::SetNumOfSeats(int numOfSeats) {
    this->mNumOfSeats = numOfSeats;
    return SysError::SUCCESS;
}
SysError Vehicle::SetVehicleColor(const Color& vehicleColor) {
    this->mVehicleColor = vehicleColor;
    return SysError::SUCCESS;
}
SysError Vehicle::SetVehicleType(const VehicleType& vehicleType) {
    this->mVehicleType = vehicleType;
    return SysError::SUCCESS;
}