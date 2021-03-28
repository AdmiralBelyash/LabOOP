#pragma once

#include <string>
#include "Functions.h"

struct Flight
{
	std::string DeparturePoint;
	std::string Destination;
	int FlightTimeMinutes;
};

void DemoFlight();

void DemoDynamicFlight();

void DemoDynamicFlights();

void FindShortestFlight(Flight* flight, int count);

Flight* MakeFlight(const std::string& DeparturePoint,const std::string& Destination, int flightTimeMinutes);

Flight* CopyFlight(Flight& flight);

void ReadFlight(Flight& flight);

void WriteFlight(Flight& flight);

