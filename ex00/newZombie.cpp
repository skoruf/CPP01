#include "Zombie.hpp"
#include <iostream>

Zombie* Zombie::newZombie( std::string name ){

	Zombie* newUndead = new Zombie(name);
	return newUndead;
}
