#include "Car.h"

Car* MakeCar(const std::string& name, int MaxSpeed, Color colorCar)
{
    Car* newCar = new Car;
    newCar->Name = name;
    newCar->MaxSpeed = MaxSpeed;
    newCar->ColorCar = colorCar;
    return newCar;
}

int CountsCarByColor(Car* cars, int count, Color colorCar)
{
    int colorCounter = 0;
    for (int i = 0; i < count; i++)
    {
        if (cars[i].ColorCar == colorCar)
        {
            colorCounter++;
        }
    }
    return colorCounter;
}