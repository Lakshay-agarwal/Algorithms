#include <iostream>

using namespace std;
int lower_index(int a[], int l, int r, int x){
    int index =-1;
    while(l<=r){
        int m = l +(r-l)/2; 
        if(a[m] == x){
            index = m ;
            r=m-1;
        }
        if(a[m] < x ){
            r= m-1; 
        }
        if(a[m] > x){
            l = m +1; 
        }
    }
    return index;
}

int upper_index(int a[], int l, int r, int x){
    int index = -1;
    while(l<=r){
        int m = l+(r-l)/2; 
        if(a[m] == x ){
            index = m; 
            l = m+1; 
        }
        if(a[m] > x){
            l = m +1; 
        }
        if(a[m] < x){
            r= m-1; 
        }
    }
    return index; 
}

int main() {
	int t; 
	cin>>t; 
	while(t--){
	    int n; 
	    cin>>n; 
	    int a[n]; 
	    for(int i=0; i<n; i++){
	        cin>>a[i]; 
	    }
	    
	    int l = lower_index(a, 0, n-1, 0);
	    int r= upper_index(a, 0, n-1, 0);
	    //cout<<l<<" "<<r<<"\n";
	    if(l == -1 && r==-1) cout<<0<<"\n"; 
	    if(l == -1 && r!= -1) cout<<1<<"\n"; 
	    if(l!=-1 && r!= -1) cout<<r-l+1<<"\n";
	}
	return 0;
}
