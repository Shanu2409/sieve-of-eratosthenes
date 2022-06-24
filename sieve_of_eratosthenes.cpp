//sieve of eratosthene

#include<iostream>

using namespace std;

//using Sieve

int sieve(bool prime[],int num) {

    int cnt=0;

    //setting TRUE for every number

    for(int i=2;i<=num;i++){

        prime[i]=true;

    }

    

    prime[0] = prime[1] = 0;

    for(int i = 2; i<=num; i++) {

        

        if(prime[i]){

            cnt++;

          //  cout<<i<<endl; //to print all prime num

            //iske saare multiple mark krde - non prime

            for(int j = 2*i; j<=num; j+=i){

                prime[j] = false;   

            }

        }

    }

    

    

    return cnt;

}

int main() {

    

    int num;

    cout<<"Enter number to find prime till : ";

    cin>>num;

    bool prime[num];

    int ans = sieve(prime,num);

    

    cout<<ans<<" number are prime....";

    //int n;

//    cin >> n;

//    while(n!=-1) {

//        if(prime[n]) {

//            cout << "It is a Prime Number" << endl;

//        }

//        else{

//            cout << " It is not a Prime Number" << endl;

//        }

//        cin >> n;

//    }

    return 0;

}
