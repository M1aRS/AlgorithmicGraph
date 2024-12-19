#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n = 5;
    vector<vector<int>> mas(n);
    for(int i = 0; i < n; ++i){
        int a;
        cin >> a;
        for(int j = 0; j < a;++j){
            int temp;
            cin >> temp;
            mas[i].push_back(temp);
        }
    }
    for(int i = 0; i < n; ++i){
        cout << i + 2  << ": ";
        for(int j = 0; j < mas[i].size();++j){
            cout << mas[i][j] <<" ";
        }
        cout << "\n";
    }
    return 0;
}