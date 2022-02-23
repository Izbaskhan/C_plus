#include <iostream>

enum class race
{
	orban,
	witcher,
	varior
};

int main()
{
    std::cout << "Hello World!\n";
    constexpr auto gamer = race::varior;	
	switch (gamer)
	{
	case race::orban:
		{
			std::cout << "orban!\n";
		}
		break;
	case race::witcher:
		std::cout << "witcher!\n";
		break;
	case race::varior:
		{
			std::cout << "varior!\n";			
		}
		break;
	default:
		{
			std::cout << "out\n";
		}
		break;
	}
}


