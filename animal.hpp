#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <string>

class Animal
{

protected:
	std::string type;
	std::string color;
	std::string name;
	int			age;

public:
	Animal();
	Animal(std::string type, std::string color);
	Animal(std::string type, std::string color, std::string name);
	virtual ~Animal();

	std::string const	&getName() const;
	virtual void petAnimal();
	virtual void playAnimal();
	virtual void feedAnimal();
	std::string const	&getColor() const;

};

#endif