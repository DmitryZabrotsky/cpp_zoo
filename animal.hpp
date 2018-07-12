#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <string>
# include "gender.hpp"

class Animal
{

protected:
	std::string type;
	std::string color;
	std::string name;
	int			age;
	Gender 		gender;

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
	void showGender();
	void setGender(Gender gender);
	void setColor(std::string color);

};

#endif