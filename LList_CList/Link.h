//
// Created by 杨小川 on 2018/10/29.
//

#ifndef LLIST_CLIST_LINK_H
#define LLIST_CLIST_LINK_H


#include<stdlib.h>


//Singly linked list node
template<typename E>
class Link
{
public:
    // Value for this node
    E element;
    // Pointer to next node in list
    Link *next;

    // Constructors
    Link(const E& elemval, Link* nextval = NULL) {
        element = elemval;
        next = nextval;
    }
    Link(Link* nextval = NULL) {
        next = nextval;
    }
};

#endif //LLIST_CLIST_LINK_H
