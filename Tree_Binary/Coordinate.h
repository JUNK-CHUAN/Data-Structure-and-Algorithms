//
// Created by 杨小川 on 2018/12/2.
//

#ifndef TREE_BINARY_COORDINATE_H
#define TREE_BINARY_COORDINATE_H


#include <iostream>
using namespace std;


class Coordinate {
    friend istream& operator<<(istream& input, Coordinate p) {
        input >> p.m_iX >> p.m_iY;
        return input;
    }
    friend ostream& operator<<(ostream& output, Coordinate p) {
        output << " " << p.m_iX << " " << p.m_iY;
        return output;
    }
private:
    int m_iX;
    int m_iY;

public:
    Coordinate(int _x = 0, int _y = 0) {
        m_iX = _x;
        m_iY = _y;
    }
    ~Coordinate() {}

    int getX() { return  m_iX; }
    int getY() { return  m_iY; }
};


#endif //TREE_BINARY_COORDINATE_H
