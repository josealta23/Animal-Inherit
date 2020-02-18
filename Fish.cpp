#include "Fish.h"
using namespace std;

Fish::Fish() : Animal(), venomous_(false)

{}

Fish::Fish(string name, bool domestic, bool predator) :

  Animal(name,domestic,predator), venomous_(false)
{}

bool Fish:: isVenomous() const

{
return venomous_;}

void Fish:: setVenomous()

{
venomous_ = true;}
