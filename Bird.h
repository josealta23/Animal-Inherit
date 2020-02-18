#ifndef BIRD_H_
#define BIRD_H_
#include "Animal.h"
using namespace std;

class Bird : public Animal//derived from class/template Animal

{

public:

  Bird();

  Bird(string name, bool domestic = false, bool predator = false);

  bool isAirborne() const;

  bool isAquatic() const;

  void setAirborne();

  void setAquatic();

private:

  bool airborne_;

  bool aquatic_;

};

#endif /* BIRD_H_ */

//end of Bird.h

// Bird.cpp
