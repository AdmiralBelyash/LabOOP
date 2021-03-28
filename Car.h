#pragma once
#include "Color.h"
#include "Functions.h"

struct Car
{
	std::string Name;
	int MaxSpeed;
	Color ColorCar;
 };

Car* MakeCar(const std::string& Name, int MaxSpeed, Color ColorCar);

int CountsCarByColor(Car* cars, int count, Color ColorCar);
