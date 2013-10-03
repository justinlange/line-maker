#include "testApp.h"



//--------------------------------------------------------------
void testApp::setup(){
    
    //ofImage = new of



}

//--------------------------------------------------------------
void testApp::update(){
    
    //while( mCount < 1000)

    //lineMaker(ofVec2f(int(ofRandom(mDist)), int(ofRandom(mDist))));
    
    lineMaker(ofVec2f(50, 50));

    cout << mCount << endl;

   // lineMaker(ofVec2f(rand(), rand()));
}

//--------------------------------------------------------------
void testApp::draw(){
    ofClear(0);
    
    ofSetColor(255, 255, 150);
    myLine.draw();
}



//--------------------------------------------------------------

bool testApp::lineMaker(ofVec2f node){
    
    //need to first create a vector of points, then iterate over to create the line
    
    myLine.addVertex(node);
    
    mCount++;
    
    if(mCount > 10000) return false;
    if(node.x > width || node.y > height || node.x <= 0+mDist || node.y <= 0+mDist) return false;
    
    //if(node.x < width && node.y < height)
        
   // if (myLine.isClosed()
   

    
    lineMaker(ofVec2f(node.x+ofRandom(-mDist,mDist), node.y+ofRandom(-mDist,mDist)));
        return true;
    
    

}



//--------------------------------------------------------------
void testApp::keyPressed(int key){

}

//--------------------------------------------------------------
void testApp::keyReleased(int key){

}

//--------------------------------------------------------------
void testApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void testApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void testApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void testApp::dragEvent(ofDragInfo dragInfo){ 

}
