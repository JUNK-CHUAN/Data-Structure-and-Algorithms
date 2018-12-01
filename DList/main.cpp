#include <iostream>
#include <string>
#include "DList.h"
#include "Pair.h"
using namespace std;


void catFunc(DList<KVpair<int, int>>& func1, DList<KVpair<int, int>>& func2);
void Print(DList<KVpair<int, int>>& func);
void EPrint(DList<KVpair<int, int>>& func);
int main() {
    DList<KVpair<int, int>> F_x;
    DList<KVpair<int, int>> G_x;


    KVpair<int, int> it;
    it.setcoeft(2);
    it.setIndex(3);
    F_x.append(it);
    it.setcoeft(6);
    it.setIndex(7);
    F_x.append(it);
    it.setcoeft(4);
    it.setIndex(11);
    F_x.append(it);
    it.setcoeft(9);
    it.setIndex(23);
    F_x.append(it);

    it.setcoeft(5);
    it.setIndex(4);
    G_x.append(it);
    it.setcoeft(3);
    it.setIndex(7);
    G_x.append(it);
    it.setcoeft(12);
    it.setIndex(11);
    G_x.append(it);

/*    int num1,num2;
    int i,k,v;

    cin>>num1>>num2;
    for(i=0;i<num1;i++)
    {
        cin>>k>>v;
        it.setcoeft(k);
        it.setIndex(v);
        F_x.append(it);
    }

    for(i=0;i<num2;i++)
    {
        cin>>k>>v;
        it.setcoeft(k);
        it.setIndex(v);
        G_x.append(it);
    }*/

    Print(F_x);
    Print(G_x);

    catFunc(F_x, G_x);

    F_x.sort();

    Print(F_x);
    EPrint(F_x);

    return 0;
}

void catFunc(DList<KVpair<int, int>>& func1, DList<KVpair<int, int>>& func2) {
    int time = 0;
    int pos = 0;
    int length = func2.length();
    for (func1.moveToStart(); time<func1.length(); func1.next()){
        for (func2.moveToStart(); pos<length; func2.next()) {
            if (func1.getValue().getIndex() == func2.getValue().getIndex()) {
                func1.getValue().setcoeft(func1.getValue().coeffeicient() + func2.getValue().coeffeicient());
                func2.remove();
                pos--;
            }
            pos++;
            if (func1.getValue().getIndex() == 0)
                func1.remove();
        }
        pos = 0;
        time++;
    }
    for (func2.moveToStart();func2.length()>0;) {
        func1.insert(func2.remove());
    }
}

void Print(DList<KVpair<int, int>>& func) {
    int time = 1;
    for (func.moveToStart(); time<func.length(); func.next()) {
        cout << func.getValue().coeffeicient() << "x^" << func.getValue().getIndex() << '+';
        time++;
    }
    cout << func.getValue().coeffeicient() << "x^" << func.getValue().getIndex() << endl;
}

void EPrint(DList<KVpair<int, int>>& func) {
    int time = 1;
    func.moveToEnd();
    func.prev();
    for (; time<func.length(); func.prev()) {
        cout << func.getValue().coeffeicient() << "x^" << func.getValue().getIndex() << '+';
        time++;
    }
    cout << func.getValue().coeffeicient() << "x^" << func.getValue().getIndex() << endl;
}

