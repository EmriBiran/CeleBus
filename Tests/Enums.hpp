#include <iostream>
class Enums_T
{
    enum Color {WHITE = 0, 
                      RED, 
                      BLUE, 
                      GREEN};

    std::string ColorToStr(Color colorCode){
        std::string sRetVal; 
        
        switch (colorCode)
        {
            case WHITE: sRetVal = "White"; break;
            case RED: sRetVal = "Red"; break;
            case BLUE: sRetVal = "Blue"; break;
            case GREEN: sRetVal = "Green"; break;
            default: sRetVal = "UnDefined"; break;
        }
        return sRetVal;
    }

    enum VehicleType {BUS = 0, 
                            TAXI, 
                            PRIVATE_CAR};
                      
    std::string VehicleTypeToStr(VehicleType vehicleTypeCode){
        std::string sRetVal; 
        
        switch (vehicleTypeCode)
        {
            case BUS: sRetVal = "Bus"; break;
            case TAXI: sRetVal = "Taxi"; break;
            case PRIVATE_CAR: sRetVal = "Private Car"; break;
            default: sRetVal = "UnDefined"; break;
        }
        return sRetVal;
    }

};