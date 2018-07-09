#include "dog.hpp"

std::string const Dog::__type = "DOG";

Dog::Dog() {
	std::cout << "aff aff!" << std::endl;
	type = __type;
	color = giveColor();
}
Dog::~Dog() {
	std::cout << "oughh ough ough!" << std::endl;
}
Dog::Dog(std::string name): Dog() {
	this->name = name;
	std::cout << type << ": " << name << std::endl;
}
std::string Dog::giveColor() {
	std::string box[11] = {"ginger", "black", "rude", "white", "pointed", "chocolate",
	"black&white", "yellow", "purple", "skinny", "tabby"};
	return(box[rand()%11]);
}
void Dog::petAnimal() {
	Animal::petAnimal();
	if (color == "skinny")
		std::cout << "catching the tail" << std::endl;
	else
		std::cout << "kiss in the nouse" << std::endl;
}
void Dog::playAnimal() {
	Animal::playAnimal();
		std::cout << "play the branch" << std::endl;
}
void Dog::feedAnimal() {
	std::cout << "givi the bounes" << std::endl;
}