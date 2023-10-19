#include <bits/stdc++.h>

using namespace std;

int main() {
    int qnt_lists;
    cin >> qnt_lists;
    
    int length_of_each_list;
    cin >> length_of_each_list;
    
    set<pair<int,int>> list;
    for (int i = 0; i < qnt_lists; ++i) {
        for (int j = 0; j < length_of_each_list; ++j) {
            int c;
            cin >> c;
            list.insert({c, j});
        }
    }

    map<int, bool> column_used;

    set<pair<int,int>> X;
    int total_cost = 0;
    for (auto c_and_column : list) {
        auto c = c_and_column.first;
        auto column = c_and_column.second;
        if (!column_used.count(column)) {
            column_used[column] = 1;
            X.insert(c_and_column);
            total_cost += c;
        }
    }

    cout << "The set was: \n";
    for (auto c_and_column : X) {
        cout << c_and_column.first << " from column " << c_and_column.second << '\n';
    }
    cout << "With cost: " << total_cost << '\n';
    return 0;
}