#include "Sort.h"
#include "Rectangle.h"
#include "Flight.h"
#include "Time.h"
#include "Movie.h"
#include "Color.h"
#include "Circle.h"
#include "Enums.h"
#include "Car.h"

int main()
{
	const int COUNT = 4;

	Car* CarArray = new Car[COUNT];
	
	CarArray[0] = *MakeCar("Volkswagen", 350, Yellow);
	CarArray[1] = *MakeCar("Toyota", 238, Blue);
	CarArray[2] = *MakeCar("Mercedes", 320, Blue);
	CarArray[3] = *MakeCar("BMW", 190, Blue);

	Color col = ReadColor();
	int count = CountsCarByColor(CarArray, COUNT, col);
	cout << count << endl;
	cout << "Enter color for search: ";
	col = ReadColor();
	for (int i = 0; i < COUNT; i++)
	{
		if (CarArray[i].ColorCar == col)
		{
			cout << "All car with: " << col << endl;
			cout << "Name: " << CarArray[i].MaxSpeed << endl;
			cout << "Max speed: " << CarArray[i].Name << endl;
		}
	}
	delete[] CarArray;
	
	return 0;
}