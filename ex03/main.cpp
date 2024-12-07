#include "includes/Ice.hpp"
#include "includes/Cure.hpp"
#include "includes/Character.hpp"

int main( void ) {
    ICharacter  *me = new Character("Me");
    ICharacter  *foe = new Character("Foe");
    AMateria i("ice");
    AMateria c("cure");

    delete me;
    delete foe;
}