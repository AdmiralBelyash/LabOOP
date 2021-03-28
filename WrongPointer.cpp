#include "WrongPointer.h"
#include "Flight.h"
#include "Movie.h"


void WrongPointers()
{
	Movie movie;
	Flight flight;
	//Movie* wrongMoviePointer = &flight;
	//Flight* wrongFlightPointer = &movie;
	Movie* moviePointer = &movie;
	Flight* flightPointer = &flight;
}