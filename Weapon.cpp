#include "Weapon.hpp"
#include <iostream>

using namespace std;

Weapon::Weapon(int crit,int damage,std::string a,std::string b) : Item(a,b), crit(crit), damage(damage)
{

}
