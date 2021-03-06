#include "Animal.h"
using namespace std;

Animal::Animal(): name_(""),domestic_(false), predator_(false){

}

Animal::Animal(string name, bool domestic, bool predator):

  name_(name),domestic_(domestic), predator_(predator)

{

}

string Animal::getName() const{

  return name_;

}

bool Animal::isDomestic() const {

  return domestic_;

}

bool Animal::isPredator() const {

  return predator_;

}

void Animal::setName(string name){
  name_=name;
}

void Animal::setDomestic(){
 domestic_=true;
}

void Animal::setPredator(){
  predator_=true;
}

