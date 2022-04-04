#include <iostream>
#include <utility>

void ref_type(int &x) {
    printf("lvalue reference %d\n",x);
}
void ref_type(int &&x) {
    printf("rvalue reference %d\n", x);
}

int main()
{
    std::cout << "Hello World!\n"; 
    auto x = 1;
    ref_type(std::move(x));
    ref_type(2);
    ref_type(x+2);

}