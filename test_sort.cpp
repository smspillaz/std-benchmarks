#include <algorithm>
#include <array>
#include <cstdlib>


static const size_t N = 1000000;


int main() {
    volatile int arr[N];

    for (int i = 0; i < N; ++i)
        arr[i] = rand();

    std::sort((int *) arr, (int*) &arr[N]);
}
