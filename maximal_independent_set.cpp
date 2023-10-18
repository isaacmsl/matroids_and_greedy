#include <bits/stdc++.h>

using namespace std;

int main() {
    // Have some choosing your own matroid :)
    vector<int> C = {1, 2, 3, 10};
    set<set<int>> I = {{}, {1}, {1, 2}, {2, 10}, {2}, {10}, {1, 2, 10},{3}};

    sort(C.begin(), C.end(), greater<int>()); // Decreasing order

    set<int> X;
    for (int c : C) {
        X.insert(c);
        if (I.find(X) == I.end())
            X.erase(c);
    }

    cout << "Maximal independent set is: ";
    for (auto x : X) {
        cout << x << ' ';
    }
    cout << '\n';
    return 0;
}