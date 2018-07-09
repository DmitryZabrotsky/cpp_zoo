#ifndef CAT_HPP
# define CAT_HPP
# include <iostream>

class Cat: public Animal
{

private:
	static std::string const __type;

public:
	Cat();
	~Cat();
	
};

#endif