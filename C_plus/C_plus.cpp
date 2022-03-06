#include <iostream>

struct person
{
	int age{};
};

person p1{12}, p2{3},p3{5},p4{8};

person persons[5]
{
	p1,p2,p3,p4
};
struct contract
{
	person contract_persons[10]{};
	int index{};
	void add(const person& el)
	{
		contract_persons[index] = el;
		index++;
	};
};

void form_company(contract &contract)
{
	for (const auto& person:persons)
	{
		contract.add(person);
	}
}

int main()
{
	contract contracts{};
    std::cout << "Hello World!\n";
	form_company(contracts);
}


