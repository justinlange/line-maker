#pragma once

#include "ofMain.h"
#include "LinkedList.h"

class testApp : public ofBaseApp{
    
public:
    void setup();
    void update();
    void draw();
    
    void keyPressed(int key);
    void keyReleased(int key);
    void mouseMoved(int x, int y );
    void mouseDragged(int x, int y, int button);
    void mousePressed(int x, int y, int button);
    void mouseReleased(int x, int y, int button);
    void windowResized(int w, int h);
    void dragEvent(ofDragInfo dragInfo);
    void gotMessage(ofMessage msg);
    
    bool lineMaker(ofVec2f node);
    
    ofVec2f node;
    ofVec2f movement;
    
    //short int pointMem[320][240];
    
    ofPolyline myLine;
    
    ofImage mImage;
    
    const int height = 240;
    const int width = 320;
    
    int mDist = 15;
    
    int mCount = 0;
    int backtrackCount = 0;
    
    vector<ofVec2f> myPoints;
    //vector<ofVec2f> storage;

    
private:
    int boringCounter = 0;
    int boringThreshold = 5;
    
};
