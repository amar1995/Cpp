#include "farm.h"


Animal::Animal(string voice)
{
    this->voice = voice;
}

Animal::~Animal()
{

}

Dog::Dog() : Animal("Bark")
{
    this->sign = "D";
}
Dog::~Dog()
{

}
Cat::Cat() : Animal("Meooo")
{
    this->sign = "CA";
}
Cat::~Cat()
{

}
Cow::Cow() : Animal("Mooo")
{
    this->sign = "CO";
}
Cow::~Cow()
{

}
