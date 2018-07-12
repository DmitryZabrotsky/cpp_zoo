#ifndef DOG_HPP
# define DOG_HPP

# include "animal.hpp"
# include <iostream>

class Dog: public Animal
{

private:
	static std::string const __type;
	std::string giveColor();

public:
	Dog();
	virtual ~Dog();
	Dog(std::string name);
	virtual void petAnimal();
	virtual void playAnimal();
	virtual void feedAnimal();
	static Dog *getChild(Dog &parent1, Dog &parent2);
};

#endif