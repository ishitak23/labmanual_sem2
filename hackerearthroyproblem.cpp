#include<iostream>
int main(){
	int L,W,H,N;
	std::cin>>L;
    std::cin>>N;
	for(int i=0;i<N;i++){
		std::cin>>W>>H;
		if(W<L || H<L){
			std::cout<<"\nUPLOAD ANOTHER";
		}
		else
		if(W==H){
			std::cout<<"\nACCEPTED";
		}
		else{
			std::cout<<"\nCROP IT";
		}
	}
	return 0;
}