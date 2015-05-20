

/////////////////////////////////////////////////////////////////////////////
//  SingleLinkList - Container for data  -- Basic unit of Linked List      //
/////////////////////////////////////////////////////////////////////////////

class SingleLinkNode {
public:
    ///////////////////////////////////////
    //           Constructors            //
    ///////////////////////////////////////
    //Default Constrcutor - Sets number to -1        
    SingleLinkNode();
    // Create from integer in
    SingleLinkNode(int numberIn);

    ///////////////////////////////////////
    //         Variable Get/Set          //
    ///////////////////////////////////////
    int getNumber();

    ///////////////////////////////////////
    //              Pointers             //
    ///////////////////////////////////////

    // Getters
    SingleLinkNode* getNext();
    // Setters
    void setNext(SingleLinkNode* pointerChange);

private:
    int number;
    SingleLinkNode* next;
};

/////////////////////////////////////////////////////////////////////////////
//  SingleLinkList - Container for nodes and Linked list type fuctions     //
//  NOTE: Current gives you a cursor to work with in inserting/deleting    //
/////////////////////////////////////////////////////////////////////////////

class SingleLinkList {
public:
    
    ///////////////////////////////////////
    //           Constructors            //
    ///////////////////////////////////////
    //Default Constrcutor
    SingleLinkList();
    
    //Contructor with Root already Created
    SingleLinkList(SingleLinkNode*);

    ///////////////////////////////////////
    //         Variable Get/Set          //
    ///////////////////////////////////////
    int getTotalNodes();

    ///////////////////////////////////////
    //     Root/Current Modifiers        //
    ///////////////////////////////////////

    //// Getters ////
    SingleLinkNode* getRoot();
    SingleLinkNode* getCurrent();
    
    //// Setters ////
    void setRoot(SingleLinkNode*);
    // If no paramater, reset current to the top
    void setCurrent();
    // Give new position for current (overloaded)
    void setCurrent(SingleLinkNode*);
    
    //// Move/Get info on current ////
    // returns true if current->next is valid
    bool nextValid();
    void goNext();

    ///////////////////////////////////////
    //           Node Modifiers          //
    ///////////////////////////////////////

    // Create and push node 
    void pushNode(int);

    // Push existing node
    void pushNode(SingleLinkNode*);

    // Deletes current node - Current becomes the next in list
    void deleteNode(SingleLinkNode*);
    
private:
    int totalNodes;
    SingleLinkNode* root;
    SingleLinkNode* current;
};
