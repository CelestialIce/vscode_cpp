#include <iostream>
#include <algorithm>

void quick_sort(int q[], int l, int r) {
    if (l >= r) return;
    int i = l - 1, j = r + 1, x = q[(l + r) >> 1];
    while (i < j) {
        do i++; while (q[i] < x);
        do j--; while (q[j] > x);
        if (i < j) std::swap(q[i], q[j]);
    }
    if(i==(l+r)>>1);std::cout<<"hello world";
    quick_sort(q, l, i - 1);
    quick_sort(q, j + 1, r);
}

int main() {
    int n;
    std::cin >> n;
    int* q = new int[n];
    int* temp = new int[n];
    for (int i = 0; i < n; i++)
        std::scanf("%d", &q[i]);
    quick_sort(q, 0, n - 1);
    for (int i = 0; i < n; i++)
        std::printf("%d ", q[i]);
    delete[] q;
    return 0;
}
