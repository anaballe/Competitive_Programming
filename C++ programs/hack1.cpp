#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#include <string.h>

using namespace std;


/*
 * Complete the function below.
 */
string maximumPermutation(string w, string s) {
    // Return the string representing the answer.
    string k="";
    string t[s.length()-w.length()+1],q="";
    //cout << w << "\n" <<s<<endl;
    int i,l,j,co=0,p=0,max=0,h=0;;
    l=w.length();
    char c;
    for(i=97;i<=122;++i){
        c=i;
        for(j=0;j<w.length();++j){
            if(w[j]==c){
                k=k+w[j];
            }
        }
    }
    //cout << k<< endl;
    for(i=0;i<s.length()-l+1;++i){
            h=l;
            t[i]=s.substr(i,h);

        }
        while(1){
            co=0;
            for(i=0;i<s.length()-l+1;++i){
                if(t[i]==k){
                ++co;
                p+=co;
                
                
            }
            if(max<co){
            max=co;
            q=k;
        }
    }
        bool val = next_permutation(k.begin(), k.end());
        if(val==false)
            break;

            
        }

        
    
    if(p>0)
        return q;
    else
        return "-1";
   


}


int main()
{
   // ofstream fout(getenv("OUTPUT_PATH"));

    int t;
    cin >> t;
    //cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int t_i = 0; t_i < t; t_i++) {
        string w,s;
        cin >> w >> s;

        string result = maximumPermutation(w, s);

        cout << result << "\n";
       // cout << "\n";

    }

    //fout.close();

    return 0;
}
