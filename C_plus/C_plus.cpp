#include <iostream>


struct person
{
    person(const person& other) : age(other.age)
    {
        strncpy_s(buffer, other.buffer, 15);
    }
    person(const int age) : age(age)
    {
    }

    int age;
    char buffer[15]{};
};

struct MyStruct
{
    MyStruct(const MyStruct&) = delete;
    int age;
};

int main()
{
    std::cout << "Hello World!\n";
    // Это релиз
    // Копирование классов
    person pr_a{ 15 };
    const auto pr_b{ pr_a };
    std::cout << pr_b.age << "\n";
    std::cout << pr_b.buffer << "\n";
    
}
