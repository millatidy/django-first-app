#include <iostream>

class Cat
{
public:
	Cat(int initialAgle);
	~Cat();
	int GetAge();
	void SetAge(int age);
	void Meow();
private:
	int itsAge;
};

Cat::Cat(int initialAgle)
{
	itsAge = initialAgle;
}

Cat::~Cat()
{
}

int Cat::GetAge()
{
	return itsAge;
}

void Cat::SetAge(int age)
{
	itsAge = age;
}

void Cat::Meow()
{
	std::cout << "Meow.\n";
}

int main()
{
	Cat Frisky(5);
	Frisky.Meow();
	std::cout << "Frisky is a cat who is ";
	std::cout << Frisky.GetAge() << " years old.\n";
	Frisky.Meow();
	Frisky.SetAge(7);
	std::cout << "Now Frisky is ";
	std::cout << Frisky.GetAge() << " years old.\n";
	return 0;
}