#ifndef FISH_H_
#define FISH_H_
//using namespace std;//gave error when imput//
#include "Animal.h"


class Fish : public Animal//derived from class/template Animal
{

public:

  Fish();

  Fish(string name, bool domestic=false, bool predator=false);

  bool isVenomous() const;

  void setVenomous();

private:

  bool venomous_;

};

#endif 
