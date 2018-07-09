#ifndef CAT_HPP
# define CAT_HPP

# include "animal.hpp"
# include <iostream>

class Cat: public Animal
{

private:
	static std::string const __type;
	std::string giveColor();

public:
	Cat();
	virtual ~Cat();
	Cat(std::string name);
	virtual void petAnimal();
	virtual void playAnimal();
	virtual void feedAnimal();
};

#endif