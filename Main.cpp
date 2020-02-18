#include <iostream>
#include <string>
#include "Animal.h"
#include "Mammal.h"
#include "Bird.h"
#include "Fish.h"

using namespace std;

int main
(int, char **) {

  string Aname;//incase changes to animal name

  Animal pig;
  cout<<"\nenter a name for the animal: "<<"\n";//cin>>Aname;//interactive part if desired
  Aname="josh";

  pig.setName(Aname);
  if(pig.getName()=="josh"){

    cout<<"the pigs name is: "<<pig.getName()<<"\n";
  }else
  {
  cout<<"that is not the pigs name"<<"\n";}

  if(pig.isDomestic()==false){

    cout<<"The pig is domestic"<<"\n";
  }else
  {
    cout<<"The pig isnt domestic"<<"\n";}

  if(pig.isPredator()==false){

        cout<<"Pig is not a predator"<<"\n";

  }else
  
  {
    cout<<"Pig is a predator"<<"\n";}


  Animal jaguar = Animal("jaguar",true, true);

  if(jaguar.getName()=="jaguar"){

    cout<<"\n"<<"the animal is a "<<jaguar.getName()<<"\n";

  }else{

    cout<<"this is not a"<<jaguar.getName()<<"\n";

  }

  if(jaguar.isDomestic()){

    cout<<jaguar.getName()<<" is domestic"<<"\n";

  }else{

    cout<<jaguar.getName()<<" is not domestic"<<"\n";

  }

  if(jaguar.isPredator()){

  cout<<jaguar.getName()<<" is a predator"<<"\nend of Animal "<<"\n";

  }else{

        cout<<jaguar.getName()<<"not a predator"<<"end of Animal "<<"\n";

       }

  Mammal dog("junior");

  if(dog.isDomestic())
  cout<<dog.getName()<<" is not domestic"<<"\n";

  else
  cout<<"\n"<<dog.getName()<<" is a domestic anmial (dog)"<<"\n";

  if(dog.isAirborne())
  cout<<"dog is airborne"<<"\n";

  else
  cout<<"dog is not airborne"<<"\nend of Mammal"<<"\n";


 
  Bird hawk("hawk");

  if(hawk.isDomestic())

    cout<<"\n"<<hawk.getName()<<" is domestic"<<"\n";

  else

    cout<<"\n"<<hawk.getName()<<" is not domestic"<<"\n";

  if(hawk.isAquatic())

    cout<<hawk.getName()<<" is aquatic"<<"\n"<<"end of Bird"<<"\n";

  else

    cout<<hawk.getName()<<" is not aquatic"<<"\n"<<"end of Bird"<<"\n";

  
  Fish tuna("tuna",false,true);

  if(tuna.isPredator())

    cout<<"\n"<<tuna.getName()<<" is a predator"<<"\n";

  else

    cout<<"\n"<<tuna.getName()<<" is not a predator"<<"\n";

  tuna.setVenomous();

  if(tuna.isVenomous())

    cout<<tuna.getName()<<" is not venemous! \n"<<"end of Fish"<<"\n";

  else

    cout<<tuna.getName()<<" is venemous! "<<"end of Fish"<<"\n";
       return 0;

}
