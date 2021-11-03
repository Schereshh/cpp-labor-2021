#include <iostream>
#include "Account.h"

using namespace std;

int main()
{
    Account acc1;
    cout << acc1 << endl;
    Account acc2(1000);
    cout << acc2;
    return 0;
}