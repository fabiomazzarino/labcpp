#ifndef __CSTACK_H__
#define __CSTACK_H__

template <class T>
class CStack {
    protected:
        class CNode {
            public:
                T data;
                CNode *prev;
                CNode(T adata, CNode *aprev) : data(adata), prev(aprev) { };
        };

        unsigned size;
        CNode *topnode;

    public:
        CStack() : size(0), topnode(nullptr) { };
        ~CStack();

        void push(T adata);
        T pop();
        T top();
        unsigned getSize();
};

#endif
