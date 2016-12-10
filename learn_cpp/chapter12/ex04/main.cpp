// Chapter 12.2a The override and final specifiers, and covariant return types
//
#include <iostream>
#include <array>
#include <string>
#include <vector>

class A
{
public:
    virtual const char* getName1(int x) {
        return "A";
    }
    virtual const char* getName2(int x) {
        return "A";
    }
    virtual const char* getName3(int x) {
        return "A";
    }

    virtual void testFunc() {
        std::cout <<  "class a test func!" << std::endl;
    }
};

class B : public A
{
public:
    // compile error, function is not an override
    // virtual const char* getName1(int x) override { return "B"; }
    // compile error, function is not an override
    // virtual const char* getName2(int x) override { return "B"; }
    // okay, function is an override of A::getName3(int)
    virtual const char* getName3(int x) override {
        return "B";
    }

    virtual void testFunc() override {
        std::cout << "class B test func!" << std::endl;
    }

};

class D : public B
{
public:
    virtual void testFunc() final { std::cout << "class D final test func!" << std::endl; }
};

class E : public D
{
public:
    //virtual void testFunc() override { std::cout << "not gonna work!" << std::endl; }
};

int main()
{
    B b;
    std::cout << "b.getName1() is " << b.getName1(1) << std::endl;
    D d;
    d.testFunc();
    return 0;
}
