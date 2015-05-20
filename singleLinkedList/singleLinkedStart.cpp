/* 
 ___  ___  ___  ___      ___ _______
|\  \|\  \|\  \|\  \    /  /|\  ___ \
\ \  \\\  \ \  \ \  \  /  / | \   __/|
 \ \   __  \ \  \ \  \/  / / \ \  \_|/
  \ \  \ \  \ \  \ \    / /   \ \  \_|\ \ ___
   \ \__\ \__\ \__\ \__/ /     \ \_______\\__\
 ___\|__|\|__|\|__|\|__|/_____  \|_______\|__|
|\___   ___\\  ___ \ |\   ____\|\  \|\  \
\|___ \  \_\ \   __/|\ \  \___|\ \  \\\  \
     \ \  \ \ \  \_|/_\ \  \    \ \   __  \
      \ \  \ \ \  \_|\ \ \  \____\ \  \ \  \
       \ \__\ \ \_______\ \_______\ \__\ \__\
        \|__|  \|_______|\|_______|\|__|\|__|                
        
        Copyright Â© 2015 - Hive.Tech - Tyler McKay Hall
            tyler@hive.technology
             www.hive.technology

  This software is not intended for redistribution, as such it is not fully
  documented or gaurenteed. All rights reserved for use and publication. Permission 
  will be given to those who reasonably request.

    ** More information can be found at www.hive.technology/copywright ** 

  Please contact, any questions will be gladly answered.


Singly Linked List
==============================================
Basics - Getting program working in one file...


*/

/* Preprocessing */
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <vector>
using namespace std;

class SingleLinkNode {
    public:
        int number;
        
        SingleLinkNode(){
            number = -1;
        };
        
        SingleLinkNode(int numberIn){
            number = numberIn;
        };
    
        SingleLinkNode* getNext(){
            return next;
        }
        
        void setNext(SingleLinkNode* pointerChange){
            next = pointerChange;
        }
    
    private:
        SingleLinkNode* next;
};

class SingleLinkList {
    public:
    int totalNodes;
    SingleLinkNode* root;
    SingleLinkNode* current;
    
    //Default Constrcutor
    SingleLinkList(){
        root = NULL;
        current = NULL;
        totalNodes = 0;
    };
    
    //Contructor with Root already Created
    SingleLinkList(SingleLinkNode* rootIn){
        current = root = rootIn;
        totalNodes = 0;
    };

    SingleLinkNode* getRoot(){
        return root;
    };
    
    void setRoot(SingleLinkNode* newRoot){
        root = newRoot;
    };
    
    
    SingleLinkNode* getCurrent(){
        return current;
    };
    
    // If no paramater, reset current to the top
    void setCurrent(){
        current = root;  
    };
    
    // Give new position for current (overloaded)
    void setCurrent(SingleLinkNode* newCurrent){
        current = newCurrent;
    };
    
    bool nextValid(){
        if(current->getNext() != NULL){return true;}
        else { return false;}
    }
    
    void goNext(){
        current = current->getNext();
    };
    
    void pushNode(SingleLinkNode* newNode){
        
        // NONE in the list
        if(totalNodes == 0 && getRoot() == NULL){
            setRoot(newNode);
            setCurrent();
        }
        else{
            newNode->setNext(current->getNext());
            current->setNext(newNode);
            setCurrent(newNode);
        }
        totalNodes++;
    };
    
    private:
};

int main(int argc, char const *argv[])
{
    SingleLinkList* linkList = new SingleLinkList();
    int userInput = atoi(argv[1]);
       
    for(int i = 0; i < userInput; i++){
        SingleLinkNode* tempNode = new SingleLinkNode(i);
        linkList->pushNode(tempNode);
  }

    // Santiy check - Make sure items exist in list
	if (linkList->totalNodes > 0){
		// Start at top of list (reset current)
		// Save postion of current to go back to @ end (not nessisary...)
		SingleLinkNode* tempCurrent = linkList->getCurrent();
		linkList->setCurrent();
	    // If at least one exists, we go through loop to end
	    do {
	        cout << "Node is: " << linkList->getCurrent()->number << endl;
	        linkList->goNext();
	    } while(linkList->getCurrent() != NULL);
	    linkList->setCurrent(tempCurrent);
	}
}
