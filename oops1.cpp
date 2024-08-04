// #include<iostream>
// using namespace std;

// class Rectangle {
//     private:
//     int width;
//     int height;

//     public:
//     // getter for width
//     int getWidth()
//     {
//         return width;
//     }

//     // setter for width
//     void setWidth(int newWidth)
//     {
//         width = newWidth;
//     }

//     // getter for height
//     int getHeight()
//     {
//         return height;
//     }
//     // setter for height
//     void setHeight (int newHeight)
//     {
//         height = newHeight;
//     }
// };

// int main()
// {
//     Rectangle rect;

//     // set width using setter
//     rect.setWidth(10);

//     // set height using setter
//     rect.setHeight(20);

//     // get width using getter
//     cout << " width is: " << rect.getWidth() << endl;

//     // get height using getter
//     cout << " height is: " << rect.getHeight() << endl;

//     return 0;
// }


// #include<iostream>
// using namespace std;

// class Hero
// {
//     public:
//     int health;
//     char level;

//     //constructor
//     Hero()
//     {
//         cout << " constructor called. " << endl;
//     }

//     ~Hero()
//     {
//         cout << " destructor called. " << endl;
//     }

//     public:
//     int getHealth()
//     {
//         return health;
//     }

//     void setHealth(int h)
//     {
//        health = h;
//     }

//     char getLevel()
//     {
//         return level;
//     }

//     void setLevel(char ch)
//     {
//         level = ch;
//     }

   


// };

// int main()
// {


//     Hero obj;

//     // statically 
//     // Hero obj;
//     // cout << " health is: " << obj.getHealth() << endl;
//     // obj.setHealth(10);
//     // cout << " health is: " << obj.getHealth() << endl;
//     // cout << " level is: " << obj.getLevel() << endl;
//     // obj.setLevel('A');
//     // cout << " level is: " << obj.getLevel() << endl;
    
    
//     // dyanamically
//     // Hero *b = new Hero();
//     // (*b).setHealth(10);
//     // cout << " health is: " << (*b).getHealth() << endl;
//     // (*b).setLevel('A');
//     // cout << " level is: " << (*b).getLevel() << endl;



//     return 0; 
// }


//SINGLE INHERITANCE


// #include<iostream>
// using namespace std;

// class Animal
// {
//     public:
//     int age = 20;
//     int weight;

//     public:
//     void speak()
//     {
//         cout << " speaking " << endl;
//     }
// };

// class Dog: public Animal
// {

// };


// int main()
// {
//     Dog d;
//     d.speak();
//     cout << d.age << endl;

//     return 0;
// }


// MULTIPLE INHERITANCE

// #include<iostream>
// using namespace std;

// class Animal
// {
//     public:
//     int age;
//     int weight;

//     public:
//     void bark()
//     {
//         cout << " barking " << endl;
//     }
// };

// class Human
// {
//     public:
//     string colour;

//     public:
//     void speak()
//     {
//         cout << " speaking " << endl;
//     }
// };

// // multiple inheritance
// class hybrid: public Animal, public Human
// {

// };

// int main()
// {
//     hybrid obj;
//     obj.speak();
//     obj.bark();


//     return 0;
// }


// MULTILEVEL INHERITANCE

#include<iostream>
using namespace std;

class Animal
{
    public:
    int age;
    int weight;

    public:
    void speak()
    {
        cout << " speaking " << endl;
    }
};

class Dog: public Animal
{

};

class GermanShephard: public Dog
{  


};


int main()
{
    
}





































































