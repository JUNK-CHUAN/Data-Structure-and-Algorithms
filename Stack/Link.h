//
// Created by 杨小川 on 2018/10/30.
//

#ifndef STACK_LINK_H
#define STACK_LINK_H

#include<stdlib.h>


//Singly linked list node
template <typename E>
class Link
{
private:
    static Link<E>* freelist;
public:
    // Value for this node
    E element;
    // Pointer to next node in list
    Link *next;

    Link(const E& elemval, Link* nextval = NULL)
    {element = elemval; next = nextval;}
    Link(Link* nextval = NULL)
    {next = nextval;}

    void* operator new(size_t)
    {
        if(freelist == NULL) return ::new Link;
        Link<E>* temp = freelist;
        freelist = freelist->next;
        return temp;
    }

    void operator delete(void* plt)
    {
        ((Link<E>*)plt)->next = freelist;
        freelist = (Link<E>*)plt;
    }
};

template <typename E>
Link<E>* Link<E>::freelist = NULL;

#endif //STACK_LINK_H
