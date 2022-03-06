#include <iostream>
static int rat_power{ 200 };

void power_rat (int isotopes)
{
	rat_power += isotopes;
	const auto waste_heat = rat_power * 20;
	if (waste_heat > 1e4)
	{
		printf("Danger\n");
	}
}

int main()
{
    std::cout << "Hello World!\n";
	printf("rat power: %d\n", rat_power);
	power_rat(100);
	printf("rat power: %d\n", rat_power);
	power_rat(500);
	printf("rat power: %d\n", rat_power);
}


