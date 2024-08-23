#include<iostream>
#include "birds.h"
using namespace std;

void birdDoingSomething(Bird*&bird) {
    // if Sparrow is privete Phir bhi Usse Use kr skte hai
    // if Me yaha Bird ki jagah koi specific Bird jese ki 
    // Sperrow leta if We Can replace feature and remove Sparrow 
    // then difficult to manage that's why we could use Birds Pointer
    bird->fly();
    bird->eat();


    // if Sparrow is private then can't access
    // s.eat();
    // s.fly();
}

int main()
{
    // Bird* bird = new Sparrow();
    Bird* bird = new Eagle();


    // if jab me Uper tarah obj banaunga to jab muje 
    // sparrow ki jagah koi new bird aa jay to bhi 
    // thoda hi change krna padega
    birdDoingSomething(bird);


    // Aap yaha par Bird ka obj nahi bana skte
    // bird ek interface hai 
    return 0;
}
