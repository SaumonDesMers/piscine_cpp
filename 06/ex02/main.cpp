#include <iostream>
#include <cstdlib>
#include <ctime>

class Base {
	public:
	virtual ~Base() {};
};

class A : public Base {};
class B : public Base {};
class C : public Base {};

Base	*generate(void) {
	std::srand(std::time(NULL));
	int		x = std::rand()/((RAND_MAX + 1u) / 3);

	switch (x)
	{
	case 0:
		std::cout << "Create new intance of A" << std::endl;
		return new A();
	case 1:
		std::cout << "Create new intance of B" << std::endl;
		return new B();
	case 2:
		std::cout << "Create new intance of C" << std::endl;
		return new C();
	}
	return NULL;
}

void	identify(Base * p) {
	A	*a = dynamic_cast<A *>(p);
	B	*b = dynamic_cast<B *>(p);
	C	*c = dynamic_cast<C *>(p);

	std::cout << "With a pointer: ";
	if (a)
		std::cout << "A" << std::endl;
	else if (b)
		std::cout << "B" << std::endl;
	else if (c)
		std::cout << "C" << std::endl;
	else
		std::cout << "NULL" << std::endl;
}

void	identify( Base & p) {
	std::cout << "With a reference: ";
	try
	{
		A	&a = dynamic_cast<A &>(p);
		std::cout << "A" << std::endl;
		(void)a;
	}
	catch(...)
	{
		try
		{
			B	&b = dynamic_cast<B &>(p);
			std::cout << "B" << std::endl;
			(void)b;
		}
		catch(...)
		{
			try
			{
				C	&c = dynamic_cast<C &>(p);
				std::cout << "C" << std::endl;
				(void)c;
			}
			catch(...)
			{
				std::cout << "NULL" << std::endl;
			}
		}
	}

}

int main()
{
	Base *p = generate();
	identify(p);
	identify(*p);
	delete p;
	return 0;
}
