#include <iostream>
enum operation
{
	add,
	subtract,
	multiply,
	divide
};

struct calculator
{
	 calculator(const operation op) : op_(op)
	{
	}
	int calc(const int a, const int b) const
	{
		switch (op_)
		{
		case add:
			return a + b;
		case subtract:
			return a - b;
		case multiply:
			return a * b;
		case divide:
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
	
    calculator calc{ add };
	std::cout << "add " << calc.calc(45,7) << "\n";
	calc.set_op(divide);
	std::cout << "divide " << calc.calc(45, 7) << "\n";
	calc.set_op(subtract);
	std::cout << "subtract " << calc.calc(45, 7) << "\n";
	calc.set_op(multiply);
	std::cout << "multiply " << calc.calc(45, 7) << "\n";
	return 0;
}


