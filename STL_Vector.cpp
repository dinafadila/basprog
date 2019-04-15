#include <iostream>
#include <cstdio>
#include <vector>
#include <cstdlib>
 
using namespace std;
 
int main() {
    std::ios::sync_with_stdio(false);
    vector <int> v;
    int i, awal;
    int a, cnt=0;
    double rata1, rata2;
    while(1) {
        cin >> a;
        if (a==-9) break;
        v.push_back(a);
    }
    int sum=0;
    awal = v.size();
    for (i=0;i<v.size();i++) { 		//v.size buat ngitung ada berapa bilangannya
        sum+=v[i];
    }
    rata1=1.0*sum/v.size(); 		//printf("%.2lf", rata1);
    while(1) {
        cin >> a;
        if (a==-9) break;
        else
        {
            v.erase(v.begin()+(a-1-cnt));
            cnt++;
        }
    }
    //cout << v.size() << endl;
    sum=0;
    for (i=0;i<v.size();i++) {
        sum+=v[i];
    }
    rata2=1.0*sum/v.size();
    printf("%d %d\n", awal, v.size());
    if (v.size()==0) printf("%.2lf -9.99\n", rata1);
    else printf("%.2lf %.2lf\n", rata1, rata2);
}
