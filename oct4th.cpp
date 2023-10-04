#include <iostream>
#include<string>
#include<vector>

using namespace std;

class Animal{
private:
    string name;
    string species;
     int numOfAnimals ;

public:
    Animal(string n,string s):
        name(n),species(s){
        numOfAnimals++;
        }

        string Gname(){
        return name;
        }

        string Gspecies(){
        return species;
        }
        int GetnumOfAnimals(){
        return numOfAnimals;
        }

};

class Hyena:public Animal{
private:
 int numOfHyena ;

public:
Hyena( string name,string species):
    Animal(name,species){
    numOfHyena++;
    }

    int GetnumOfHyena(){
    return numOfHyena;
    }


};
class Tiger:public Animal{
private:
  int numOfTiger = 0;

public:
Tiger( string name,string species):
    Animal(name,species){
    numOfTiger++;
    }

    int GetnumOfTiger(){
    return numOfTiger;
    }


};
class Lion:public Animal{
private:
   int numOfLion = 0;

public:
Lion( string name,string species):
    Animal(name,species){
    numOfLion++;
    }

    int GetnumOfLion(){
    return numOfLion;
    }


};
class Bear:public Animal{
private:
   int numOfBear ;

public:
Bear( string name,string species):
    Animal(name,species){
    numOfBear++;
    }

    int GetnumOfBear(){
    return numOfBear;
    }

};
int main()
{
   cout << "welcome to the animal class practice" <<  endl;


   Hyena myHyena = Hyena("joker","hyena");
   Hyena myHyena01 = Hyena ("scar","hyena");
   Lion MyLion1 = Lion("alex","lion");
   Lion MyLion12 = Lion("syumba","lion");



    cout << "\n the lion name is: " << MyLion1.Gname() << endl;
    cout << "\n the second lion name is:" << MyLion12.Gname() << endl;
    cout << "\n the number of lion : " << Lion::GetnumOfLion;
   cout << "\n the hyena names is: " << myHyena.Gname() << endl;
   cout << "\n the second name is:" << myHyena01.Gname() << endl;
   cout << "\n numbers of hyena: " << Hyena::GetnumOfHyena << endl;

   cout << "\n numbers of animals: " << Animal::GetnumOfAnimals;


    return 0;
}
