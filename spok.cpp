#include "spok.h"
void createStack (myStack &S){
    top(S) = nil;
}

bool isEmpty (myStack S){
    if (top(S) == nil){
        return true;
    }
    else{
        return false;
    }
}

void createNewElmt (infotype info, address &P){
    P = new elmStack;
    info(P) = info;
    next(P) = nil;
}

void push(myStack &S, address P){
    if (isEmpty(S)){
        top(S) = P;
    }
    else{
        next(P) = top(S);
        top(S) = P;
    }
}

void pop(myStack &S, address &P){
    if (!isEmpty(S)){
        P = top(S);
        top(S) = next(top(S));
    }
    else{
        info(P) = -1;
    }
}

bool cekSubjek(myStack &S){
    address P;
    if (info(top(S)) == 'Y' || info(top(S)) == 'y') {
        pop(S, P);
        if (info(top(S)) == 'U' || info(top(S)) == 'u') {
            pop(S, P);
            if (info(top(S)) == 'D' || info(top(S)) == 'd') {
                pop(S, P);
                if (info(top(S)) == 'I' || info(top(S)) == 'i') {
                    pop(S, P);
                    if (info(top(S)) == 'S' || info(top(S)) == 's') {
                        return true;
                    }
                }
            } else if (info(top(S)) == 'M' || info(top(S)) == 'm') {
                pop(S, P);
                if (info(top(S)) == 'A' || info(top(S)) == 'a') {
                    return true;
                }
            }
        }
    }else if (info(top(S))== 'W' || info(top(S)) == 'w'){
        pop(S,P);
        if (info(top(S))== 'I' || info(top(S))== 'i'){
            pop(S,P);
            if (info(top(S))== 'N' || info(top(S))== 'n'){
                pop(S,P);
                if (info(top(S))== 'O' || info(top(S))== 'o'){
                    return true;
                }
            }
        }else if(info(top(S))== 'A' || info(top(S)) == 'a'){
            pop(S,P);
            if (info(top(S))== 'H' || info(top(S))=='h'){
                pop(S,P);
                if (info(top(S))=='Y' || info(top(S))=='y'){
                    pop(S,P);
                    if (info(top(S))=='U' || info(top(S))=='u'){
                        return true;
                    }
                }
            }else if (info(top(S))== 'W' || info(top(S))=='w'){
                pop(S,P);
                if (info(top(S))== 'A' || info(top(S))=='a'){
                    pop(S,P);
                    if (info(top(S))== 'N' || info(top(S))=='n'){
                        return true;
                    }
                }
            }
        }
    }
    return false;
}

