#include <algorithm>
#include <array>
#include <cstdlib>


static const size_t N = 1000000;


int main() {
    volatile int arr[N];

    for (int i = 0; i < N / 2; ++i)
        arr[i] = i * 2;

    for (int i = 0; i < N / 2; ++i)
        arr[i + N / 2] = i * 4;

    std::inplace_merge((int *) arr, (int*) arr + N / 2, (int *) &arr[N]);
}
