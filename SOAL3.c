#include <stdio.h>
#include <math.h>

int is_prime(unsigned long long n) {
    if (n <= 1) {
        return 0;
    }
    if (n <= 3) {
        return 1;
    }
    if (n % 2 == 0 || n % 3 == 0) {
        return 0;
    }
    for (unsigned long long i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) {
            return 0;
        }
    }
    return 1;
}

int main() {
    unsigned long long N;
    
    scanf("%llu", &N);
    
    if (is_prime(N)) {
        printf("PRIMA\n");
    } else {
        printf("BUKAN\n");
    }

    return 0;
}