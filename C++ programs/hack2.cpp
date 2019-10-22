    #include<bits/stdc++.h>
    using namespace std;
     
    set<string> uni;
    set<string>::iterator it;
    string text="";
    queue<string> q;
    int ans=0;
     
    void bfs(string temp);
     
    int main()
    {
    	int n,i;
    	cin >> n;
    	int seq[n];
    	string s = "";
    	//string s;
    	for(i=0;i<n;i++)
    	{
    		cin >> seq[i];
    		s += seq[i]+'0';
    		//s[i] = seq[i]+'0';
    		text += i+1+'0';
    	}
    	if(s == text)
    	{
    		cout << 0;
    	}
    	else
    	{
    		bfs(s);
    		cout << ans;
    	}
    	/*
    	for(i=0;i<n;i++)
    	{
    		cout << seq[i] << ' ';
    		cout << s[i] << endl;
    	}
    	//cout << endl << s << endl;
    	cout << s.size();
    	*/
    }
     
    void bfs(string temp)
    {
    	int i,j,n = temp.size();
    	string next=temp;
    	q.push(temp);
    	q.push("-1");
    	while(true)
    	{
    		it = uni.find(text);
    		//if(it==uni.end())
    		{
    			temp = q.front();
    			if(temp == "-1")
    			{
    				ans++;
     
    				it = uni.find(text);
    				if(it!=uni.end())
    				{
    					break;
    				}
     
    				q.push("-1");
    				q.pop();
    				temp = q.front();
    			}
    			if(temp == "-1")
    			{
    				break;
    			}
    			for(i=1;i<n;i++)
    			{
    				for(j=0;j<=i;j++)
    				{
    					next[j] = temp[i-j];
    				}
    				for(j=i+1;j<n;j++)
    				{
    					next[j] = temp[j];
    				}
    				q.push(next);
    				uni.insert(next);
    			}
    			q.pop();
    		}
    		/*
    		else
    		{
    			break;
    		}
    		*/
    	}
    }