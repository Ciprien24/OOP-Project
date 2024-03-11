#include <iostream>
#include "Product.h"
#include "Review.h"
#include "Laptop.h"
#include "Mouse.h"
#include "WirelessMouse.h"

using namespace std;

int main()
{
    //static polymorphism
    Product* p1 = new Product();
    p1->getNameString();

    Product* p2 = new Laptop();
    p2->getNameString();

    Product* p3 = new Mouse();
    p3->getNameString();

    Product* p4 = new WirelessMouse();
    p4->getNameString();

    cout << endl;
    //dynamic polymorphism
    Product* p5 = new Product();
    p5->getTypeString();

    Product* p6 = new Laptop();
    p6->getTypeString();

    Product* p7 = new Mouse();
    p7->getTypeString();

    Product* p8 = new WirelessMouse();
    p8->getTypeString();

    Review review{ "Great car!", "I am so proud of my purchase, it works very well and it's reliable", "04 Apr 2023 6:13 PM", 5 };
    review.toString();

    Product* car = new Product{ "Ford", "Focus", 3457873, true, "Ford_Focus.jpg",30000, "A well sized car to fit your needs", "Aluminium, plastic, leather", review };
    car->toString();

    //modifying review for Laptop class
    review.setTitle("Greatest laptop I've ever had");
    review.setText("Works perfectly and it's also the fastest laptop I've ever had");
    review.setDate("01 Feb 2020 8:00 PM");

    Laptop* omen = new Laptop{ "HP", "Omen 15", "Intel Core i5 9th gen", "NVIDIA Geforce GTX 1650Ti", "1080p 15 inch display", 16, 1024, 3.5, review };
    omen->toString();

    //modifying review for Mouse class
    review.setTitle("Not so great product");
    review.setText("It worked fine in the first few months but after some time the cable broke and I decided to switch to a wireless mouse");
    review.setRating(3);
    review.setDate("13 Jul 2020 2:00 PM");

    Mouse* mouse = new Mouse{ "Logitech", "G502", 16000, "USB", "Optical", review };
    mouse->toString();

    //modifying review for WirelessMouse class
    review.setTitle("I'm never gonna switch to another mouse ever");
    review.setText("As you read in the title, this is the best mouse I've ever had, truly never gonna switch to another one");
    review.setRating(5);
    review.setDate("15th Dec 2021 9:00 PM");

    WirelessMouse* wirelessmouse = new WirelessMouse{ "Razer", "Basilisk ultimate", 20000, "Wireless", "Optical", 50, 100, review };
    wirelessmouse->toString();

    delete p1;
    delete p2;
    delete p3;
    delete p4;
    delete p5;
    delete p6;
    delete p7;
    delete p8;
    delete car;
    delete omen;
    delete mouse;
    delete wirelessmouse;
}