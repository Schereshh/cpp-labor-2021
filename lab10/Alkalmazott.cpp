//
// Created by Scheresh on 2021-12-13.
//

#include "Alkalmazott.h"

int Alkalmazott::counter = 0;

Alkalmazott::Alkalmazott(string vezetekNev, string keresztNev, int szuletesiEv,
        string munkakor):Szemely(vezetekNev,keresztNev, szuletesiEv){
this->munkakor = munkakor;
this->id = counter;
counter++;
}