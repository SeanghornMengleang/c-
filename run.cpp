//This is Encapsulation in oop
/*#include<iostream>
using namespace std;
class Person{
    private:
        int id;
        int age;
        string name;
    public:
    //set is method
    //data is veraible in this code
        void setId(int id){
            this->id=id;
        }
        int getId(){
            return this->id;
        }
        void setName(string name){
            this->name=name;
        }
        string getName(){
            return this->name;
        }
        void setAge(int age){
            this->age=age;
        }
        int getAge(){
            this->age;
        }

};
int main(){
    Person person1;
    person1.setId(1);
    person1.setName("Koko");
    person1.setAge(20);
    cout<<"Person Id: "<<person1.getId()<<endl;
    cout<<"Person Name: "<<person1.getName()<<endl;
    cout<<"Person Age: "<<person1.getAge()<<endl;
    return 0;
}*/
//This is Encapsulation in oop
/*#include<iostream>
using namespace std;
class Product{
    private:
        int id;
        string pName;
        double pPrice;
        int pQty;
    public:
        void setId(int id){
            this->id = id;
        }
        int getId(){
            return this->id;
        }
        void setProductName(string name){
            this->pName = name;
        }
        string getProductName(){
            return pName;
        }
        // constructor
        Product (int id, string pName){
            this->id = id;
            this->pName = pName;
        }
};

int main(){
    Product p(1,"Coca");
    cout<<"Product id: "<<p.getId()<<endl;
    cout<<"Product name: "<<p.getProductName()<<endl;
    return 0;
}*/
//This is Inheritance in oop(type one)
/*#include<iostream>
using namespace std;
class Person{
    public:
        int id;
        string name;
        int age;
        void speak(string title){
            cout<<title<<" is speaking\n";
        }
};
class Teacher: public Person{};
class Student: private Person{};

int main(){
    Teacher teacher;
    Student student;
    //
    teacher.id  =12;
    teacher.speak("Teacher");

    return 0;
}*/
/*#include<iostream>
using namespace std;
class Person{
    private:
        int id;
        int age;
        string name;
    public:
        void setId(int id){
            this->id=id;
        }
        int getId(){
            return this->id;
        }
        void setAge(int age){
            this->age=age;
        }
        int getAge(){
            return this->age;
        }
        void setName(string name){
            this->name=name;
        }
        string getName(){
            return this->name;
        }
};
int main(){
    Person person1;
    person1.setId(1);
    person1.setAge(20);
    person1.setName("Koko");
    cout<<"This is Id: "<<person1.getId()<<endl;
    cout<<"This is Name: "<<person1.getName()<<endl;
    cout<<"This is Age: "<<person1.getAge()<<endl;
    return 0;
}*/
