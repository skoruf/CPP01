#include "Zombie.hpp"
#include <iostream>

void Zombie::randomChump( std::string name ){

	Zombie newZombie(name);
	newZombie.announce();
}
