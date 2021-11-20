#include<iostream>
#include<algorithm> 
using namespace std;
void merge(int arr[],int l,int m,int r){
	int n1=m-1+1;
	int n2=r-m;
	int *L=new int [n1],*R =new int [n2];
	for (int i=0;i<n1;i++){
		L[i]=arr[l+i];
		for(int j=0;j<n1;j++){
			R[i]=arr[m+1+j];
			i=j=0;
		
		}
		int	k=l;
	}
}
