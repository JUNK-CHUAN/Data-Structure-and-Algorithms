//
// Created by 杨小川 on 2018/10/28.
//

#ifndef DLIST_PAIR_H
#define DLIST_PAIR_H


template<typename Coeft, typename Index>
class KVpair
{
private:
    Coeft k;
    Index e;
public:
    // Constructors
    KVpair() {}
    KVpair(Coeft kval, Index eval) {
        k = kval;
        e = eval;
    }
    // Copy constructor
    KVpair(const KVpair& o) {
        k = o.k;
        e = o.e;
    }

    void operator =(const KVpair& o) {
        k = o.k;
        e = o.e;
    }

    // Data member access functions
    Coeft coeffeicient() {
        return k;
    }
    void setcoeft(Coeft kval) {
        k = kval;
    }
    Index getIndex() {
        return e;
    }
    void setIndex(Index eval) {
        e = eval;
    }
};


#endif //DLIST_PAIR_H
