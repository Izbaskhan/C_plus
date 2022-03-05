#include <iostream>
struct element
{
	element* next{};
	void insert_after(element* new_element)
	{
		new_element->next = next;
		next = new_element;
	}
	char prefiv[2]{};
	short operating_number{};
};

int main()
{
    std::cout << "Hello World!\n";
	element trooper1, trooper2, trooper3 ;
	trooper1.prefiv[0] = 'T';
	trooper1.prefiv[1] = 'K';
	trooper1.operating_number = 421;
	trooper1.insert_after(&trooper2);
	trooper2.prefiv[0] = 'F';
	trooper2.prefiv[1] = 'N';
	trooper2.operating_number = 2187;
	trooper2.insert_after(&trooper3);
	trooper3.prefiv[0] = 'S';
	trooper3.prefiv[1] = 'L';
	trooper3.operating_number = 005;
	for (element *cursor = &trooper1; cursor; cursor=cursor->next)
	{
		printf("storm %c%c-%d\n",
			cursor->prefiv[0],
			cursor->prefiv[1],
			cursor->operating_number);
	}
}


