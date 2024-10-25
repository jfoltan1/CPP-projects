#ifndef ZOMBIE_H
#define ZOMBIE_H

#include <string.h>
#include <iostream>

class Zombie
{
private:
	std::string name;
public:
	Zombie(/* args */);
	~Zombie();
	void announce(); //TODO print name of the zombie <name>: BraiiiiiiinnnzzzZ...
	Zombie* newZombie(std::string name);//TODO It creates a zombie, name it, 
						//and return it so you can use it outside of the function
	void randomChump(std::string name);//TODO It creates a zombie, name it, and the zombie announces itself.
};

