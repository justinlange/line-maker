#include "testApp.h"



//--------------------------------------------------------------
void testApp::setup(){
    
    LList<double> tList = LList<double>();
    
    /*
    
    for(int i = 0; i<319; i++){
        for(int j=0; j<239; j++){
            pointMem[i][j]= 1;
            
        }
    }
    
    
    */

    movement.set(mDist, mDist);
    node.set(width/2,height/2);
    
    //set up some points on our vector
    /*
    
    for(int i=300; i<350; i=i+5){
        for(int j=300; j<350; j=j+5){
            myPoints.push_back(ofVec2f(i,j));
        }
    }
     */


}

//--------------------------------------------------------------
void testApp::update(){
    
    
    //while( mCount < 1000)

    //lineMaker(ofVec2f(int(ofRandom(mDist)), int(ofRandom(mDist))));
    
    lineMaker(node);
    //lineMaker(ofVec2f(ofRandom(width),ofRandom(height)));

    //cout << backtrackCount << endl;
    
    for (int i = 0; i<myPoints.size(); i++) {
        myLine.addVertex(myPoints[i]);
    }

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
    

    
    if(movement == movement){
        boringCounter++;
    }
    
    

    
    mCount++;
    
    
    //node = node + movement;
    
    
   // movement.set(movement.getRotated(ofRandom(0,10)));
    

    
    
    if(mCount > 10000) return false;
    
    
    if(node.x > width){
        movement.x  = -movement.x;
        return false;
    }
    
    
    if(node.y > height){
        movement.y = -movement.y;
        return false;
    }

    if(node.x <= 0){
        movement.x = -movement.x;
        return false;
    }
    
    
    if(node.y <= 0){
        movement.y = -movement.y;
        return false;
    }

    /*
    
    
    if(mCount > 50){
        for(int i=0; i<myPoints.size()-1; i++){
            for(int j=0; j<i; j++){
                
                if(myPoints[i].squareDistance(myPoints[j]) < 1)
                    return false;
                cout << "close distance!" << endl;
            }
        }
    }
     */
    
    
    
    //check if there is already a point there

    
    //store information about the node into the array
    //if(pointMem[int(node.x)][int(node.y)] == 2) return false;
    
    
    
    
    
    //pointMem[int(node.x)][int(node.y)] = 2;
    
    
    myPoints.push_back(node);
    lineMaker(node);
    return true;

    
    
    
    
    
    
//    lineMaker(ofVec2f(node.x+movement.x, node.y));
//    lineMaker(ofVec2f(node.x-movement.x, node.y));
//    lineMaker(ofVec2f(node.x, movement.y + node.y));
//    lineMaker(ofVec2f(node.x, movement.y - node.y));


    

    
    //need to check if the line is intersecting...
  
    
    /*
    
    
    for(int i=4; i<myPoints.size(); i++){
        for(int j=4; j<myPoints.size(); j++){
            if(myPoints[5].squareDistance(myPoints[j]) < 1){
                
                //except for the point that we are on!!!
        
        //if(node.distance(myPoints[i]) < 0){
            backtrackCount++;
            return false;
            }
        }
    }
    
*/
    
    
    //if(node.x < width && node.y < height)
        
   // if (myLine.isClosed()
    




    
    //lineMaker(ofVec2f(node.x+mDist, node.y+mDist));
    
    //cout << "another vector: " << node.x << " , " << node.y << cout;
    
    //    if(boringCounter > boringThreshold){
    //        movement.set(movement.getRotated(ofRandom(0,180)));
    //        boringThreshold = 0;
    //    }
    
    

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
