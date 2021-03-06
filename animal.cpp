#include "animal.hpp"
#include <iostream>

Animal::Animal() {
	std::cout << "animal was born!" << std::endl;
}

Animal::Animal(std::string type, std::string color): type(type), color(color), age(0) {
	std::cout << "animal " << this->type << " was born!" << std::endl;
}

Animal::Animal(std::string type, std::string color, std::string name): Animal(type, color) {
	this->name = name;
}

Animal::~Animal() {
	std::cout << "animal " << type << " is died :(" << std::endl;
}

std::string const	&Animal::getName() const {
	return(name);
}

void Animal::petAnimal() {
	std::cout << "petting " << type << " " << name << std::endl;
}
void Animal::playAnimal() {
	std::cout << "playing with " << type << " " << name << std::endl;
}
void Animal::feedAnimal() {
	std::cout << "feeding " << type << " " << name << std::endl;
}

std::string const	&Animal::getColor() const {
	return (color);
}
void Animal::showGender() {
	if (gender == Gender::male)
		std::cout << "male";
	else if (gender == Gender::female)
		std::cout << "female";
	else
		std::cout << "undefined";
	std::cout << std::endl;
}
void Animal::setGender(Gender gender) {
	this->gender = gender;
}
void Animal::setColor(std::string color) {
	this->color = color;
}
