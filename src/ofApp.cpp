#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofSetFrameRate(60);
    
    bg.loadImage("background.jpg");
    frontground.load("kansas.png");
    
    ofSetBackgroundAuto(false);
    
    mouseisClicked = false;
    x = 255; //orange-r
    y = 103; //orange-g
    z = 0; //orange-b
    
    a = 255; //red-r
    b = 6; //red-g
    c = 0; //red-b
    
    w = 50;
    s = 60;
    
    e = 80;
    d = 100;
    
    q = 1;
    
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    
    
    if (!mouseisClicked){
     
    
        bg.draw(0,0);
        cout << "init"<< endl;
    }
    
    frontground.draw(0,0);
    
    
    ofPushStyle();
  
    if (ofGetMousePressed(OF_MOUSE_BUTTON_LEFT)) {
        int maxRadius = ofRandom(w,s);
        int radiusStepSize = 5;
        int maxOffsetDistance = ofRandom(e,d);
        for (int radius=maxRadius; radius>0; radius-=radiusStepSize) {

            float angle = ofRandom(ofDegToRad(360.0));
            float distance = ofRandom(maxOffsetDistance);
            float xOffset = cos(angle) * distance;
            float yOffset = sin(angle) * distance;

            ofColor myOrange(x, y, z, q);
            ofColor myRed(a, b, c, q);
            
            ofColor inBetween = myOrange.getLerped(myRed, ofRandom(1.0));
            ofSetColor(inBetween);

            ofDrawCircle(ofGetMouseX()+xOffset, ofGetMouseY()+yOffset, radius);
        }
        ofPopStyle();
    }
    
    
    
    if (ofGetMousePressed(OF_MOUSE_BUTTON_RIGHT)) {
        
        bg.draw(0,0);  // Erase the screen with a new background image
    }
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    // save a screenshot by pressing space key:
    
    if (key == ' ') {
        glReadBuffer(GL_FRONT);
        ofSaveScreen("savedScreenshot_"+ofGetTimestampString()+".png");
    }
    
    
    
    // brush color changes ---------------------
    if (key == 'a') {
        //red
        x = 255;
        y = 0;
        z = 0;
        
        a = 190;
        b = 0;
        c = 0;
        
    }
    
    if (key == 's') {
        //pink
        x = 255;
        y = 95;
        z = 180;
        
        a = 240;
        b = 50;
        c = 150;
        
    }
    
    if (key == 'd') {
        //orange
        x = 255; //orange-r
        y = 103; //orange-g
        z = 0; //orange-b
        
        a = 255; //red-r
        b = 6; //red-g
        c = 0; //red-b
        
    }
    
    if (key == 'f') {
        //yellow
        x = 255; //light orange-r
        y = 180; //light orange-g
        z = 0; //light orange-b
        
        a = 255; //yellow red-r
        b = 255; //yellow red-g
        c = 0; //yellow red-b
    }
    
    if (key == 'g') {
        //green
        x = 15;
        y = 200;
        z = 0;
        
        a = 10;
        b = 120;
        c = 0;
    }
    
    if (key == 'h') {
        //blue-green
        x = 5;
        y = 220;
        z = 170;
        
        a = 0;
        b = 130;
        c = 100;
    }
    
    if (key == 'j') {
        //blue
        x = 0;
        y = 15;
        z = 130;
        
        a = 0;
        b = 20;
        c = 170;
    }
    
    if (key == 'k') {
        //pp
        x = 150;
        y = 30;
        z = 255;
        
        a = 100;
        b = 0;
        c = 180;
    }
    
    if (key == 'l') {
        //brown
        x = 80;
        y = 40;
        z = 0;
        
        a = 160;
        b = 80;
        c = 5;
    }
    
    // Brush Size changes: size large to small---------------------
    
    if (key == 'z') {
        
        w = 50;
        s = 60;
        
        e = 80;
        d = 100;
        
        q = 1;
    }
    
    if (key == 'x') {
        
        w = 30;
        s = 60;
        
        e = 70;
        d = 90;
        
        q = 2;
    }
    
    if (key == 'c') {
        
        w = 20;
        s = 50;
        
        e = 60;
        d = 80;
        
        q = 3;
    }
    
    if (key == 'v') {
        
        w = 20;
        s = 40;
        
        e = 40;
        d = 60;
        
        q = 4;
    }
    
    if (key == 'b') {
        
        w = 10;
        s = 30;
        
        e = 20;
        d = 30;
        
        q = 5;
    }
    
    if (key == 'n') {
        
        w = 5;
        s = 15;
        
        e = 10;
        d = 20;
        
        q = 6;
    }
    
    if (key == 'm') {
        
        w = 5;
        s = 10;
        
        e = 7;
        d = 9;
        
        q = 7;
    }
    
    
    // city shape changes ---------------------
    if (key == 'q') {
        frontground.load("kansas.png");
    }
    
    if (key == 'w') {
        frontground.load("newyorkcity.png");
    }
    
    if (key == 'e') {
        frontground.load("washington.png");
    }
    
    if (key == 'r') {
        frontground.load("stLouis.png");
    }
    
    if (key == 't') {
        frontground.load("san-francisco.png");
    }
    
    if (key == 'y') {
        frontground.load("Los_Angeles.png");
    }
    
    if (key == 'u') {
        frontground.load("london.png");
    }
    
    if (key == 'i') {
        frontground.load("barcelona.png");
    }
    
    if (key == 'o') {
        frontground.load("sydney.png");
    }
    
    if (key == 'p') {
        frontground.load("paris.png");
    }
    
    
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
    
    if(x){
        mouseisClicked = true;
    }
    
}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

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