bool cekPredikat(myStack &S){
    address P;
    if (info(top(S)) == 'M' || info(top(S)) == 'm'){
        pop(S,P);
        if (info(top(S))=='E' || info(top(S))== 'e'){
            pop(S,P);
            if (info(top(S))=='M' || info(top(S))== 'm'){
                pop(S,P);
                if (info(top(S))== 'B' || info(top(S))=='b'){
                    pop(S,P);
                    if (info(top(S))== 'A' || info(top(S))=='a'){
                        pop(S,P);
                        if (info(top(S))=='C' || info(top(S))=='c'){
                            pop(S,P);
                            if (info(top(S))=='A' || info(top(S))=='a'){
                                return true;
                            }
                        }else if (info(top(S))=='N' || info(top(S))=='n'){
                            pop(S,P);
                            if (info(top(S))=='T' || info(top(S))=='t'){
                                pop(S,P);
                                if (info(top(S))=='U' || info(top(S))=='u'){
                                    return true;
                                }
                            }
                        }
                    }
                }
            }else if (info(top(S))=='N' || info(top(S))=='n'){
                pop(S,P);
                if (info(top(S))=='D' || info(top(S))=='d'){
                    pop(S,P);
                    if (info(top(S))=='E'||info(top(S))=='e'){
                        pop(S,P);
                        if (info(top(S))=='N'||info(top(S))=='n'){
                            pop(S,P);
                            if (info(top(S))=='G'||info(top(S))=='g'){
                                pop(S,P);
                                if (info(top(S))=='A'||info(top(S))=='a'){
                                    pop(S,P);
                                    if (info(top(S))=='R' || info(top(S))=='r'){
                                        return true;
                                    }
                                }
                            }
                        }
                    }
                }
            }else if (info(top(S))=='L' || info(top(S))=='l'){
                pop(S,P);
                if (info(top(S))=='I'||info(top(S))=='i'){
                    pop(S,P);
                    if (info(top(S))=='H'||info(top(S))=='h'){
                        pop(S,P);
                        if (info(top(S))=='A'||info(top(S))=='a'){
                            pop(S,P);
                            if (info(top(S))=='T'||info(top(S))=='t'){
                                return true;
                            }
                        }
                    }
                }
            }else if (info(top(S))=='R' || info(top(S))=='r'){
                pop(S,P);
                if (info(top(S))=='A' || info(top(S))=='a'){
                    pop(S,P);
                    if (info(top(S))=='S' || info(top(S))=='s'){
                        pop(S,P);
                        if (info(top(S))=='A' || info(top(S))=='a'){
                            pop(S,P);
                            if (info(top(S))=='K' || info(top(S))=='k'){
                                pop(S,P);
                                if (info(top(S))=='A' || info(top(S))=='a'){
                                    pop(S,P);
                                    if (info(top(S))=='N' || info(top(S))=='n'){
                                        return true;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    return false;
}

bool cekObjek(myStack &S){
    address P;
    if (info(top(S)) == 'B' || info(top(S)) == 'b'){
        pop(S,P);
        if (info(top(S))=='U' || info(top(S))== 'u'){
            pop(S,P);
            if (info(top(S))=='K' || info(top(S))== 'k'){
                pop(S,P);
                if (info(top(S))=='U' || info(top(S))== 'u'){
                    return true;
                }
            }
        }
    }else if (info(top(S))=='F' || info(top(S))=='f'){
        pop(S,P);
        if (info(top(S))=='I' || info(top(S))=='i'){
            pop(S,P);
            if (info(top(S))=='L' || info(top(S))=='l'){
                pop(S,P);
                if (info(top(S))=='M' || info(top(S))=='m'){
                    return true;
                }
            }
        }
    }else if (info(top(S))=='L' || info(top(S))=='l'){
        pop(S,P);
        if (info(top(S))=='A' || info(top(S))=='a'){
            pop(S,P);
            if (info(top(S))=='G' || info(top(S))=='g'){
                pop(S,P);
                if (info(top(S))=='U' || info(top(S))=='u'){
                    return true;
                }
            }
        }
    }else if (info(top(S))=='M' || info(top(S))=='m'){
        pop(S,P);
        if (info(top(S))=='A' || info(top(S))=='a'){
            pop(S,P);{
                if (info(top(S))=='S' || info(top(S))=='s'){
                    pop(S,P);
                    if (info(top(S))=='A' || info(top(S))=='a'){
                        pop(S,P);
                        if (info(top(S))=='K' || info(top(S))=='k'){
                            pop(S,P);
                            if (info(top(S))=='A' || info(top(S))=='a'){
                                pop(S,P);
                                if (info(top(S))=='N' || info(top(S))=='n'){
                                    return true;
                                }
                            }
                        }
                    }
                }
            }
        }
    }else if (info(top(S))=='T' || info(top(S))=='t'){
        pop(S,P);
        if (info(top(S))=='E' || info(top(S))=='e'){
            pop(S,P);
            if (info(top(S))=='M' || info(top(S))=='m'){
                pop(S,P);
                if (info(top(S))=='A' || info(top(S))=='a'){
                    pop(S,P);
                    if (info(top(S))=='N' || info(top(S))=='n'){
                        return true;
                    }
                }
            }
        }
    }
    return false;
}

bool cekKeterangan(myStack &S){
    address P;
    if (info(top(S))=='D' || info(top(S))=='d'){
        pop(S,P);
        if (info(top(S))=='I' || info(top(S))=='i'){
            pop(S,P);
            if (info(top(S))=='B' || info(top(S))=='b'){
                pop(S,P);
                if (info(top(S))=='I' || info(top(S))=='i'){
                    pop(S,P);
                    if (info(top(S))=='O' || info(top(S))=='o'){
                        pop(S,P);
                        if (info(top(S))=='S' || info(top(S))=='s'){
                            pop(S,P);
                            if (info(top(S))=='K' || info(top(S))=='k'){
                                pop(S,P);
                                if (info(top(S))=='O' || info(top(S))=='o'){
                                    pop(S,P);
                                    if (info(top(S))=='P' || info(top(S))=='p'){
                                        return true;
                                    }
                                }
                            }
                        }
                    }
                }
            }else if (info(top(S))=='P' || info(top(S))=='p'){
                pop(S,P);
                if (info(top(S))=='E' || info(top(S))=='e'){
                    pop(S,P);
                    if (info(top(S))=='R' || info(top(S))=='r'){
                        pop(S,P);
                        if (info(top(S))=='P' || info(top(S))=='p'){
                            pop(S,P);
                            if (info(top(S))=='U' || info(top(S))=='u'){
                                pop(S,P);
                                if (info(top(S))=='S' || info(top(S))=='s'){
                                    return true;
                                }
                            }
                        }
                    }
                }
            }else if (info(top(S))=='R' || info(top(S))=='r'){
                pop(S,P);
                if (info(top(S))=='E' || info(top(S))=='e'){
                    pop(S,P);
                    if (info(top(S))=='S' || info(top(S))=='s'){
                        pop(S,P);
                        if (info(top(S))=='T' || info(top(S))=='t'){
                            pop(S,P);
                            if (info(top(S))=='O' || info(top(S))=='o'){
                                pop(S,P);
                                if (info(top(S))=='R' || info(top(S))=='r'){
                                    pop(S,P);
                                    if (info(top(S))=='A' || info(top(S))=='a'){
                                        pop(S,P);
                                        if (info(top(S))=='N' || info(top(S))=='n'){
                                            return true;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }else if (info(top(S))=='U' || info(top(S))=='u'){
                    pop(S,P);
                    if (info(top(S))=='M' || info(top(S))=='m'){
                        pop(S,P);
                        if (info(top(S))=='A' || info(top(S))=='a'){
                            pop(S,P);
                            if (info(top(S))=='H' || info(top(S))=='h'){
                                return true;
                            }
                        }
                    }
                }
            }else if (info(top(S))=='S' || info(top(S))=='s'){
                pop(S,P);
                if (info(top(S))=='E' || info(top(S))=='e'){
                    pop(S,P);
                    if (info(top(S))=='K' || info(top(S))=='k'){
                        pop(S,P);
                        if (info(top(S))=='O' || info(top(S))=='o'){
                            pop(S,P);
                            if (info(top(S))=='L' || info(top(S))=='l'){
                                pop(S,P);
                                if (info(top(S))=='A' || info(top(S))=='a'){
                                    pop(S,P);
                                    if (info(top(S))=='H' || info(top(S))=='h'){
                                        return true;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    return false;
}

bool cekKalimat(myStack &S1, myStack &S2, myStack &S3, myStack &S4, myStack &S5){
    if (!isEmpty(S1) && cekSubjek(S1)){
        if (!isEmpty(S2) && cekPredikat(S2)){
            if (!isEmpty(S3) && cekObjek(S3)){
                if (!isEmpty(S4) && isEmpty(S5) && cekKeterangan(S4)){
                    return true;
                }
                else if (isEmpty(S4) && isEmpty(S5)){
                    return true;
                }
            }
            else if (!isEmpty(S3) && cekKeterangan(S3)){
                if (isEmpty(S4) && isEmpty(S5)){
                    return true;
                }
            }
            else if (isEmpty(S3) && isEmpty(S4) && isEmpty(S5)){
                return true;
            }
        }
    }
    return false;
}
string cekSPOK(myStack &S1, myStack &S2, myStack &S3, myStack &S4, myStack &S5){
    string hasil;
    if (!isEmpty(S1) && cekSubjek(S1)){
        if (!isEmpty(S2) && cekPredikat(S2)){
            if (!isEmpty(S3) && cekObjek(S3)){
                if (!isEmpty(S4) && isEmpty(S5) && cekKeterangan(S4)){
                    return hasil = "S   P   O   K";
                }
                else if (isEmpty(S4) && isEmpty(S5)){
                    return hasil = "S   P   O";
                }
            }
            else if (!isEmpty(S3) && cekKeterangan(S3)){
                if (isEmpty(S4) && isEmpty(S5)){
                    return hasil = "S   P   K";
                }
            }
            else if (isEmpty(S3) && isEmpty(S4) && isEmpty(S5)){
                return hasil = "S P";
            }
        }
    }
    return hasil = "tidak terdefinisi";
}
