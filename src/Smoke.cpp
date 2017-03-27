//
//  Smoke.cpp
//  week5Homework2
//
//  Created by Hazal Mestci on 2/24/17.
//
//

#include "Smoke.hpp"

Smoke::Smoke() {
    
    
}


void Smoke::setup(float _x, float _y) {
    x= _x;
    y= _y;

    a= 50;
    lifetime = 250;

    xDir= ofNoise(cos(ofGetElapsedTimef())+1, 1);
    yDir= ofNoise(cos(ofGetElapsedTimef())-1, 1);
}



void Smoke::draw() {
    
    ofSetColor(255, 255, 255, a);
    
    ofDrawCircle(x, y, abs(s));
    
    
}


void Smoke::move() {
    
    
}


void Smoke::update() {
    
    //count down the life
    lifetime --;
    //smoke rises, move up
    y-= yDir*2;
    x+= xDir*2;
    //reduce alpha
    if (a >0) {
        a-=0.5;
    }
    //increase or decrease the size
    s=ofMap(a, 50, 0,-20, 70);

    
}
