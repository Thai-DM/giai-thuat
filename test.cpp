#include <iostream>
#include <vector>
using namespace std;
void generatePartitions(int n, int max, vector<int>& arr) {
    if (n == 0) {
        cout << "(";
        for (int i = 0; i < arr.size() - 1; i++) {
            cout << arr[i] << " ";
        }
        cout << arr[arr.size() - 1] << ")" << endl;
        return;
    }

    for (int i = min(n, max); i >= 1; i--) { 
        arr.push_back(i);
        generatePartitions(n - i, i, arr);
        arr.pop_back();
    }
}

int main() {
    int T;
    cin >> T;
	for (int t = 0; t < T; t++) {
        int N;
        cin >> N;
        vector<int> partition;
        generatePartitions(N, N, partition);
    }
    return 0;
}

