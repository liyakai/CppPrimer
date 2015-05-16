#include<iostream>
#include<vector>
#include<algorithm>
#include<iterator>
using namespace std;

int main(){
    istream_iterator<int> in(cin), eof;
    ostream_iterator<int> out(cout, " ");
    vector<int> vec;
    while(in != eof){
        vec.push_back(*in++);
    }
    sort(vec.begin(),vec.end());
    unique_copy(vec.begin(), vec.end(), out);  
    cout<<endl;
}
