//
// Created by 杨小川 on 2018/11/3.
//

#ifndef STACK_LSTACK_H
#define STACK_LSTACK_H

#include <assert.h>
#include "Link.h"
#include "Stack.h"


// Linked stack implementation
template <typename E>
class LStack: public Stack<E> {
private:
    Link<E>* top;
    int size;                   // The size of Link Stack
    static const int defaultsize = 100; // Set defaultsize
public:
    // Constructor
    LStack(int sz =defaultsize) {
        top = NULL;
        size = 0;
    }
    // Destructor
    ~LStack() {
        clear();
    }

    // Reinitialize
    void clear() {
        while (top != NULL) {
            Link<E>* temp = top;
            top = top->next;
            delete temp;
        }
        size = 0;
    }

    // Put "it" on stack
    void push(const E& it) {
        top = new Link<E>(it, top);
        size++;
    }

    // Remove "it" from stack
    E pop() {
        //Assert(top != NULL, "Stack is empty");
        assert(top != NULL);
        E it = top->element;
        Link<E>* ltemp = top->next;
        delete top;
        top = ltemp;
        size--;
        return it;
    }

    // Return top value
    const E& topValue() const {
        //Assert(top != NULL, "Stack is empty");
        assert(top != NULL);
        return top->element;
    }

    // Return length
    int length() const {
        return size;
    }
};



#endif //STACK_LSTACK_H
