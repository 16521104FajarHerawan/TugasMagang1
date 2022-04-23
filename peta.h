#ifndef peta_h
#define peta_h
#include <iostream>
#include "objek.h"
using namespace std;
/**
*@brief Menampilkan peta awal
*@param panjang peta
*@return output peta awal
*/
void peta_awal(int len){
        cout<<"Tampilan Peta Dilihat dari Depan"<<endl;
        for (int i = 0;i<len;i=i+1){
            for (int j = 0;j<len;j=j+1){
                if (i == 0 || i == (len-1) || j == 0 || j == (len-1) ){
                    cout<<"#";
                }
                else{
                    cout<<"-";
                    }
                }
            cout<<endl;
            }
}
/**
*@brief Menampilkan peta dari depan
*@param panjang peta,datakorban korban1,datakorban korban2,datalilin lilin1,datalilin lilin2
*@return output tampilan peta dari depan
*/
void peta_depan(int len,datakorban korban1,datakorban korban2,datalilin lilin1,datalilin lilin2){
        cout<<"Tampilan Peta dilihat dari depan"<<endl;
        for (int i = 0;i<len;i=i+1){
            for (int j = 0;j<len;j=j+1){
                if (i == korban1.x && j == korban1.y){
                    cout<<korban1.nama[0];
                }
                else if (i == korban2.x && j == korban2.y){
                     cout<<korban2.nama[0];
                }
                else if (i == lilin1.x && j == lilin1.y){
                     cout<<"L";
                }
                else if (i == lilin2.x && j == lilin2.y){
                     cout<<"L";
                }
                else if (i == 0 || i == (len-1) || j == 0 || j == (len-1) ){
                    cout<<"#";
                }
                else{
                    cout<<"-";
                    }
                }
            cout<<endl;
            }

}
/**
*@brief Menampilkan peta dari kanan
*@param panjang peta,datakorban korban1,datakorban korban2,datalilin lilin1,datalilin lilin2
*@return output tampilan peta dari kanan
*/
void peta_kanan(int len,datakorban korban1,datakorban korban2,datalilin lilin1,datalilin lilin2){
        cout<<"Tampilan Peta dilihat dari kanan"<<endl;
        for (int i = 0;i<len;i=i+1){
            for (int j = (len-1);j>=0;j=j-1){
                if (j == korban1.x && i == korban1.y){
                    cout<<korban1.nama[0];
                }
                else if (j == korban2.x && i == korban2.y){
                     cout<<korban2.nama[0];
                }
                else if (j == lilin1.x && i == lilin1.y){
                     cout<<"L";
                }
                else if (j == lilin2.x && i == lilin2.y){
                     cout<<"L";
                }
                else if (i == 0 || i == (len-1) || j == 0 || j == (len-1) ){
                    cout<<"#";
                }
                else{
                    cout<<"-";
                    }
                }
            cout<<endl;
            }

}
/**
*@brief Menampilkan peta dari kiri
*@param panjang peta,datakorban korban1,datakorban korban2,datalilin lilin1,datalilin lilin2
*@return output tampilan peta dari kiri
*/
void peta_kiri(int len,datakorban korban1,datakorban korban2,datalilin lilin1,datalilin lilin2){
        cout<<"Tampilan Peta dilihat dari kIri"<<endl;
        for (int i = (len-1);i>=0;i=i-1){
            for (int j = 0;j<len;j=j+1){
                if (j == korban1.x && i == korban1.y){
                    cout<<korban1.nama[0];
                }
                else if (j == korban2.x && i == korban2.y){
                     cout<<korban2.nama[0];
                }
                else if (j == lilin1.x && i == lilin1.y){
                     cout<<"L";
                }
                else if (j == lilin2.x && i == lilin2.y){
                     cout<<"L";
                }
                else if (i == 0 || i == (len-1) || j == 0 || j == (len-1) ){
                    cout<<"#";
                }
                else{
                    cout<<"-";
                    }
                }
            cout<<endl;
            }

}
#endif
