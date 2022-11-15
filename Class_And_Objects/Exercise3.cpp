/* 3. Design a class named Fan to represent a fan. The class contains:
    • Three constants named SLOW, MEDIUM, and FAST with the values 1, 2, and 3 to denote the fan
      speed.
    • A private int data field named speed that specifies the speed of the fan.
    • A private bool data field named on that specifies whether the fan is on (the default is False).
    • A private float data field named radius that specifies the radius of the fan.
    • A private string data field named color that specifies the color of the fan.
    • The accessor and mutator methods for all four data fields.
    • A constructor that creates a fan with the specified speed (default SLOW), radius (default 5), color
    (default blue), and on (default False).
    
    Write a test program that creates two Fan objects. For the first object, assign the maximum speed,
    radius 10, color yellow, and turn it on. Assign medium speed, radius 5, color blue, and turn it off
    for the second object. Display each object’s speed, radius, color, and on properties. */

#include <iostream>
using namespace std;
const int SLOW = 1, MEDIUM = 2, FAST = 3;
class Fan{
    private:
        int speed;
        bool on;
        float radius;
        string color;
    public:
        // mutator
        void set_speed(int speed){
            this-> speed = speed;
        }
        void set_on(bool on){
            this-> on = on;
        }
        void set_radius(float radius){
            this-> radius = radius;
        }
        void set_color(string color){
            this-> color = color;
        }

        // accessor
        int get_speed(){
            return speed;
        }
        bool get_on(){
            return on;
        }
        float get_radius(){
            return radius;
        }
        string get_color(){
            return color;
        }

        Fan(int speed, float radius, string color, bool on){
            this-> speed = speed;
            this-> radius = radius;
            this-> color = color;
            this-> on = on;
        }


};

int main(){
    
    Fan fan1(SLOW, 5, "blue", false);
    Fan fan2(SLOW, 5, "blue", false);

    // fan1
    fan1.set_speed(FAST);
    fan1.set_radius(10);
    fan1.set_color("yellow");
    fan1.set_on(true);

    // fan2
    fan2.set_speed(MEDIUM);
    fan2.set_radius(5);
    fan2.set_color("blue");
    fan2.set_on(false);

    // print fan1 properties
    cout << "Fan 1 properties: " << endl;
    cout << "Speed: " << fan1.get_speed() << endl;
    cout << "Radius: " << fan1.get_radius() << endl;
    cout << "Color: " << fan1.get_color() << endl;
    cout << "Power: " << fan1.get_on() << endl;

    // print fan2 properties
    cout << "\nFan 2 properties: " << endl;
    cout << "Speed: " << fan2.get_speed() << endl;
    cout << "Radius: " << fan2.get_radius() << endl;
    cout << "Color: " << fan2.get_color() << endl;
    cout << "Power: " << fan2.get_on() << endl;

    return 0;
}