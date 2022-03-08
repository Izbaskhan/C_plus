#include <iostream>

struct grocho
{
	static void forget(int x)
	{
		if(x==0xFACE)
		{
			throw std::runtime_error{ "I'd be glad to make an exception" };
		}
		printf("forgot 0x%x\n", x);
	}
};

int main()
{
    std::cout << "Hello World!\n";
	try
	{
		grocho obj{};
		grocho::forget(15);
		grocho::forget(0xFACE);
		grocho::forget(0xC0FFEE);
	}
	catch (const std::exception& e)
	{
		printf("exception: %s\n", e.what());
	}
}


