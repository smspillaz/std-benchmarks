#include <algorithm>
#include <array>
#include <cstdlib>


static const size_t N = 1000000;


int main() {
    volatile int arr1[N / 2];
    volatile int arr2[N / 2];
    volatile int out[N];

    for (int i = 0; i < N / 2; ++i) {
        arr1[i] = rand();
        arr2[i] = rand();
    }

    std::merge((int*) arr1, (int*) &arr1[N / 2], (int*) arr2, (int*) &arr2[N / 2], (int*) out);
}
