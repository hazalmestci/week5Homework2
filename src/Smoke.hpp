//
//  Smoke.hpp
//  week5Homework2
//
//  Created by Hazal Mestci on 2/24/17.
//
//

#ifndef Smoke_hpp
#define Smoke_hpp

#include <stdio.h>
#include "ofMain.h"


class Smoke {
public:
    Smoke();
    
    void setup(float _x, float _y);
    void draw ();
    void move ();
    void update ();
    
    float x, y;
    float s; //size
    float a; //alpha
    float lifetime;
    float xDir;
    float yDir;
    
};

#endif /* Smoke_hpp */
