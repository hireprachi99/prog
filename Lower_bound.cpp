#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int len;
    cin >> len;
    int* arr = new int[len];
    for (int i = 0; i < len; i++) {
        cin >> arr[i];
    }
    int n, in;

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> in;
        int min = arr[0] - in;
        int pos = 0;
        for (int j = 0; j < len; j++) {
            if (min > arr[j] - in || min < 0) {
                min = arr[j] - in;
                pos = j;
            }
        }
        if (min == 0)
            cout << "Yes " << pos+1 << endl;
        else
            cout << "No " << pos+1 << endl;
    }

    return 0;
}
