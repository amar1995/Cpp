#ifndef FARM_H_INCLUDED
#define FARM_H_INCLUDED
#include <string>

using namespace std;
class Animal
{
protected:
    string voice;
public:
    Animal(string );
    virtual ~Animal();// using virtual is important so that other destructor can be called of sub-class
    virtual string getVoice() = 0;// Abstract cannot make instance of this class
};

class Dog : public Animal
{
protected:
    string sign;
public:
    Dog();
    ~Dog();
    string getVoice(){return voice+" "+sign;}
};

class Cat : public Animal
{
protected:
    string sign;
public:
    Cat();
    ~Cat();
    string getVoice(){return voice+" "+sign;}
};

class Cow : public Animal
{
private:
    string sign;
public:
    Cow();
    ~Cow();
    string getVoice(){return voice+" "+sign;}
};

#endif // FARM_H_INCLUDED
