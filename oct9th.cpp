#include <iostream>
#include<string>
#include<vector>

using namespace std;

class Animal{
private:
    string name;
    string species;
    string habitat;
     inline static int numOfAnimals =0 ;
     double Birthday ;
     char sex;
     double weight;

public:
    Animal(string n,string s,double b,char x,double w,string h):
        name(n),species(s),Birthday(b),sex(x),weight(w),habitat(h){
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
        double GBday() {
        return Birthday;
        }
        char Gsex() {
        return sex;
        }
        double Gweight(){
        return weight;
        }
        string Ghabitat(){
        return habitat;
        }

};

class Hyena:public Animal{
private:
 inline static int numOfHyena =0;
 double Birthday;
 double weight;

public:
Hyena( string name,string species,double Birthday,char sex,double weight,string habitat):
    Animal(name,species,Birthday,sex,weight,habitat){
    numOfHyena++;
    }

    int GetnumOfHyena(){
    return numOfHyena;
    }



};
class Tiger:public Animal{
private:
  inline static int numOfTiger =0 ;

public:
Tiger( string name,string species,double Birthday,char sex,double weight,string habitat):
    Animal(name,species,Birthday,sex,weight,habitat){
    numOfTiger++;
    }

    int GetnumOfTiger(){
    return numOfTiger;
    }


};
class Lion:public Animal{
private:
   inline static int numOfLion =0;

public:
Lion( string name,string species,double Birthday,char sex,double weight,string habitat):
    Animal(name,species,Birthday,sex,weight,habitat){
    numOfLion++;
    }

    int GetnumOfLion(){
    return numOfLion;
    }


};
class Bear:public Animal{
private:
   inline static int numOfBear=0 ;

public:
Bear( string name,string species,double Birthday,char sex,double weight,string habitat):
    Animal(name,species,Birthday,sex,weight,habitat){
    numOfBear++;
    }

    int GetnumOfBear(){
    return numOfBear;
    }

};
int main()
{
   cout << "welcome to the animal class practice" <<  endl;


   Hyena myHyena = Hyena("joker","hyena",02.13,'f',123,"savanha");
   Hyena myHyena02 = Hyena ("scar","hyena",03.16,'m',111,"savanha");
   Hyena myHyena03 = Hyena("bob","hyena",06.18,'f',211,"savanha");

   Tiger myTiger = Tiger("tony","tiger",11.23,'m',121,"jungle");
   Tiger myTiger02 = Tiger("Frank","tiger",12.23,'f',133,"jungle");

   Lion MyLion = Lion("alex","lion",09.12,'m',122,"savanha");
   Lion MyLion02 = Lion("chad","lion",07.14,'f',123,"savanha");
   Lion MyLion03 = Lion ("hank","lion",05.18,'m',143,"savanha");

   Bear myBear = Bear("yogi","bear",08.12,'f',123,"forest");
   Bear myBear02 = Bear("smokey","bear",04.24,'m',143,"forest");


    cout << "\n Hyena's:" << endl;

   cout << "\n the hyena names is: " << myHyena.Gname() << endl;
   cout << myHyena.Gname() << " birthday is:" << myHyena.GBday() << endl;
   cout << myHyena.Gname() << " sex is :" << myHyena.Gsex() << endl;
   cout << myHyena.Gname() << " weight is: " << myHyena.Gweight() << "ibs" << endl;
   cout << myHyena.Gname() << " habitat is: " << myHyena.Ghabitat() << endl;

   cout << "\n the second name is:" << myHyena02.Gname() << endl;
   cout << myHyena02.Gname() << " birthday is:" << myHyena02.GBday()<<endl;
   cout << myHyena02.Gname() << " sex is :" << myHyena02.Gsex()<<endl;
   cout << myHyena02.Gname() << " weight is: " << myHyena02.Gweight() << "ibs" << endl;
   cout << myHyena02.Gname() << " habitat is: " << myHyena02.Ghabitat() << endl;

   cout << "\n the third hyena name is :" << myHyena03.Gname() << endl;
   cout << "\n numbers of hyena: " << myHyena.GetnumOfHyena() << endl;


cout << "\n tigers:" << endl;

   cout << "\n first tiger name is:" << myTiger.Gname() << endl;
   cout << "\n second tiger name is: " << myTiger02.Gname() << endl;
   cout << "\n the number of tigers are:" << myTiger.GetnumOfTiger() << endl;

cout << "\n Lions:" << endl;

   cout << "\n first lion name is :" << MyLion.Gname() << endl;
   cout << "\n second lion name is :" << MyLion02.Gname() << endl;
   cout << "\n third lion name is:" << MyLion03.Gname() << endl;
   cout << "\n the number of lions is:" << MyLion.GetnumOfLion() << endl;

   cout << "\n bears:" << endl;

   cout << "\n first bear name is:" << myBear.Gname() << endl;
   cout << "\n second bear name is:" << myBear02.Gname() << endl;
   cout << "\n the number of bears are:" << myBear.GetnumOfBear() << endl;






    return 0;
}
