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
Implementation of the linked list class

*/

/* Preprocessing */
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <vector>
#include "singleLinked.h"

using namespace std;

int main(int argc, char const *argv[])
{
  SingleLinkList* linkList = new SingleLinkList();
  int userInput = atoi(argv[1]);

  for(int i = 1; i <= userInput; i++){
      linkList->pushNode(i);
  }

    // Santiy check - Make sure items exist in list
  if (linkList->getTotalNodes() > 0){
    // Start at top of list (reset current)
    // Save postion of current to go back to @ end (not nessisary...)
    SingleLinkNode* tempCurrent = linkList->getCurrent();
    linkList->setCurrent();
      // If at least one exists, we go through loop to end
      do {
          cout << "Node is: " << linkList->getCurrent()->getNumber() << endl;
          linkList->goNext();
      } while(linkList->getCurrent() != NULL);
      linkList->setCurrent(tempCurrent);
  }
}
