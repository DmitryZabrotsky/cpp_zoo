#include "animal.hpp"
#include <iostream>
#include "dog.hpp"
#include "cat.hpp"

int main(int argc, char const *argv[])
{
	srand(time(0));
	Dog rob = Dog("Rob");
	rob.petAnimal();
	rob.playAnimal();
	rob.feedAnimal();
	rob.setGender(Gender::male);
	std::cout << rob.getColor() << std::endl;

	std::cout << std::endl;

	Animal *bobby = new Dog("Bobby");
	bobby->petAnimal();
	bobby->playAnimal();
	bobby->feedAnimal();
	bobby->setGender(Gender::female);
	std::cout << bobby->getColor() << std::endl;

	std::cout << std::endl;

	Cat topor = Cat("Topor");
	topor.petAnimal();
	topor.playAnimal();
	topor.feedAnimal();
	std::cout << topor.getColor() << std::endl;
	topor.showGender();
	topor.setGender(Gender::male);
	topor.showGender();

	std::cout << std::endl;

	Dog *puppy = Dog::getChild(rob, *(dynamic_cast<Dog *>(bobby)));
	std::cout << puppy->getColor() << std::endl;

	std::cout << std::endl;

	return 0;
}