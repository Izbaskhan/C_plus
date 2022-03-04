#include <iostream>
/**
 * \brief 
 */
class person
{
public:
    person()
    {
        printf("no argumnet\n");
    }

    explicit person(const int age)
    {
	    if (age > 16)
	    {
            age_ = age;
	    }
        printf("int age\n");
    }

    explicit person(const double weight)
    {
	    if(weight > 20)
	    {
            weight_ = weight;
	    }
        printf("double weight\n");
    }
    person(const int age, const double weight) : age_(age), weight_(weight)
    {
        printf("int age double weight\n");
    }
    ~person() {
        printf("class destructed\n");
    }

private:
    int age_{};
    double weight_{};
};

int test_class()
{
    person p3{ 461.0 };
    return 1;
}

int main()
{
    std::cout << "Hello World!\n";
    person p1;
    test_class();
    person p2{17};
    person p3{ 61.0 };
    person p4{ 18, 75.0 };
    return 0;
}


