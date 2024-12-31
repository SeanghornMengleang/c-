/*#include<iostream>
#include<vector>
#include<string>
using namespace std;
class Employee{
    private:
        int id;
        string name;
        string position;
    public:
        //This is constructor
        Employee(int id,string name,string position);
        //This is GEtder 
        void setId(int Id){
            this ->id=id;
        }
        int getId(){
            return this->id;
        }
        void setName(string Name){
            this ->name=name;
        }
        string getName(){
            return this ->name;
        }
        void setPosition(string position ){
            this ->position=position;
        }
        string getPosition(){
            return this->position;
        }
};
int main(){
    vector<Employee>employees;
    //Add employee
    void addEmployee(vector<Employee>& employee){
        int id;
        string name;
        string position;
        cout<<"Enter Id: "<<id<<endl;
        cout<<"Enter Name: "<<name<<endl;
        cout<<"Enter Position: "<<position<<endl;
        insert.employee(id,name,position);
        cout<<"Enter added employee already: "<<endl;
    }
    //View employee
    void viewEmployee(vector<Employee>& employee){

    }
    //Update employee
    void updateEmployee(vector<Employee>& employee){

    }

    }
    */
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

// Employee class definition
   class Employee {
private:
    int id;
    std::string name;
    std::string position;

public:
    // Constructor
    Employee(int id, const std::string& name, const std::string& position)
        : id(id), name(name), position(position) {}

    // Getters
    int getId() const { return id; }
    std::string getName() const { return name; }
    std::string getPosition() const { return position; }

    // Setters
    void setName(const std::string& newName) { name = newName; }
    void setPosition(const std::string& newPosition) { position = newPosition; }

    // Display Employee details
    void display() const {
        std::cout << std::setw(10) << id << std::setw(20) << name << std::setw(20) << position << '\n';
    }

    // Overload the stream insertion operator to output Employee details
    friend std::ostream& operator<<(std::ostream& os, const Employee& e) {
        os << std::setw(10) << e.getId() << std::setw(20) << e.getName() << std::setw(20) << e.getPosition();
        return os;
    }
};

// Main function
int main() {
    // Create Employee objects
    Employee emp1(1, "John Doe", "Software Engineer");
    Employee emp2(2, "Jane Smith", "Project Manager");

    // Display details using the display method
    std::cout << "Displaying Employee details using display() method:\n";
    emp1.display();
    emp2.display();

    // Display details using the overloaded stream insertion operator
    std::cout << "\nDisplaying Employee details using overloaded operator<<:\n";
    std::cout << emp1 << std::endl;
    std::cout << emp2 << std::endl;

    return 0;
}
