#include<iostream>
#include<algorithm> 
using namespace std;
void select(int arr[],int n){
	for (int gap=n/2;gap>=1;gap/2){
		for(int j=gap;j<n;j++){
			for(int i=j-gap;i>=0;i-gap){
				if(arr[i+gap]>arr[i]){
					break;
				}
				else{
					swap(arr[i+gap],arr[i]);
				}
			}
		}
	}
	}
