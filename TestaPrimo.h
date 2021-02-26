#ifndef TestaPrimo_h
#define TestaPrimo_h

#include <iostream>

int TestaPrimo(int n) {

    int EhPrimo = 1, d=2;

    if (n <= 1)
        EhPrimo = 0;

    while (EhPrimo == 1 && d <= n /2) {
        if (n % d  == 0)
            EhPrimo = 0;
        d = d + 1;
    }

    return EhPrimo;
}

#endif
