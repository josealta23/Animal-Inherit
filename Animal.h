#ifndef ANIMAL_H_
#define ANIMAL_H_
#include <string>
using namespace std;

class Animal
{
public:

  Animal();

    Animal(string, bool domestic=false, bool predator=false);

    string getName() const;

    bool isDomestic() const;

    bool isPredator() const;

    void setName(string);

    void setDomestic();

    void setPredator();

private: 
  string name_;
  bool domestic_;
  bool predator_;

};
#endif

  /*public:
  string name;
  Animal(std::string name, bool domestic = false, bool predator = false);
  std::string getname() const;
  bool isDomestic() const;
  bool isPredator() const;
  void setName(std::string name);
  void setDomestic();
  void setPredator();


  private:
  std::string name;
  bool domestic;
  bool predator;*/
