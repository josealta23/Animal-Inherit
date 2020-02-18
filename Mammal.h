#ifndef MAMMAL_H_
#define MAMMAL_H_
#include <iostream>
using namespace std;
#include "Animal.h"

class Mammal:public Animal//derived from class/template Animal

{
public:

  Mammal();

  Mammal(string name, bool domestic=false, bool predator=false);

  void setHair();
  bool hasHair() const;

  void setAirborne();
  bool isAirborne() const;
  
  void setAquatic();
  bool isAquatic() const;

  void setToothed();
  bool isToothed() const;

  void setFins();
  bool hasFins() const;

  void setTail();
  bool hasTail() const;

  void setLegs(int legs);
  int legs() const;
  
private:

  bool hair_;
  bool airborne_;
  bool aquatic_;
  bool toothed_;
  bool fins_;
  bool tail_;
  int legs_;
};
#endif 
