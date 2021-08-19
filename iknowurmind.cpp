﻿#include <iostream>
#include <cstdlib>
#include <ctime>



int main()
{
	srand ( static_cast <size_t> (time(0)) ) ;
	size_t secret, tries, aiGuess ;

	std::cout << "Enter a number, and don`t tell it to any body!\n\n" ;
	std::cin >> secret ;
	tries = 0;

	do
	{
		aiGuess = rand();
		tries++;
	}

	while (aiGuess != secret) ;

	std::cout << "AI got your mind! Just in " << tries << " tries!" ;

	return 0 ;
}

