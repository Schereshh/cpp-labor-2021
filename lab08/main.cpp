#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <fstream>
#include <cctype>

using namespace std;

int fun(int i,int j)
{
    if(abs(i)<abs(j))
        return j;
    else
        return i;
}

int main() {
    vector<string> fruits{
            "melon", "strawberry", "raspberry", "apple", "banana", "walnut", "lemon"
    };

//    1. Adott egy gyümölcsneveket tartalmazó dinamikus tömb.
//    Határozza meg, hogy van-e olyan gyümölcsnév, amely tartalmaz egy adott karakterláncot? Pl.
//    “berry” (find_if algoritmus)

    cout << "1. feladat" << endl;
    auto it = find_if(fruits.begin(), fruits.end(),
                      [](const string &i) { return i.find("berry") != string::npos; });
    if (it != fruits.end()) {
        cout << "Contains fruits that have berry in it" << endl;
    } else {
        cout << "Doesn't contain" << endl;
    }
    cout << endl;

//    2. Adott egy egész számokat tartalmazó dinamikus tömb. Készítsen kódrészletet, amelyben eldönti,
//    hogy páros-e a tömb minden eleme (all_of algoritmus).

    cout << "2. feladat" << endl;
    vector<int> number{53, 3, 5};

    if (all_of(number.begin(), number.end(), [](int i) { return i % 2; })) {
        cout << "All numbers are odd" << endl;
    }

    cout << endl;
//    3. Adott egy egész számokat tartalmazó dinamikus tömb. Készítsen kódrészletet, amelyben
//    megduplázza a tömb minden egyes elemét (for_each algoritmus).

    cout << "3. feladat" << endl;
    vector<int> multiNum{4, 13, 9, 10, 13};
    //Multiplying the numbers in the vector
    for_each(multiNum.begin(), multiNum.end(), [](int &a) {a = a*2;});

    for(auto i=multiNum.begin(); i<multiNum.end();i++){
        cout << *i << " ";
    }

    cout << endl;

//    4. Adott a következő hónapok neveit tartalmazó tömb. Készítsen kódrészletet, amelyben
//    meghatározza az öt betűből álló hónapok számát.

    cout << "4. feladat" << endl;
    vector<string> months{
        "January", "February", "March", "April", "May", "June",
        "July", "August", "September", "October", "November", "December"
    };

    int fiveLetter=0;

    for_each(months.begin(), months.end(), [&fiveLetter](string a){
        if(a.length() == 5)
            fiveLetter++;
    });
    cout << "Number of months that have five letters:" << fiveLetter << endl;
    cout << endl;

//    5. Adott egy valós számokat tartalmazó dinamikus tömb. Rendezze a tömböt csökkenő sorrendbe.
//            Az összehasonlító függvényt adja meg kétféleképpen:
//    ● Lambda kifejezéssel
//    ● Használja a fejállományban deklarált greater<> funktort!

    cout << "5. feladat" << endl;
    //Lambda kifejezés
    cout << "Original array:" << endl;
    vector<int> lambdaSort{36,30,3,63,11,75,85,53,56,10};

    for(auto i : lambdaSort){
        cout << i << " ";
    }
    cout << endl;

    cout << "Sorted with lambda comparator:" << endl;
    sort(lambdaSort.begin(), lambdaSort.end(), [](const int &a, const int &b){
        return a > b;
    });

    for(auto i : lambdaSort){
        cout << i << " ";
    }
    cout << endl;

    //Greater function
    cout << "Sorted with greater comparator: " << endl;
    vector<int> greaterSort{36,30,3,63,11,75,85,53,56,10};
    sort(greaterSort.begin(), greaterSort.end(), greater<int>());

    for(auto i : greaterSort){
        cout << i << " ";
    }
    cout << endl << endl;

//    6. Készítsen egy olyan dinamikus tömböt, amely tartalmazza az év hónapjait átlaghőmérséklettel
//    együtt (pair struktúra). Rendezze a tömböt átlaghőmérséklet szerint növekvő sorrendbe!

    cout << "6. feladat" << endl;

    ifstream file("temp.txt");
    string month; double temp;
    vector<pair<string, double>> mnthsAverageTemp;
    while(!file.eof()){
        file >> month; file >> temp;
        mnthsAverageTemp.push_back(make_pair(month, temp));
    }

    sort(mnthsAverageTemp.begin(), mnthsAverageTemp.end(), [](const pair<string,double> &a, const pair<string, double> &b){
        return(a.second < b.second);
    });
    for(auto i : mnthsAverageTemp){
        cout << i.first << ", " << i.second << endl;
    }
    cout << endl;

//    7. Rendezzen egy valós számokat tartalmazó dinamikus tömböt az elemek abszolút értékei szerint
//    növekvő sorrendbe!

    cout << "7. feladat" << endl;
    vector<int> absolute {-8, -21, -22, -40, 5, -45, -14, 2, 9, -1};
    sort(absolute.begin(), absolute.end(), [](int &a, int &b){
        return abs(a) < abs(b);
    });

    for(auto i : absolute){
        cout << i << " ";
    }
    cout << endl << endl;

//    8. Alakítsa át a hónapokat tartalmazó tömböt úgy, hogy minden szó kisbetűvel kezdődjön.
    cout << "8. feladat" << endl;
    for_each(months.begin(), months.end(), [](string &a){
        for_each(a.begin(), a.end(), [](char & c){
            c = tolower(c);
        });
    });

    for(auto i : months){
        cout << i << endl;
    }

}