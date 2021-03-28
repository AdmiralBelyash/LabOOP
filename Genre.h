#pragma once
#include "Functions.h"

#ifndef _GENRE_H_
#define _GENRE_H_

enum Genre
{
	Comedy,
	Drama,
	Thriller,
	Action,
	Horror,
	Blockbuster,
	Fantasy
};

void WriteGenre(Genre);

Genre ReadGenre();

#endif
