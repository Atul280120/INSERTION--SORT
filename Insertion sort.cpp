#include <bits/stdc++.h>
using namespace std;
void insertionSort(vector<int> &V){
     int N = V.size();
    int i, j, key;
 
    for (i = 1; i < N; i++) {
        j = i;
        while (j > 0 and V[j] < V[j - 1]) {

            swap(V[j], V[j - 1]);
            j -= 1;
        }
    }
}

int main(){
vector<int> m;
int n;
cout<<"Enter the size of vector"<<endl;
cin>>n;
cout<<"Enter the Elements of vector"<<endl;
for(int i=0;i<n;i++){
    int temp;
    cin>>temp;
    m.push_back(temp);
}
 insertionSort(m);
 for(auto x:m){
    cout<<x<<" ";
 }
 return 0;
}
