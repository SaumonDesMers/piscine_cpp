#include <iostream>
#include <stdint.h>

class Data {
	public:
	int		x;
	Data(int y = 0) : x(y) {}
};

uintptr_t serialize(Data* ptr) {
	return reinterpret_cast<uintptr_t>(ptr);
}

Data* deserialize(uintptr_t raw) {
	return reinterpret_cast<Data *>(raw);
}

int main()
{
	Data* 		ptr = new Data(1);
	uintptr_t	foo = serialize(ptr);
	Data*		bar = deserialize(foo);

	std::cout << "pointer:             " << ptr << std::endl;
	std::cout << "serialize pointer:   " << foo << std::endl;
	std::cout << "deserialize pointer: " << bar << std::endl;

	std::cout << std::endl;

	std::cout << "acces via deserialize pointer: " << bar->x << std::endl;
	return 0;
}
