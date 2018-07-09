#include "animal.hpp"
#include <iostream>
#include "dog.hpp"

int main(int argc, char const *argv[])
{
	srand(time(0));
	Dog rob = Dog("Rob");
	rob.petAnimal();
	rob.playAnimal();
	rob.feedAnimal();
	std::cout << rob.getColor() << std::endl;

	std::cout << std::endl;

	Animal *bobby = new Dog("Bobby");
	bobby->petAnimal();
	bobby->playAnimal();
	bobby->feedAnimal();
	delete bobby;
	return 0;
}