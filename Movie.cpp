#include "Movie.h"
#include "Functions.h"

void DemoMovie()
{
	Movie movie;
	movie.Name = "Lord of the Rings";
	movie.DurationMinutes = 180;
	movie.MovieGenre = Fantasy;
	movie.Rating = 7.4;
	movie.Year = 2001;

    Movie  movieSecond;
    ReadMovie(movieSecond);
    WriteMovie(movieSecond);
    const int COUNT = 3;
    Movie movieArray[COUNT];
    for (int i = 0; i < COUNT; i++)
    {
        ReadMovie(movieArray[i]);
    }
    for (int i = 0; i < COUNT; i++)
    {
        WriteMovie(movieArray[i]);
    }

    Movie* movie7 = FindBestGenreMovie(movieArray, 3, ReadGenre());
    std::cout << movie7->DurationMinutes << std::endl;
    std::cout << movie7->Name << std::endl;
    std::cout << movie7->Rating << std::endl;
    std::cout << movie7->Year << std::endl;
    // 2.2.4.1
    Movie* moviePointer = &movie;
    // 2.2.4.2
    Movie* moviePointer2 = &movie;
    std::cout << moviePointer << std::endl;
    std::cout << moviePointer2 << std::endl;
}

Movie* MakeMovie(const std::string& name, int duration, int year, Genre ganre, double rating)
{
    Movie* newMove = new Movie();
    newMove->Name = name;
    newMove->DurationMinutes = duration;
    newMove->Year = year;
    newMove->MovieGenre = ganre;
    newMove->Rating = rating;
    return newMove;
}

Movie* CopyMovie(Movie& movie)
{
    Movie* copyMove = new Movie();
    copyMove->Name = movie.Name;
    copyMove->DurationMinutes = movie.DurationMinutes;
    copyMove->Year = movie.Year;
    copyMove->MovieGenre = movie.MovieGenre;
    copyMove->Rating = movie.Rating;
    return copyMove;
}

int CountMoviesByGenre(Movie* movies, int count, Genre genre)
{
    int genreCounter = 0;
    for (int i = 0; i < count; i++)
    {
        if (movies[i].MovieGenre == genre)
        {
            genreCounter++;
        }
    }
    return genreCounter;
}
//2.2.9.5
Movie* FindBestGenreMovie(Movie* movies, int count, Genre  genre)
{
    Movie* searchBest = nullptr;

    for (int i = 0; i < count; i++)
    {
        if (movies[i].MovieGenre == genre)
        {
            if (!searchBest || searchBest->Rating < movies[i].Rating)
            {
                searchBest = &movies[i];
            }
        }
    }
    return searchBest;
}

void  ReadMovie(Movie& movie)
{
    std::cout << "Movie name: ";
    std::cin >> movie.Name;
    std::cout << std::endl;

    std::cout << "Duration in minute: ";
    std::cin >> movie.DurationMinutes;
    std::cout << std::endl;

    std::cout << "Year: ";
    movie.Year = InputIndex();
    std::cout << std::endl;

    std::cout << "Genre: ";
    movie.MovieGenre = ReadGenre();
    std::cout << std::endl;

    std::cout << "Rating: ";
    std::cin >> movie.Rating;
    std::cout << std::endl;
}

void WriteMovie(Movie& movie)
{
    std::cout << "The  movie: " << movie.Name << std::endl;
    std::cout << "Duration in minute: " << movie.DurationMinutes << std::endl;
    std::cout << "Year: " << movie.Year << std::endl;
    std::cout << "Genre: ";
    WriteGenre(movie.MovieGenre);
    std::cout << "Rating: " << movie.Rating << std::endl;
}

