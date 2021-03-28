#pragma once
#include<string>
#include "Genre.h"

struct Movie
{
	std::string Name;
	int DurationMinutes;
	int Year;
	Genre MovieGenre;
	double Rating;
};

void DemoMovie();

void ReadMovie(Movie& movie);

Movie* MakeMovie(const std::string& name, int duration, int year, Genre ganre, double rating);

Movie* CopyMovie(Movie& movie);

int CountMoviesByGenre(Movie* movies, int count, Genre genre);

Movie* FindBestGenreMovie(Movie* movies, int count, Genre  genre);

void WriteMovie(Movie& movie);

