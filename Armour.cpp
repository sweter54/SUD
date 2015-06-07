#include "Armour.hpp"


Armour:: Armour(std::string name, std::string description, int defense,
        Armour::Slot slot) :
        Item(name, description), defense(defense), slot(slot)
{
        
        
}
Armour::Armour()
{
    this->defense=0;
    slot=NONE;
}
