#include <iostream>


int main()
{
    std::cout << "Hello World!\n";
    int c1[] = {1,2,3,4,5};
    for (auto i : c1)
    {
        std::cout << "i: " << i << std::endl;
    }
    
    
   
    std::cout << "c1: " << c1 << std::endl;
    std::cout << "c1: " << sizeof(c1) << std::endl;
}


