#include <iostream>

struct person
{
    char name[256];
    int year;
    ~person()
    {
        std::cout << "destroed\n";
    }
};

void add_year(person& per, int year)
{
    per.year = year;
    std::cout << per.year << "\n";
}

int main()
{
    std::cout << "Hello World!\n";
    person per{};
    add_year(per, 33);
    std::cout << per.year << "\n";
 }


