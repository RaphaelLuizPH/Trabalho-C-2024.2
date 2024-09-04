#include <math.h>
#include "remove.h.c"

int func_val(int x, int b) {
    double result = 186.752 - 148.235 * x + 34.5049 * pow(x, 2) - 3.5091 * pow(x, 3) +
                    0.183166 * pow(x, 4) - 0.00513554 * pow(x, 5) +
                    0.0000735464 * pow(x, 6) - 4.22038e-7 * pow(x, 7);
    return round(result);
}
