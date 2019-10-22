# include <iostream>
# include <algorithm>
using namespace std;
string sortascii(string v){
	sort(v.begin(),v.end());
	reverse(v.begin(),v.end());
	return v;
}
int main(){
    int t,i,a,b;
    std::string s,v,ns=" ";
    cin >> t;
    for(i=0;i<t;++i){
        ns = "";
        cin >> s >> a >> b;
        v = s.substr(a,b-a+1);
        v = sortascii(v);
        //cout << v << endl;
        ns = s.substr(0,a)+v+s.substr(b+1,s.length());
        cout << ns << endl;
    }
}