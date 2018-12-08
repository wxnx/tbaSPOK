#include <iostream>
#include <windows.h>
#include "spok.h"

using namespace std;

int main()
{
    cout<< "|||||||||||||||||||||||||||||||||||||||||||||||||"<<endl;
    cout<< "||----- Tubes Teori Bahasa dan Automata -------||"<<endl;
    cout<< "|||||||||||||||||||||||||||||||||||||||||||||||||"<<endl;
    cout<< "||         Wino Rama Putra(1301174696)         ||"<<endl;
    cout<< "||         Yudhistira Al Alim(1301174644)      ||"<<endl;
    cout<< "||         Atazriel Al Hayuma(1301174631)      ||"<<endl;
    cout<< "||                IFIK-41-01                   ||"<<endl;
    cout<< "|||||||||||||||||||||||||||||||||||||||||||||||||"<<endl<<endl;


    cout << "~~~~~~~~~~~~~~~~~~ DAFTAR SPOK ~~~~~~~~~~~~~~~~~~"<< endl;
    cout << "|||||||||||||||||||||||||||||||||||||||||||||||||" << endl;
    cout << "|| SUBJEK |PREDIKAT     |OBJEK     |KETERANGAN ||" << endl;
    cout << "|||||||||||||||||||||||||||||||||||||||||||||||||" << endl;
    cout << "|| Yudis  |Membaca      |Buku      |Dibioskop  ||" << endl;
    cout << "|| Yuma   |Membantu     |Film      |Diperpus   ||" << endl;
    cout << "|| Wino   |Melihat      |Lagu      |Direstoran ||" << endl;
    cout << "|| Wahyu  |Mendengarkan |Masakan   |Dirumah    ||" << endl;
    cout << "|| Wawan  |Merasakan    |Teman     |Disekolah  ||" << endl;
    cout << "|||||||||||||||||||||||||||||||||||||||||||||||||" << endl<< endl;
    cout << "Syarat-Syarat: "<<"\t S   P   O   K"<< endl;
    cout << "\t\t S   P   O" << endl;
    cout << "\t\t S   P   K" << endl;
    cout << "\t\t S   P" << endl << endl;

    string kalimat;
    myStack S,kata1,kata2,kata3,kata4,kata5,spok1,spok2,spok3,spok4,spok5;
    address P,Q;
    mulai:
    cout << "Masukkan kalimat : ";
    getline(cin, kalimat);
    kalimat = kalimat + ' ';

    int z = kalimat.length();
    int y = 1;

    createStack(S);
    createStack(kata1);
    createStack(kata2);
    createStack(kata3);
    createStack(kata4);
    createStack(kata5);
    for (int x =0; x<z; x++){
        if (kalimat[x] != ' ' ){
            createNewElmt(kalimat[x],P);
            push(S,P);
        }
        else if (kalimat[x] == ' '){
            if (y == 1){
                while (!isEmpty(S)){
                    pop(S,P);
                    createNewElmt(info(P),Q);
                    push(kata1,Q);
                }
                y = y + 1;
            }
            else if (y == 2){
                while (!isEmpty(S)){
                    pop(S,P);
                    createNewElmt(info(P),Q);
                    push(kata2,Q);
                }
                y = y + 1;
            }
            else if (y == 3){
                while (!isEmpty(S)){
                    pop(S,P);
                    createNewElmt(info(P),Q);
                    push(kata3,Q);
                }
                y = y + 1;
            }
            else if (y == 4){
                while (!isEmpty(S)){
                    pop(S,P);
                    createNewElmt(info(P),Q);
                    push(kata4,Q);
                }
                y = y + 1;
            }
            else if (y == 5){
                while (!isEmpty(S)){
                    pop(S,P);
                    createNewElmt(info(P),Q);
                    push(kata5,Q);
                }
                y = y + 1;
            }
        }
    }

    bool cek = cekKalimat(kata1,kata2,kata3,kata4,kata5);
    if (cek){
        cout << endl << "Hasil : Kalimat Valid!" << endl;
        int z = kalimat.length();
        int y = 1;

        createStack(S);
        createStack(spok1);
        createStack(spok2);
        createStack(spok3);
        createStack(spok4);
        createStack(spok5);
        for (int x =0; x<z; x++){
            if (kalimat[x] != ' ' ){
                createNewElmt(kalimat[x],P);
                push(S,P);
            }
            else if (kalimat[x] == ' '){
                if (y == 1){
                    while (!isEmpty(S)){
                        pop(S,P);
                        createNewElmt(info(P),Q);
                        push(spok1,Q);
                    }
                    y = y + 1;
                }
                else if (y == 2){
                    while (!isEmpty(S)){
                        pop(S,P);
                        createNewElmt(info(P),Q);
                        push(spok2,Q);
                    }
                    y = y + 1;
                }
                else if (y == 3){
                    while (!isEmpty(S)){
                        pop(S,P);
                        createNewElmt(info(P),Q);
                        push(spok3,Q);
                    }
                    y = y + 1;
                }
                else if (y == 4){
                    while (!isEmpty(S)){
                        pop(S,P);
                        createNewElmt(info(P),Q);
                        push(spok4,Q);
                    }
                    y = y + 1;
                }
                else if (y == 5){
                    while (!isEmpty(S)){
                        pop(S,P);
                        createNewElmt(info(P),Q);
                        push(spok5,Q);
                    }
                    y = y + 1;
                }
            }
        }
        cout<<"Kalimat terdiri dari:"<<cekSPOK(spok1,spok2,spok3,spok4,spok5)<<endl;
            goto mulai;
        }
    else {
        cout << endl << "Hasil : Kalimat Tidak Valid!" << endl;
        goto mulai;
    }
}
