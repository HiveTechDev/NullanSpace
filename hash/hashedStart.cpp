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


The Hash
==============================================
Setting up the hash in a single file to be tested

*/

/* Preprocessing */
#include <stdlib.h>
#include <iostream>
#include <string>
#include <vector>
#include "singleLinked.h"

using namespace std;


int main(int argc, char const *argv[])
{
    std::vector<> ;
    SingleLinkList* linkList = new SingleLinkList();
    
    linkList->pushNode("test","11");
    linkList->pushNode("test2","22");
    
    //Set to first of list
    // linkList->setCurrent();
    // cout << "Key: " << linkList->getCurrent()->getKey() << " Value: " << linkList->getCurrent()->getValue() << endl;
    // linkList->goNext();
    // cout << "Key: " << linkList->getCurrent()->getKey() << " Value: " << linkList->getCurrent()->getValue() << endl;
    
    
    
}
