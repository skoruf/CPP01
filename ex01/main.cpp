#include "Zombie.hpp"

int main(){

	std::string	name;
	name = "Chris";
	Zombie	undead(name);
	name = "Bob";
	Zombie*	undead2 = undead.zombieHorde(6, name);
	
	for (int i = 0; i < 6; i++){
	
		undead2[i].announce();
	}
	delete [] undead2;
	return 0;
}
