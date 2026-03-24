#include <iostream>
using namespace std;
int main() {
	string S;
	cin>>S;
	for(int i=0; i<=S.length();i++)
	{
		if(S[i]>='A' && S[i]<='Z'){
			cout<<(char)(S[i]+32);
		}
	
      else if(S[i]>='a' && S[i]<='z'){
       cout<<(char)(S[i]-32);
	   }
        
	}
   return 0;
}
