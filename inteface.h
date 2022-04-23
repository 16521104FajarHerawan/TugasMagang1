#ifndef interface_h
#define interface_h
#include <iostream>
#include "objek.h"
using namespace std;
/**
 *@brief Prosedur memasukan input panjang peta
 *@param a pointer to panjang peta
 *@return nilai panjang peta
 */
 void input_panjang(int* len){
    cout<<"Masukkan panjang peta: ";
    cin>>*len;
}
/**
 *@brief Prosedur memasukan input nama dan koordinat korban
 *@param a pointer to korban
 *@return nama dan koordinat korban
 */
void input_korban(datakorban* korban,int urutan){
    cout << "Masukkan nama dan koordinat korban ke-"<<urutan<<": ";
    cin >> korban->nama>>korban->x>>korban->y;
}
/**
 *@brief Prosedur memasukan koordinat lilin
 *@param a pointer to lilin
 *@return koordinat lilin
 */
void input_lilin(datalilin* lilin,int urutan){
    cout << "Masukkan koordinat lilin ke-"<<urutan<<": ";
    cin >> lilin->x >> lilin->y;
}
#endif // interface
