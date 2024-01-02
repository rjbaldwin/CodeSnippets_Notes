#include <iostream>


// demonstration of class inheritance and function calling 
// rj baldwin 05/05/2023

class Parent {
public:
    Parent(int i, int x) : ii{ i }, xx{ x } {}

    void draw() {
        std::cout << "draw() called - drawing to screen\n";
        int output = getInt();
        std::cout << "getInt() called: " << output << '\n';
        add();
    }

    int getInt() {
        return ii;
    }

    int getInt2() {
        return xx;
    }

    void add() {
        int sum = getInt2() + 10;
        std::cout << "add() called: " << sum << '\n';
    }

private:
    int ii{};
    int xx{};
};

class Child : public Parent {
public:
    using Parent::Parent;

    void foo() {
        std::cout << "Child::foo() called\n";
        draw();  // calling parent's draw() function
    }
};

class Grandchild : public Child {
public:
    using Child::Child;

    void bar() {
        std::cout << "Grandchild::bar() called\n";
        foo();  // calling child's foo() function
    }
};

class GreatGrandchild : public Grandchild {
public:
    using Grandchild::Grandchild;

    void baz() {
        std::cout << "GreatGrandchild::baz() called\n";
        bar();  // calling grandchild's bar() function
    }
};

class GreatGreatGrandchild : public GreatGrandchild {
public:
    using GreatGrandchild::GreatGrandchild;

    GreatGreatGrandchild(int i, int x) : GreatGrandchild(i, x) {
        qux();  // calling own qux() function automatically
    }

    void qux() {
        std::cout << "GreatGreatGrandchild::qux() called\n";
        baz();  // calling greatgrandchild's baz() function
    }
};


int main() {
    GreatGreatGrandchild gggc(1, 2);
    return 0;
}



