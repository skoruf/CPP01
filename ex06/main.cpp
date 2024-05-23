#include "Harl.hpp"
#include <iostream>

int main(int argc, char **argv){

	if (argc != 2)
		return std::cout <<"Wrong number of args" <<std::endl, 1;
	
	std::string	filter(argv[1]);
	std::string level[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	Harl	harl;
	
	int i = 0;
	while (i < 4 && filter.compare(level[i]))
		i++;
	
	//if (i == 4)
	//	std::cout <<"[ Probably complaining about insignificant problems ]" <<std::endl;
	//while (i < 4)
	//	harl.complain(level[i++]);
	switch(i){
		case 0:
			while (i < 4)
				harl.complain(level[i++]);
			break;
		case 1:
			while (i < 4)
				harl.complain(level[i++]);
			break;
		case 2:
			while (i < 4)
				harl.complain(level[i++]);
			break;
		case 3:
			while (i < 4)
				harl.complain(level[i++]);
			break;
		default:
			std::cout <<"[ Probably complaining about insignificant problems ]" <<std::endl;
	}

	return 0;
}
