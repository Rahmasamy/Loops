#include <iostream>
#include <stdio.h>
#include <windows.h>
using namespace std;

int main()
{
    int choice;
    cout << "choose from the list " << endl;
    cout << "1.factorial " << endl;
    cout << "2.table of the ASCII code " << endl;
    cout << "3.day of any data " << endl;
    cout << "4.display the text in different colors " << endl;
    cout << "5.display the power of the number" << endl;
    cout << "6.display the number is Armstrong or not " << endl;
     cout << "7.the number is prime or not" << endl;
    cout << "8.fibonancci sequence " << endl;
    cout << "9.find the sum of the serious 1/1!+2/2!+3/3!...n/n" << endl;
    cout << "10.find the sum of the serious 1/1+2/2+3/3...n/n" << endl;
    cout << "11.find the sum of the serious 1/1+1/2+1/3" << endl;
    cout << "12.find the factors of the given numbers" << endl;
    cin>>choice;
    if (choice==1){
            int n;
        cout << "enter your number " << endl;
        cin>>n;
        int fact=1;
        for (int i=1;i<=n;i++){
            fact=fact*i;
        }
         cout << "the factorial= " <<fact<< endl;


    }
    if (choice==2){
         char ch;
         for (int i=225;i>=0;i--){
            cout<<char(i);
         }
    }
   if (choice==3){
    int leap,total,day,year,diff=0,remain=0;
    cout<<"enter your year"<<endl;
    cin>>year;
    int basic=2000; //the basic that we get the differience between it and the current year
    diff=(year-1)-basic;
    leap=year/4; //we get the leap years
    remain=diff-leap; //we substract the leap years from the deffirence
    total=((remain*365)+(leap*366)); //we calculate the total days
    day=total%7;

   switch (day){

   case 0: cout <<"the day is monday"<<endl;
   break;
    case 1: cout <<"the day is tuesday"<<endl;
   break;
    case 2: cout <<"the day is wednesday"<<endl;
   break;
    case 3: cout <<"the day is thursday"<<endl;
   break;
    case 4: cout <<"the day is friday"<<endl;
   break;
    case 5: cout <<"the day is saturday"<<endl;
   break;
    case 6: cout <<"the day is sunday"<<endl;
   break;



   }

   }
   if (choice==4){
    HANDLE h=GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(h,FOREGROUND_RED| FOREGROUND_INTENSITY);

    for (int i=1;i<=16;i++){
        if (i%2==0){
            SetConsoleTextAttribute(h,FOREGROUND_BLUE| FOREGROUND_INTENSITY);
            }
        else {
            SetConsoleTextAttribute(h,FOREGROUND_RED| FOREGROUND_INTENSITY);
        }
        cout<<i;
    }
    }
  if (choice==5){
    int num,base=1,pow,res=1;
    cout<<"enter your base "<<endl;
    cin>>base;
     cout<<"enter your power "<<endl;
    cin>>pow;

    for (int i=1 ;i<=pow;i++){
        res=res*base;
    }
    cout <<"the powe exponent for your number is= "<<res<<endl;
  }

if (choice==6){
    int num2,temp,sum;
    cout << "enter the  the number" << endl;
    cin>>num2;
    temp=num2;
    while (num2>0){
        int c,m;
        c=num2%10;
        m=c*c*c;
        sum+=m;
        num2=num2/10;

}
   num2=temp;
    if (num2==sum){
         cout << " the number is armstrong" << endl;
    }
    else {
         cout << " the number is armstrong" << endl;
    }
}

if (choice==7){
    int n,j;
    cout<<"enter your number to check if it's prime or not "<<endl;
    cin>>n;
    for (int i=2;i<=n;i++){

        if (n%i==0)
          j=1;
          break;
    }
    if (j==1){
         cout << " the number is not prime" << endl;
    }
    else {
         cout << " the number is  prime " << endl;
    }


}
if (choice ==8){
    int a,b,c;
    a=0;
    b=1;
    cout<<a<<" "<<b<<" ";
    int i=1;
    float gr;
    while (i<=10){
    c=a+b;
    cout<<c<< "";
    gr=(float)(a+b)/b;
    cout<<gr<< " ";
    a=b;
    b=c;
    i++;
    }
}
if (choice==9){

    int n=1;
    float sum=0.0,fact;
    int limit;
    cout<<"enter the limit"<<endl;
    cin>>limit;
    while (n<=limit){
        fact=1;
        for (int i=1 ;i<=n;i++){
            fact=fact*i;
        }
        sum=sum+(n/fact);
        n++;
    }
    cout <<"the sum of the seious is ="<<sum<<endl;
}
if (choice==10){
    int limit;
    cout<<"enter the limit"<<endl;
    cin>>limit;
    int sum=0;
    for (int i=1;i<=limit;i++){
        sum=sum+(i/i);
    }
    cout <<"the sum of the seious is ="<<sum<<endl;

}
if (choice==11){
    double limit;
    cout<<"enter the limit"<<endl;
    cin>>limit;
     double sum=0;
    for (double i=1;i<limit;i++){
       sum+=1/i;

    }
     cout <<"the sum of the seious is ="<<sum<<endl;

}
if (choice==12){
    int n=0;
    cout<<"enter the number "<<endl;
    cin>>n;
    for (int i=2;i<=n;i++){

        if (n%i==0){
            cout<<"the factors of the number is="<<i<<endl;
        }
    }
}

    return 0;
}
