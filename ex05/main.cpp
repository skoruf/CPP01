#include "Harl.hpp"
#include <iostream>

int main(){

	Harl	harl;
	std::string	debug("DEBUG");
	std::string	info("INFO");
	std::string	warning("WARNING");
	std::string	error("ERROR");
	
	//test debug message
	harl.complain(debug);
	std::cout <<std::endl;
	//test complain message
	harl.complain(info);
	std::cout <<std::endl;
	//test warning message
	harl.complain(warning);
	std::cout <<std::endl;
	//test error message
	harl.complain(error);
	return 0;
}
