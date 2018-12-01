#include <iostream>
#include "LList.h"
#include "CList.h"

using namespace std;


void CatList (LList<int>& L1, LList<int>& L2);
void Gather (LList<int>& L1, LList<int>& L2);
void Josehus (CList<int>& Cir, int& StuNum, int& StartNUm);
void StuOut(CList<int>& Cir, int& StartNum);

int main (void) {
    LList<int> L1;
    for (int i=1; i<=9; i++){
        L1.append(i);
    }
    LList<int> L2;
    for (int i=0; i<10; i+=2){
        L2.append(i);
    }
    CatList(L1, L2);

    //Josehus problem
    int StuNum,StartNum = 0;
    CList<int> CL1;
    cout << endl << " Please input the amount of the students." << endl;
    cin >> StuNum;
    cout << " Please enter the start number." << endl;
    cin >> StartNum;
    Josehus(CL1, StuNum, StartNum);
    return 0;
}

void CatList (LList<int>& L1, LList<int>& L2){
    L1.moveToEnd();
    L1.prev();
    L2.moveToEnd();
    L2.prev();
    if (L1.getValue() >= L2.getValue()){
        Gather(L1, L2);
        L1.moveToStart();
        cout << "L1: ";
        for (int i=0; i<L1.length(); i++){
            cout << L1.getValue() << " ";
            L1.next();
        }
    }else{
        Gather(L2, L1);
        L2.moveToStart();
        cout << "L2: ";
        for (int i=0; i<L2.length(); i++){
            cout << L2.getValue() << " ";
            L2.next();
        }
    }
}

void Gather (LList<int>& L1, LList<int>& L2){
    L1.moveToStart();
    L2.moveToStart();
    int i = 0;
    while(1){
        if(L1.getValue() > L2.getValue()){
            L1.insert(L2.getValue());
            L2.next();
            i++;
        }else{
            L1.next();
        }
        if(i == L2.length())
            break;
    }
}

void Josehus(CList<int>& Cir, int& StuNum, int& StartNum){
    for (int i=1; i<=StuNum; i++)
        Cir.append(i);
    Cir.moveToStart();
    while(Cir.length() != 0){
        StuOut(Cir, StartNum);
    }
}

void StuOut(CList<int>& Cir, int& StartNum){
    for (int i=1; i<StartNum; i++)
        Cir.next();
    StartNum = Cir.getValue();
    cout << Cir.remove() << " : ";
}