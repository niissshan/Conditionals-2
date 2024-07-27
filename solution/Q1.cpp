#include<iostream>
using namespace std;
int main()
{

    int n1,n2,n5,n10,n20,n50,n100,n200,n500,n2000;
    int amount=0,cnt=0;
    cout<<"Enter the amount"<<endl;
    cin>>amount;
    if(amount>=2000) 
     {
        cnt = (amount/2000);
       cout<<"The number of notes of 2000: "<<cnt<<endl;
       amount -=(cnt*2000);
     }
    if(amount>=500) 
     {
        cnt = (amount/500);
       cout<<"The number of notes of 500: "<<cnt<<endl;
       amount -=(cnt*500);
     }
    if(amount>=200) 
     {
        cnt = (amount/200);
       cout<<"The number of notes of 200: "<<cnt<<endl;
       amount -=(cnt*200);
     }
    if(amount>=100) 
     {
        cnt = (amount/100);
       cout<<"The number of notes of 100: "<<cnt<<endl;
       amount -=(cnt*100);
     }
    if(amount>=50) 
     {
        cnt = (amount/50);
       cout<<"The number of notes of 50: "<<cnt<<endl;
       amount -=(cnt*50);
     }
    if(amount>=20) 
     {
        cnt = (amount/20);
       cout<<"The number of notes of 20: "<<cnt<<endl;
       amount -=(cnt*20);
     }
    if(amount>=10) 
     {
        cnt = (amount/10);
       cout<<"The number of notes of 10: "<<cnt<<endl;
       amount -=(cnt*10);
     }
    if(amount>=5) 
     {
        cnt = (amount/5);
       cout<<"The number of notes of 5: "<<cnt<<endl;
       amount -=(cnt*5);
     }
    if(amount>=2) 
     {
        cnt = (amount/5);
       cout<<"The number of notes of 5: "<<cnt<<endl;
       amount -=(cnt*5);
     } 
    if(amount>=1) 
     {
        cnt = (amount/5);
       cout<<"The number of notes of 5: "<<cnt<<endl;
       amount -=(cnt*5);
     }          

   
    return 0;
}