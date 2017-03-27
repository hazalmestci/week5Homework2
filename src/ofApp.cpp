#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
}

//--------------------------------------------------------------
void ofApp::update(){
    
    for (int i=0; i<smoke.size(); i++) {
        smoke [i].update();
    }
}

//--------------------------------------------------------------
void ofApp::draw(){
    
    ofBackground(0);
    spawnRate = (int) ofRandom(1,5);
    
    //    if ((int)ofGetElapsedTimef() % spawnRate ==0) {
    Smoke p;
    
    p.setup ( ofGetWindowWidth()/2, ofGetWindowHeight()/2 );
    smoke.push_back(p);
    //    }
    
    for( int i= smoke.size()-1; i>=0; i--) {
        smoke [i].draw();
        
        if (smoke[i].lifetime <0 ) {
            smoke.erase(smoke.begin() + i);
        }
        
    }
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    
}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){
    
}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){
    
}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){
    
}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){
    
}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){
    
}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){
    
}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){
    
}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){
    
}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){
    
}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 
    
}

