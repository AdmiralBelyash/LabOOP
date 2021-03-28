#include "Flight.h"

void DemoFlight()
{
	Flight flight;
	flight.DeparturePoint = "Moscow";
	flight.Destination = "Budapesht";
	flight.FlightTimeMinutes = 90;
}

void DemoDynamicFlight()
{
	Flight* flight = new  Flight();
	ReadFlight(*flight);
	WriteFlight(*flight);
	delete  flight;
}

void DemoDynamicFlights()
{
	const int count = 4;
	Flight* flight = new  Flight[count];
	for (int i = 0; i < count; i++)
	{
		ReadFlight(flight[i]);
	}
	for (int i = 0; i < count; i++)
	{
		WriteFlight(flight[i]);
	}
	delete[] flight;
}

void FindShortestFlight(Flight* flight, int count)
{
	Flight flightMinTime = flight[0];
	for (int i = 0; i < count; i++)
	{
		if (flightMinTime.FlightTimeMinutes > flight[i].FlightTimeMinutes)
		{
			flightMinTime = flight[i];
		}
	}

	std::cout << "The fast flight:" << std::endl;
	WriteFlight(flightMinTime);
}

Flight* MakeFlight(const std::string& DeparturePoint,const std::string& Destination, int flightTimeMinutes)
{
	Flight* newFlight = new Flight();
	newFlight->DeparturePoint = DeparturePoint;
	newFlight->Destination = Destination;
	newFlight->FlightTimeMinutes = flightTimeMinutes;
	return newFlight;
}

Flight* CopyFlight(Flight& flight)
{
	Flight* copyFlight = new Flight();
	copyFlight->DeparturePoint = flight.DeparturePoint;
	copyFlight->Destination = flight.Destination;
	copyFlight->FlightTimeMinutes = flight.FlightTimeMinutes;
	return copyFlight;
}

void ReadFlight(Flight& flight)
{
	std::cout << "From: ";
	std::cin >> flight.DeparturePoint;
	std::cout << std::endl;
	std::cout << "Where: ";
	std::cin >> flight.Destination;
	std::cout << std::endl;
	std::cout << "How long to fly (in minutes): ";
	flight.FlightTimeMinutes = InputIndex();
	std::cout << std::endl;
}

void WriteFlight(Flight& flight)
{
	std::cout << "Your flight from " << flight.DeparturePoint
		      << " to " << flight.Destination
		      << " will be " << flight.FlightTimeMinutes
		      << " minutes" << std::endl;
}