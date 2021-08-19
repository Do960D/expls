#include <iostream>
int main() 
{
	char check, a, b, c;
	
	choice:

	std::cin >> check;

	a = '1'; // single quotes are required. specificity of char
	b = '2';
	c = '3';

	do
	{

		if (check == a) { std::cout << "a"; goto choice; } 

		if (check == b) { std::cout << "b"; goto choice; }

		if (check == c) { std::cout << "c"; goto choice; }

		else { std::cout << "no"; }

	}

		while (check == 0);
	
	
	return 0; 
}
