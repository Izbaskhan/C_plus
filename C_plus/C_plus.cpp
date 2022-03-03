#include <iostream>

class book
{
	
public:
	explicit book(const int year, const bool status) 
	{
		if(year<10)
		{
			year_ = 10;
		}
		else
		{
			year_ = year;
		}
		hardcover_ = status;
	}

	void set_year(const int year)
	{
		year_ = year;
	}
	void add_year()
	{
		year_++;
	}
	void set_hardcover(const bool status)
	{
		hardcover_ = status;
	}
	bool get_hardcover() const
	{
		return hardcover_;
	}

	int get_pages() const
	{
		return pages_;
	}
	int get_year() const
	{
		return year_;
	}
private:
	int year_;
	bool hardcover_ = false;
	int pages_ = 0;
};

int main()
{
    std::cout << "Hello World!\n";
	book old_book{(5),(true)};
	old_book.add_year();
    const int x = old_book.get_year();
	std::cout << x;
	
	
   
}


