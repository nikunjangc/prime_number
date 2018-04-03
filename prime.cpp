#include <iostream>
#include <string>
#include <cmath>
#include <vector>
using namespace std;

long long int prime_finder(long long int prime_checker,long long int num);
 bool test_value=false;
int main()
{

int choice=0;
long long int prime_checker=0;
long long int num=0;
long long int p=0;
long long int n=0;

cout <<"1: To check if the number is prime or not"<<endl;
cout <<"2: Determine whether 2^P-  1is prime for each of the primes not exceeding 100."<<endl;
cout <<"3: Find as many primes of the formn n^2+1, where n is a positive integer "<<endl;
cout <<"Enter the choice :"<<endl;
    cin>>choice;
    switch(choice) {
    case 1 :  
        cout <<"Enter a number : ";
        cin>> num;

         prime_checker=sqrt(num);
        test_value=prime_finder(prime_checker,num);
            if(test_value==true){
                cout<<num<<" is a prime num. "<<endl;
            }
            else{
                cout<<num<<" is not a prime num. "<<endl;
            }
 
             break;      
    case 2 : 

        cout <<"Enter a number prime number to determine whether 2^P-1 is prime :  ";
        cin>> p;
        prime_checker=sqrt(p);
         test_value=prime_finder(prime_checker,p);
        
            if(test_value==true ){ 
                 num=pow(2,p)-1;       
                 prime_checker=sqrt(num);
                 test_value=prime_finder(prime_checker,num);
                    if(test_value==true ){
                         cout<<num<<" is a prime num. "<<endl;
             }

            }
            else{
               
                cout<<num<<" is not a prime num. "<<endl;
            }
             break;
    case 3 :
          vector<long long int> arr;
             cout <<"Enter a number to find the numbers of prime that can be formed by n^2+1:  ";
            cin>>n;
            long long int prime_counter=0;
            long long int num=pow(n,2)+1;
             for ( int i=2; i<=num;i++){
                  prime_checker=sqrt(i);
                //   cout<<"primechecker"<<prime_checker <<endl;
                //   cout<< "prime i"<<i <<endl;
                 test_value=prime_finder(prime_checker,i);
                // cout<<test_value<<endl;;
                 if(test_value==true ){
                    arr.push_back(i);   
                 prime_counter++;
                 }

            }
          
    //cout << "Output of begin and end\t:\t";
    // for (long long int i = 0; i<arr.size(); ++i){
    //     cout << arr[i] << '\t';
    //     }
             cout<<"The numbers of primer that can be found by n^2+1:  "<<prime_counter;

}

 
}


long long int prime_finder(long long int prime_checker,long long int num ){
    test_value=false;
   if(num==2 ||num ==3 || num==5 || num==7 ){
         test_value= true;
         }
    if (num%2!=0){
    for(long long int i=3;i<=prime_checker;i++){
       
         if (num %i==0) {
              test_value=  false;
           break;
          }
          else {
              test_value=  true;
          }
          i++;
    
    }
    }
   return test_value;
   
}


