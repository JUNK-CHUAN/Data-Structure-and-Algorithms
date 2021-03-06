//
// Created by 杨小川 on 2018/10/28.
//

#ifndef DLIST_LIST_H
#define DLIST_LIST_H


template <typename E>
class List
// List ADT
{
private:
    // Project assignment
    void operator =(const List&){}
    // Project copy constructor
    List(const List&){}

public:
    List(){}          // Default constructor
    virtual ~List(){} // Base destructor

    // Clear contents from the list, to make it empty
    virtual void clear() = 0;

    // Insert an element at the current location.
    // Item: The element to be inserted.
    virtual void insert(const E& item) = 0;

    // Adapted an element at the end of the List.
    // item: The element to be adapted。
    virtual void append(const E& item) = 0;

    // Remove and return the current element.
    // Return: thr element that was removed.
    virtual E remove() = 0;

    // Set the current position to the start of the list.
    virtual void moveToStart() = 0;

    // Set the current position to the end of the list.
    virtual void moveToEnd() = 0;

    // Move the current position one step left. No change
    // if already at beginning.
    virtual void prev() = 0;

    // Move the current position one step right. No change.
    // if already at end.
    virtual void next() = 0;

    // Return: The number of the elements in the list.
    virtual int length() const = 0;

    // Return: The position of the element current.
    virtual int currPos() const = 0;

    // Set current position.
    // pos: The position to make current.
    virtual void moveToPos(int pos) = 0;

    //Return: The current element.
    virtual E& getValue() const = 0;
};


#endif //DLIST_LIST_H
