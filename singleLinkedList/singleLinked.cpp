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
#include <stdlib.h>
#include <iostream>
#include "singleLinked.h"

using namespace std;


SingleLinkNode::SingleLinkNode(){
    number = -1;
};

SingleLinkNode::SingleLinkNode(int numberIn){
    number = numberIn;
};

int SingleLinkNode::getNumber(){
    return number;
};

SingleLinkNode* SingleLinkNode::getNext(){
    return next;
};

void SingleLinkNode::setNext(SingleLinkNode* pointerChange){
    next = pointerChange;
};


//Default Constrcutor
SingleLinkList::SingleLinkList(){
    root = NULL;
    current = NULL;
    totalNodes = 0;
};

//Contructor with Root already Created
SingleLinkList::SingleLinkList(SingleLinkNode* rootIn){
    current = root = rootIn;
    totalNodes = 0;
};

int SingleLinkList::getTotalNodes(){
    return totalNodes;
}


SingleLinkNode* SingleLinkList::getRoot(){
    return root;
};

void SingleLinkList::setRoot(SingleLinkNode* newRoot){
    root = newRoot;
};

SingleLinkNode* SingleLinkList::getCurrent(){
    return current;
};

// If no paramater, reset current to the top
void SingleLinkList::setCurrent(){
    current = root;  
};

// Give new position for current (overloaded)
void SingleLinkList::setCurrent(SingleLinkNode* newCurrent){
    current = newCurrent;
};

bool SingleLinkList::nextValid(){
    if(current->getNext() != NULL){return true;}
    else { return false;}
}

void SingleLinkList::goNext(){
    current = current->getNext();
};

void SingleLinkList::pushNode(int newData){
    SingleLinkNode* tempNode = new SingleLinkNode(newData);
    pushNode(tempNode);
};

void SingleLinkList::pushNode(SingleLinkNode* newNode){
    
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

void SingleLinkList::deleteNode(SingleLinkNode* toDelete){
    SingleLinkNode* justBefore;
    justBefore = getRoot();
    while(justBefore->getNext() != toDelete){
        justBefore = justBefore->getNext();
    }
    if(justBefore == NULL){
        cout << "Node doesn't exsist in list" << endl;
    }
};