#include <iostream>
enum class operation
{
	add,
	subtract,
	multiply,
	divide
};

struct calculator
{
	explicit calculator(const operation op) : op_(op)
	{
	}
	int calc(const int a, const int b) const
	{
		switch (op_)
		{
		case operation::add:
			return a + b;
		case operation::subtract:
			return a - b;
		case operation::multiply:
			return a * b;
		case operation::divide:
			return a / b;
		
		}
		return 0;
	}
	void set_op(const operation op)
	{
		op_ = op;
	}

private:
	operation op_;
};

int main()
{
    std::cout << "Hello World!\n";
	
    calculator calc{operation::add };
	std::cout << "add " << calc.calc(45,7) << "\n";
	calc.set_op(operation::divide);
	std::cout << "divide " << calc.calc(45, 7) << "\n";
	calc.set_op(operation::subtract);
	std::cout << "subtract " << calc.calc(45, 7) << "\n";
	calc.set_op(operation::multiply);
	std::cout << "multiply " << calc.calc(45, 7) << "\n";
	return 0;
}


