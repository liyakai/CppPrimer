#include<iostream>
#include<map>
#include<vector>
using namespace std;

//void add_family(map<string, vector<string>> &ma){
void add_family(multimap<string, string> &ma){
    string last_name;
    cout<<"Please input last name to create a new family."<<endl;
    cin >> last_name;
   // ma[last_name] = "";
}

//void add_child(map<string, vector<string>> &ma){
void add_child(multimap<string, string> &ma){
    string last_name, name;
    cout<<"Please input the last name and the name."<<endl;
    cin >> last_name;
    cin >> name;
   // ma[last_name].push_back(name);
    ma.insert({last_name, name});
}

//void find_family(map<string, vector<string>> &ma){
void find_family(multimap<string, string> &ma){
    string last_name;
    cout<<"Please input the last name to find a new family."<<endl;
    cin >> last_name;
   // for (auto name: ma[last_name])
   //     cout<<name<<" ";
   // cout<<endl;
    for (auto it = ma.lower_bound(last_name); it != ma.upper_bound(last_name); it++){
        cout<<it->first<<"--->"<<it->second<<endl;
    }
}

int main(){
    vector<string> vec;
    //map<string, vector<string>> ma;
    multimap<string,string> ma;
    int i = 0;
    cout<<"Please have a choice:"<<endl;
    cout<<"1. add a new family."<<endl;
    cout<<"2. add a new child name in family."<<endl;
    cout<<"3. find a family."<<endl;
    while(cin>>i){
        switch(i){
            case 1:
                add_family(ma);
                break;
            case 2:
                add_child(ma);
                break;
            case 3: 
                find_family(ma);
                break;
            default:
                cout<<"Please input 1 or 2."<<endl;
        }
        cout<<"Please have a choice:"<<endl;
        cout<<"1. add a new family."<<endl;
        cout<<"2. add a new child name in family."<<endl;
        cout<<"3. find a family."<<endl;
    }
}
