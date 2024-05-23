#include "Zombie.hpp"

Zombie*	Zombie::zombieHorde( int N, std::string name ){

	Zombie*	newUndead = new Zombie[N];
	for (int i = 0; i < N; i++)
		newUndead[i].setName(name);
	return newUndead;
}
