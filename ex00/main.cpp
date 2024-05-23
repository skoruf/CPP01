#include "Zombie.hpp"

int main(){

	std::string	name;
	name = "Chris";
	Zombie undead(name);
	undead.announce();
	name = "Bob";
	undead.randomChump(name);
	name = "Kurt";
	Zombie* undead2 = undead.newZombie(name);
	undead2->announce();
	delete undead2;
	return 0;
}
