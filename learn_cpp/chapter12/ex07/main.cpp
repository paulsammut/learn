// Chapter 12.6 Pure virtual functions, abstract base classes and interface classes.
#include <iostream>
#include <string>

class Animal
{
protected:
    std::string m_name;

    // We're making this constructor protected because we don't people creating animal
    // objects directly, but we still want derived classes to be able to use it.
    Animal(std::string name) : m_name(name) {}

public:
    std::string getName() { return m_name; }
    virtual const char* speak() = 0;
};

const char* Animal::speak() 
{
    return "Test";
}

class Cat : public Animal
{
public:
    Cat(std::string name) : Animal(name) {}
    virtual const char* speak() { return "meow"; }
};


class Dog : public Animal
{
public:
    Dog(std::string name) : Animal(name) {}
    virtual const char* speak() { return "wolf"; }
};

class Cow: public Animal
{
public:
    Cow(std::string name) : Animal(name) {}
    virtual const char* speak() {
        Animal::speak();
        return "mooo";
    }
};

int main()
{
    Cow cow("Betsy");
    std::cout << cow.getName() << " says " << cow.speak() << '\n';
    std::cout << "Parent speak says " << cow.Animal::speak() << '\n';
}
