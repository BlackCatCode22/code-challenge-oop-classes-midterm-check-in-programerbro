#include <iostream>
# include<list>
#include<vector>
#include<string>

using namespace std;

class Animal {

private:
    string name = "";
    char sex ;
    int age;
    string habitat= "";
    string color = "";
    double weight ;
    string species = "";
public:
    int numOfAnimals = 0;
    Animal(const string& name, string habitat, const string& species,string color,char sex,int age, double weight)
    :name(name),species(species),sex(sex){}


    };


class Hyena: public Animal{
public:
    Hyena(string name,string habitat,string color,string species,char sex,int age,double weight):Animal(name,habitat,color,species,sex,age,weight){
name = Hyena

    }
};




int main()
{
    cout << "Welcome to my zoo!!" << endl;

    Animal myNewAnimal01("joker","Hyena");

    cout << " the number of animals is" << Animal::numOfAnimals << endl;

    cout << "the animal name is " << myNewAnimal01.name() << endl;
    cout << " the animal species is "<< myNewAnimal01.species() << endl;


    return 0;
}
