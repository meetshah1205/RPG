//
// Created by meet on 11/06/25.
//

#include <iostream>

#include "Headers/allclasses.h"

int main(){
	Warrior warrior1;
	Wizard wizard1;
	Cleric cleric1;
	Rogue rog1;

	std::cout << "Warrior\n"
			  << "\tMaxHP: " << warrior1.getMaxHP() << '\n'
			  << "\tStrength: " << warrior1.getStrength() << '\n'
			  << "\tIntellect: " << warrior1.getIntellect() << '\n';

	std::cout << "\n\nWizard\n"
		  << "\tMaxHP: " << wizard1.getMaxHP() << '\n'
		  << "\tStrength: " << wizard1.getStrength() << '\n'
		  << "\tIntellect: " << wizard1.getIntellect() << '\n';

	std::cout << "\n\nCleric\n"
		  << "\tMaxHP: " << cleric1.getMaxHP() << '\n'
		  << "\tStrength: " << cleric1.getStrength() << '\n'
		  << "\tIntelelct: " << cleric1.getIntellect() << '\n';

	std::cout << "\n\nRogue\n"
		  << "\tMaxHP: " << rog1.getMaxHP() << '\n'
		  << "\tStrength: " << rog1.getStrength() << '\n'
		  << "\tIntelelct: " << rog1.getIntellect() << '\n';

	while (1 < 2) {

	}
	return 0;
}
