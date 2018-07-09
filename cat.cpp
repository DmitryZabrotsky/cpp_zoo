#include "cat.hpp"

std::string const Cat::__type = "CAT";

Cat(): type(__type) {
	std::cout << "meow meow meow :3" << std::endl;
}