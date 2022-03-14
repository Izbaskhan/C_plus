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
void hari_kari() noexcept
{
	throw std::runtime_error{ "Goodbye" };
}

int main()
{
    std::cout << "Hello World!\n";
	try
	{
		grocho obj{};
		grocho::forget(15);
		//hari_kari();
		grocho::forget(0xFACE);
		grocho::forget(0xC0FFEE);
	}
	catch (const std::system_error& ex)
	{
		printf("exception: %s\n", ex.what());
		std::cout << ex.code() << "\n";
	}
	catch (...)
	{
		printf("panic:");
	}
}


