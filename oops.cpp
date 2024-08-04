// #include <iostream>
// using namespace std;

// class Hero
// {
// private:
//     int health;

// public:
//     char level;

//     void print()
//     {
//         cout << level << endl;
//     }

//     void gethealth()
//     {
//         return health;
//     }
//     void getlevel()
//     {
//         return level;
//     }
//     void setHealth(int h)
//     {
//         health = h;
//     }
//     void setLevel(char ch)
//     {
//         level = ch;
//     }
// };

// int main()
// {
//     Hero ramesh;
//     cout<<"Ramesh health is: "<<ramesh.gethealth() << endl;
//     ramesh.setHealth(70);
//    // ramesh.health = 70;
//     ramesh.level = 'A';

//     cout << "size : " << ramesh.gethealth() << endl;
//     cout << "size : " << ramesh.level << endl;
//     return 0;
// }

// #include <iostream>
// using namespace std;

// class construct
// {
// public:
//     int a, b;

//     construct()
//     {
//         a = 10;
//         b = 20;
//     }
// };

// int main()
// {
//     construct c;
//     cout << "a:" << c.a << endl
//          << "b:" << c.b << endl;

//     return 0;
// }

// #include <iostream>
// using namespace std;

// class Hero
// {
// public:
//     int health = 10;
//     char level = 20;
//     Hero()
//     {
//         cout<<"simple constructor called"<<endl;
//     }
// };

// int main()
// {
//     Hero suresh;

//     Hero R(suresh);
// }

// #include <iostream>
// using namespace std;

// class box
// {
// public:
//     double width;
//     double height;
//     double depth;
// };

// int main()
// {
//     box obj;

//     obj.width = 5;
//     obj.height = 10;
//     obj.depth = 15;

//     double volume = obj.width * obj.height * obj.depth;

//     cout << "volume of a box: " << volume << endl;

//     return 0;
// }

// #include <iostream>
// using namespace std;

// class A
// {
// public:
//     void func()
//     {
//         cout << " i am A " << endl;
//     }
// };

// class B
// {
// public:
//     void func()
//     {
//         cout << " i am b " << endl;
//     }
// };

// class C : public A, public B
// {
// };

// int main()
// {
//     C obj;

//     obj.A::func();
//     obj.B::func();

//     return 0;
// }

// #include <iostream>
// using namespace std;

// class Student
// {
// private:
//     string name;
//     int age;
//     int height;

// public:
//     int getAge()
//     {
//         return this->age;
//     }
// };

// int main()
// {
//     Student first;

//     cout << "sab sahi chal raa h" << endl;

//     return 0;
// }

// #include <iostream>
// using namespace std;

// class A
// {
// public:
//     void func1()
//     {
//         cout << "inside the function 1" << endl;
//     }
// };

// class B : public A
// {
// public:
//     void func2()
//     {
//         cout << "inside function 2" << endl;
//     }
// };

// class C : public A
// {
// public:
//     void func3()
//     {
//         cout << "inside function 3" << endl;
//     }
// };

// int main()
// {
//     A object1;
//     object1.func1();

//     B object2;
//     object2.func2();

//     C object3;
//     object3.func3();

//     return 0;
// }

#include <iostream>
using namespace std;

class A
{
public:
    void sayHello()
    {
        cout << "hello arvind jangid" << endl;
    }
    int sayHello(char name)
    {
        cout << "hello arvind jangid" << endl;
        return 1;
    }
    void sayHello(string name)
    {
        cout << "Hello " << name << endl;
    }
};

class B
{
public:
    int a;
    int b;

public:
    int add()
    {
        return a + b;
    }

    void operator+(B &obj)
    {
        cout << "hello aj " << endl;
    }

    void operator()()
    {
        cout << "main bracket hu " << this->a << endl;
    }
};

class Animal
{
public:
    void speak()
    {
        cout << "speaking " << endl;
    }
};

class Dog : public Animal
{
public:
    void speak()
    {
        cout << "barking " << endl;
    }
};

int main()
{
    Dog obj;
    Animal obj1;
    obj.speak();
    obj1.speak();
    

    return 0;
}
