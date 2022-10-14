/*#include<iostream>
#include<array>
using namespace std;
int main(){
array<int,4> a = {1,2,3,4};
int size = a.size();
for (int i=0;i<size;i++){
    cout<<a[i]<<endl;
}
cout<<"Element at 2nd index is "<<a.at(2)<<endl;
cout<<"Empty or not "<<a.empty()<<endl;
cout<<"First Element "<<a.front()<<endl;
cout<<"Last Element "<<a.back()<<endl;
}*/
/*#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v;
    vector<int> a(5,1);
    vector<int> last(a);
    cout<<"print last"<<endl;
    for(int i:last){
        cout<<i<<endl;
    }
    cout<<"print a"<<endl;
    for(int i:a){
        cout<<i<<endl;
    }
    cout << "capacity " << v.capacity() << endl;
    v.push_back(1);
    cout << "capacity " << v.capacity() << endl;
    v.push_back(2);
    cout << "capacity " << v.capacity() << endl;
    v.push_back(3);
    cout << "capacity " << v.capacity() << endl;
    cout << "size " << v.size() << endl;
    cout << "Elements at 2nd index " << v.at(2) << endl;
    cout << "front " << v.front() << endl;
    cout << "back " << v.back() << endl;
    cout << "before pop" << endl;
    for (int i:v)
    {
        cout << i << " ";
    }

cout<<endl;

v.pop_back();

cout << "after pop" << endl;
for (int i:v)
{
    cout << i << " ";
}
cout<<endl;
cout<<"before clear size "<<v.size()<<endl;
v.clear();
cout<<"after clear size "<<v.size()<<endl;
}*/
/*#include<iostream>
#include<deque>
using namespace std;
int main(){
    deque<int> d;
    d.push_back(1);
    d.push_front(2);
    /*for (int i: d){
        cout<<i<<" ";
    }
    //d.pop_back();
    d.pop_front();
    cout<<endl;
    for(int i:d){
        cout<<i<<" ";
    }*/
    /*cout<<"Print first Index Element "<<d.at(1)<<endl;
    cout<<"front "<<d.front()<<endl;
    cout<<"back "<<d.back()<<endl;
    cout<<"empty or not "<<d.empty()<<endl;
    cout<<"before erase "<<d.size()<<endl;
    d.erase(d.begin(),d.begin()+1);
    cout<<"after erase "<<d.size()<<endl;
    for(int i:d){
        cout<<i<<endl;
    }

}*/
/*#include<iostream>
#include<list>
using namespace std;
int main(){
    list<int> l;
    list<int> n(5,100);
    cout<<"printing n"<<endl;
    for(int i:n){
        cout<<i<<endl;
    }
    cout<<endl;
    l.push_back(1);
    l.push_front(2);
    for(int i:l){
        cout<<i<<" ";
    }
    cout<<endl;
    l.erase(l.begin());
    cout<<"after erase"<<endl;
    for(int i:l){
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<"size of list "<<l.size()<<endl;
}*/
/*#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<string> s;
    s.push("I"); 
    s.push("am");
    s.push("yash");
    cout<<"Top Element "<<s.top()<<endl;
    s.pop();
    cout<<"Top Element "<<s.top()<<endl;
    cout<<"Size of Stack "<<s.size()<<endl;
    cout<<"Empty or not "<<s.empty()<<endl;
}*/
/*#include<iostream>
#include<queue>
using namespace std;
int main(){
    queue<string> q;
    q.push("i");
    q.push("am");
    q.push("yash");
    cout<<"size before pop "<<q.size()<<endl;
    cout<<"First Element "<<q.front()<<endl;
    q.pop();
    cout<<"First Element "<<q.front()<<endl;
    cout<<"size after pop "<<q.size()<<endl;
}*/
/*#include<iostream>
#include<queue>
using namespace std;
int main(){
    //max heap
    priority_queue<int> maxi;
    //min heap
    priority_queue<int,vector<int>,greater<int> > mini;
    maxi.push(1);
    maxi.push(3);
    maxi.push(2);
    maxi.push(0);
    cout<<"Size "<<maxi.size()<<endl;
    int n=maxi.size();
    for(int i=0;i<n;i++){
        cout<<maxi.top()<<" ";
        maxi.pop();
        cout<<endl;
    }
    mini.push(5);
     mini.push(1);
      mini.push(0);
       mini.push(4);
        mini.push(3);

        int a=mini.size();
        for(int i=0;i<a;i++){
            cout<<mini.top()<<" ";
            mini.pop();
        }
        cout<<endl;
        cout<<"khali ho kaa bhai mini "<<mini.empty()<<endl;
        cout<<"khali ho kaa bhai maxi "<<maxi.empty()<<endl;

}*/
/*#include<iostream>
#include<set>
using namespace std;
int main(){
    set<int> s;
    s.insert(5);
     s.insert(5); 
     s.insert(5);
    s.insert(1);
    s.insert(6);
    s.insert(6);
    s.insert(0);
     s.insert(0);
      s.insert(0);
    for(auto i:s){
        cout<<i<<endl;
    }
    cout<<endl;
    set<int>::iterator it=s.begin();
    it++;
    s.erase(it);
     for(auto i:s){
        cout<<i<<endl;
    }
    cout<<"5 is present or not "<<s.count(5)<<endl;
    cout<<"-5 is present or not "<<s.count(-5)<<endl;
    cout<<endl;
    set<int>::iterator itr=s.find(5);
    for(auto it=itr;it!=s.end();it++){
    cout<<*it<<" ";
    }cout<<endl;
    cout<<"Value present at itr "<<*it<<endl;

}*/
/*#include<iostream>
#include<map>
using namespace std;
int main(){
    map<int,string> m;
    m[1]="yash";
    m[2]="kumar";
    m[13]="mathur";
    m.insert({5,"bheem"});
    cout<<"before erase"<<endl;
    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
    }cout<<endl;
    cout<<"finding 13 "<<m.count(13)<<endl;
     cout<<"finding -13 "<<m.count(-13)<<endl;
     m.erase(13);
     cout<<endl;
      cout<<"after erase"<<endl;
        for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
    }cout<<endl<<endl;
    auto it=m.find(5);
    for(auto i=it;it!=m.end();i++){
        cout<<(*i).first<<endl;
    }

}*/
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    v.push_back(1);
    v.push_back(3);
    v.push_back(6);
    v.push_back(7);
    cout<<binary_search(v.begin(),v.end(),5)<<endl;
    cout<<"Finding 6 "<<binary_search(v.begin(),v.end(),6)<<endl;
    cout<<"lower bound "<<lower_bound(v.begin(),v.end(),6)-v.begin()<<endl;
    cout<<"upper bound "<<upper_bound(v.begin(),v.end(),6)-v.begin()<<endl;
    int a=3;
    int b=5;
    cout<<"max "<<max(a,b)<<endl;
    cout<<"min "<<min(a,b)<<endl;
    swap(a,b);
    cout<<"a "<<a<<endl;
    string abcd="abcd";
    reverse(abcd.begin(),abcd.end());
    cout<<"abcd ="<<abcd<<endl;
    rotate(v.begin(),v.begin()+1,v.end());
    cout<<"after rotate"<<endl;
    for(int i:v){
        cout<<i<<" ";
    }cout<<endl;
    sort(v.begin(),v.end());
    for(int i:v){
        cout<<i<<" ";
    }


}