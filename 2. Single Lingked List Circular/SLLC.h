/*/---[ SLLC.h ]---/*/

#ifndef SLLC_H_INCLUDED
#define SLLC_H_INCLUDED
#include <iostream>

using namespace std;

#define info(P) P->info
#define next(P) P->next
#define first(L) L.first

// Deklarasi //

typedef struct elemen *address;

struct mahasiswa{
    string nama;
    string nim;
};

struct elemen{
    mahasiswa info;
    address next;
};

struct list{
    address first;
};

// Function & Procedure //

void createlist(list &L);

address alokasi(mahasiswa X);
void dealokasi(address &P);

address findelemen(list L, mahasiswa X);
void printinfo(list L);

void insertfirst(list &L, address P);
void insertlast(list &L, address P);
void insertafter(list &L, address &Prec, address P);
void deletefirst(list &L, address &P);
void deletelast(list &L, address &P);
void deleteafter(list &L, address &Prec, address &P);

#endif // SLLC_H_INCLUDED
