#ifndef SPOK_H_INCLUDED
#define SPOK_H_INCLUDED
#include <iostream>

#define info(P) P->info
#define next(P) P->next
#define top(S) ((S).top)
#define nil NULL

using namespace std;

typedef char infotype;
typedef struct elmStack *address;

struct elmStack{
    infotype info;
    address next;
};

struct myStack{
    address top;
};

void createStack(myStack &S);
bool isEmpty(myStack S);
void createNewElmt(infotype info, address &P);
void push(myStack &S, address P);
void pop(myStack &S, address &P);
bool cekSubjek(myStack &S);
bool cekPredikat(myStack &S);
bool cekObjek(myStack &S);
bool cekKeterangan(myStack &S);
bool cekKalimat(myStack &S1, myStack &S2, myStack &S3, myStack &S4, myStack &S5);
string cekSPOK(myStack &S1, myStack &S2, myStack &S3, myStack &S4, myStack &S5);



#endif // SPOK_H_INCLUDED
