#include <iostream>

char petruchio(const char* shrew) 
{
	const char tesst = shrew[0];
    return tesst;
}

int main()
{
    std::cout << "Hello World!\n";
    int original = 100;
    int& original_ref = original;
    printf("original: %d\n", original);
    printf("original_ref: %d\n", original_ref);

    constexpr int new_value = 200;
    original_ref = new_value;
}


