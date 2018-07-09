#include "cat.hpp"

std::string const Cat::__type = "CAT";

Cat::Cat() {
	std::cout << "meow meow :3" << std::endl;
	type = __type;
	color = giveColor();
}
Cat::~Cat() {
	std::cout << "fshhh!" << std::endl;
}
Cat::Cat(std::string name): Cat() {
	this->name = name;
	std::cout << type << ": " << name << std::endl;
}
std::string Cat::giveColor() {
	std::string box[5] = {"milk", "chokolate", "black&white",
	"brown", "threecolor"};
	return (box[rand()%5]);
}
void Cat::petAnimal() {
	Animal::petAnimal();
	if (color == "threecolor")
		std::cout << "my lucky " << std::endl;
	else
		std::cout << "scratch ear" << std::endl;
}
void Cat::playAnimal() {
	Animal::playAnimal();
		std::cout << "play the ball" << std::endl;
}
void Cat::feedAnimal() {
	std::cout << "pour the milk	" << std::endl;
}