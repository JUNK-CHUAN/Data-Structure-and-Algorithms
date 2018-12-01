//
// Created by 杨小川 on 2018/10/28.
//

#ifndef DLIST_DLIST_H
#define DLIST_DLIST_H


#include<iostream>
#include"List.h"
#include"Link.h"
using namespace std;


template<typename E>
class DList : public List<E>
{
private:
    Link<E>* head;
    Link<E>* tail;
    Link<E>* curr;
    int cnt;

    void init()
    {
        curr = head = new Link<E>;
        tail = new Link<E>;
        head->next = tail;
        tail->prev = head;
        cnt = 0;
    }
    void removeall()
    {
        while (head != NULL)
        {
            curr = head;
            head = head->next;
            delete curr;
        }
    }

public:
    DList() { init(); }
    ~DList() { removeall(); }
    void print() const;
    void clear() { removeall(); init(); }
    void insert(const E& it) {
        curr->next = curr->next->prev = new Link<E>(it, curr, curr->next);
        cnt++;
    }
    void append(const E& it) {
        tail->prev = tail->prev->next = new Link<E>(it, tail->prev, tail);
        cnt++;
    }

    E remove() {
        //assert (curr->next == tail);

        E it = curr->next->element;
        Link<E>* ltemp = curr->next;
        curr->next->next->prev = curr;
        curr->next = curr->next->next;
        delete ltemp;
        cnt--;
        return it;

    }
    void moveToStart() {
        curr = head;
    }
    void moveToEnd() {
        curr = tail->prev;
    }
    void prev() {
        if (curr == head) return;
        curr = curr->prev;
    }
    void next() {
        if (curr->next == tail)return;
        curr = curr->next;
    }

    int length() const { return cnt; }

    int currPos() const {
        Link<E>* temp = head;
        int i;
        for (i = 0; curr != temp; i++) {
            temp = temp->next;
        }
        return i;
    }

    void moveToPos(int pos) {
        if ((pos >= 0 && pos <= cnt)) {
            curr = head;
            for (int i = 0; i < pos; i++) {
                curr = curr->next;
            }
        }
    }
    E& getValue() const {
        assert(curr->next != tail);
        //if (curr->next != tail)
            return curr->next->element;
    }

    void sort() {
        Link<E> *pos;
        E temp;
        Link<E> *pend = tail;

        for (int i = 0; i < cnt; i++) {
            for (pos = head; pos->next->next != pend; pos = pos->next) {
                if (pos->next->element.getIndex() > pos->next->next->element.getIndex()) {
                    temp = pos->next->element;
                    pos->next->element = pos->next->next->element;
                    pos->next->next->element = temp;
                }
            }
            pend = pend->prev;
        }
    }
};


#endif //DLIST_DLIST_H
