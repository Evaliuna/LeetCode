#include <iostream>
using namespace std;

int main(){
    int num;
    cout<<"num = ";
    cin>>num;

   

    while(num>=10){
         int sum = 0;

         while(num!=0){
            sum += num%10;
            num /=10;
         }
         num = sum;
    }
    cout<<num;
    // for(int i = 0; num!=0; i++){
    //     int rem = (num%10);
    //     sum += rem;   
    //     num  = num/10;
    // }
    // if(sum>10){
    //     int againsum = 0;
    //      for(int i = 0; sum!=0; i++){
    //     int rem = (sum%10);
    //      againsum += rem;
       
    //     sum  = sum/10;
    // }
    //  cout<<againsum<<"\n";
    // }
    // else{
    // cout<<sum<<"\n";
    // }

    return 0;
}