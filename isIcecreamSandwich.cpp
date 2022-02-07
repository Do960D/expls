#include <iostream>
#include <string>

int main()
{
	
	std::string isIcecreamSandwich;
	//std::cin >> isIcecreamSandwitch;

	isIcecreamSandwich = "aaccaa";	

	if (isIcecreamSandwich.size() <= 2)
	std::cout << "too less symbols, bude. write more.";
	
	int j = isIcecreamSandwich.size();

	for (std::string::size_type i = 0; i < isIcecreamSandwich.size(); ++i)
	{	
		if (isIcecreamSandwich[i] == (isIcecreamSandwich[j-1]))
		{
			std::cout << "Sandwitch structure is good\n";
			--j;
		}
	
		else
		{
			std::cout << "it is not a sandwich\n";
			break;
		}
	}

}


