#include "ofApp.h"

ofApp::ofApp() : 
	ofBaseApp(), 
	btnCircle(100, 100, 100, 50, false),
	btnSquare(300, 100, 100, 50, true) {

}
//--------------------------------------------------------------
void ofApp::setup(){
	btnCircle.setup();
	btnSquare.setup();
}

//--------------------------------------------------------------
void ofApp::update(){
	btnCircle.update();
	btnSquare.update();
}

//--------------------------------------------------------------
void ofApp::draw(){
	btnCircle.draw();
	btnSquare.draw();
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
