#ifndef Ibu_H
#define Ibu_H
#include <vector>

class ibu {
public:
    string name;
    vector<anak*> daftar_anak;

    ibu(string pNama) :nama(pNama) {
        cout << "Ibu \"" << nama << "\" ada\n";
    }
    ~ibu() {
       
