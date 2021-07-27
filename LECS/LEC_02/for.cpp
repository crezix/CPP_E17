#include <iostream>
using namespace std; 

int main (){

     for (int n=10; n>0; n--) {
        cout<<n<<","; 
    }
    cout << "liftoff!\n";

    int arr[] = {1,2,3,4,5,6,7,8,9,10,12,25,24,48};
    
    for(int el:arr){
        int rem = el % 2;
        
         if(rem==0){
             cout <<  "Number " << el << " is even" << endl;
         }
         else{
             cout <<  "Number " << el << " is odd" << endl;
         }
    }
}