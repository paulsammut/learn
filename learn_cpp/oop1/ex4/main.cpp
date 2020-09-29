#include <iostream>
#include <vector>
#include <string>

/* This was an excercize I did to learn the strategy pattern. Link here:
 * https://www.youtube.com/watch?v=-NCgRD9-C6o&list=PLF206E906175C7E07&index=3
 */

using namespace std;

/* Interface Flys */
class IFlys{
private:
public:
    virtual string fly() = 0;
};

/* Abstract class Animal */
class Animal{
private:
    string m_name;
public:
    IFlys *m_flyingType;
    Animal(string name) : m_name(name) {
    }

    string getName(){
        return m_name;
    }

    void setFlyingType(IFlys *flyingType){
        m_flyingType = flyingType;
    }
    virtual ~Animal() = 0;
};

Animal::~Animal()
{
}

/* Implemented class of IFlys that flies */
class ItFlies : public IFlys{
public:
    string fly() override {
        string out = "I can fly!";
        cout << out << endl;
        return out;
    }
};

/* Implemented class of IFlys that can't fly */
class CantFly : public IFlys{
public:
    string fly() override {
        string out = "No flying for me!";
        cout << out << endl;
        return out;
    }
};

class Dog : public Animal{
public:
    Dog(string name) : Animal(name)
    {
        Animal::setFlyingType(new CantFly);
    }
    ~Dog(){
        cout << "Destroying poor " << Animal::getName() << endl;
    }
};

class Cat : public Animal{
public:
    Cat(string name) : Animal(name)
    {
        Animal::setFlyingType(new CantFly);
    }
    ~Cat(){
        cout << "Destroying poor kitty " << Animal::getName() << endl;
    }
};

class Bird : public Animal{
public:
    Bird(string name) : Animal(name)
    {
        Animal::setFlyingType(new ItFlies);
    }
    ~Bird(){
        cout << "Destroying poor birdy " << Animal::getName() << endl;
    }
};

int main()
{
    vector<Animal*> animals;
    animals.push_back(new Dog("Fido"));
    animals.push_back(new Dog("Rumper"));
    animals.push_back(new Cat("Katie"));
    animals.push_back(new Cat("Mimi"));
    animals.push_back(new Dog("Lucy"));
    animals.push_back(new Bird("Tweety"));

    for(auto& animal : animals){
        cout << "My name is " << animal->getName() << " ";
        animal->m_flyingType->fly();
        delete animal;
    }
    return 0;
}
