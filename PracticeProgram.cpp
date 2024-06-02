#include<iostream>
using namespace std;
int main(){
    //PROGRAM  >>>>>  Fatcorial Of A number:
  /*  int n,fact=1;
    cout<<"Enter a number:";
    cin>>n;
    for(int i=1;i<=n;i++){
        fact*=i;
    }
    cout<<"Factorial Of A Number "<<n<<" is: "<<fact;
 */
        //PROGRAM   >>>>>>>>> Sum Of First Natural Number

  /*      
        int n,sum=0;
        cout<<"Enter A Number:";
        cin>>n;
        for(int i=1;i<=n;i++){
            sum+=i;
        }
        cout<<"The Sum Of "<<n<<" is : "<<sum;
        
    */

   // PROGRAM   >>>>>>  Find Total Number Of Digits In A Number
  
  
/* 
   int num,number,count=0;
   cout<<"Enter A Number:";
   cin>>num;
   number=num;
   while(num!=0){
    num/=10;
    count++;
   }
    cout<<"Total Number Of Digits in "<<number<<" is:"<<count;
 */

        //PROGRAM    >>>>>>>>>>   Sum Of All Digits Of A Given Number


 /*   int num,number,sum=0,lastDigit=0;
    cout<<"Enter A Number:";
    cin>>num;
    number=num;
    while(num!=0){
        lastDigit=num%10;
        sum+=lastDigit;
        num/=10;
    }
    cout<<"The Sum Of All Digits Of "<<number<<" Is: "<<sum;

   */
     
     //  PROGRAM   >>>>>>>   Find Reverse Of Given Number

  /*   
     int num,number,lastDigit=0,rev=0;
     cout<<"Enter A Number:";
     cin>>num;
     number=num;
     while(num!=0){
        lastDigit=num%10;
        rev=rev*10;
        rev+=lastDigit;
        num/=10;
     }
     cout<<"The Reverse Of "<<number<<" Is: "<<rev;
  */
 
        //  PROGRAM    >>>>>>>  Check Whether Number Is Prime Or Not

  /*  
    int flag=0,number,i;
    cout<<"Enter A Number:";
    cin>>number;
    cout<<"Checking A Number Is Prime Or Not:\n\n";
    for(i=2;i<=number/2;i++){
        if(number%i==0){
            flag=1;
            break;
        }
    }
    if(number==1)
        cout<<"Neither Prime Nor Composite Number"<<endl;
    else if(flag==0)
        cout<<"Prime Number"<<endl;
    else 
        cout<<"Composite Number"<<endl;
  */ 
 
    //  PROGRAM   >>>>>>  To Check Year Is Leap Or Not
     
  /*      int year;
        cout<<"Enter Year:";
        cin>>year;
        if((year%400 == 0) || (year%4 == 0 && year%100 != 0)){
            cout<<"year "<<year<<" is Leap Year";
        }
        else{
            cout<<"Not A Leap Year";
        }
   */
  
  
        //  <<<<<<<<<<<<<<<<<<< PATTERN PRINTING  >>>>>>>>>>>>>>>>>>>>>>


        // PROGRAM  >>>>>>>  Printing Square Shaped Using Asteriks
   
   
   /*   int row;
        cout<<"Enter Number Of Row:";
        cin>>row;
        for(int i=1;i<=row;i++){
            for(int j=1;j<=row;j++){
                cout<<"*";
            }
            cout<<endl;
        }
   */
  
       // PROGRAM   >>>>>>>>>>  Printing Traingle

   /*   int row;
        cout<<"Enter Number Of Rows:";
        cin>>row;
        for(int i=1;i<=row;i++){
            for(int j=1;j<=i;j++){
                cout<<"*";
            }
            cout<<endl;
        }
   */

       // PROGRAM  >>>>>>>>>>>>>>>>>>   Printing Traingle

   /* int row;
      cout<<"Enter Row:";
      cin>>row;
      for(int i=1;i<=row;i++){
            for(int j=row;j>=i;j--){
                cout<<"*";
            }
            cout<<endl;
      }
   */
  

  //  PROGRAM  >>>>>>>>>>>  Printing X-Shaped Structure Using Asteriks 
    
   /* 
    int row;
    cout<<"Enter Row:";
    cin>>row;
    for(int i=1;i<=row;i++){
        for(int j=1;j<=row;j++){
            if(i==j || ((i+j)==row+1)){
                cout<<"*";
            }
            else
            cout<<" ";
        }
        cout<<endl;
    }
  */
     

     // PROGRAM    >>>>>>>>>>>>>>>>  Printing Traingle Using  0 and 1
    
   /* 
    int row;
    cout<<"Enter Number Of Row:";
    cin>>row;
    for(int i=1;i<=row;i++){
            for(int j=1;j<=i;j++){
                if((i+j)%2==0){
                    cout<<"1";
                }
                else 
                cout<<"0";
            }
            cout<<endl;
     }
   */
  

        // PROGRAM   >>>>>>>>>>>>>>>>  Printing Pyramid

 /* int row;
    cout<<"Enter Number Of Row:";
    cin>>row;
    for(int i=1;i<=row;i++){
        for(int j=1;j<=2*row-1;j++){
            if(j>=row+1-i  &&  j<=row-1+i){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
            cout<<endl;
    }
  */
//<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
 // PROGRAM   >>>>>>>>>>>>>>  Taking Input Into Array And Printing Array's Elements
 
 /*
   int arr[50],range;
   cout<<"Enter Range Of Array:";
   cin>>range;
   for(int i=0;i<range;i++){
    cin>>arr[i];
   }
   cout<<"Elements Of Array :"<<endl;
   for(int i=0;i<range;i++){
    cout<<arr[i]<<endl;
   }
  */
 
 // PROGRAM   >>>>>>>>>>>>>>>>>>>>  Input Details And Print Using Structure Of Students

/*
 struct student{
    int std_id;
    string std_name;
    int roll_num;
    string course_name;
    int course_id;
 };
 student std[50];
 int range;
 cout<<"Enter Range Of Students:";
 cin>>range;
 cout<<endl;
 for(int i=0;i<range;i++){
    cout<<"Enter std_id Of "<<i+1<<" Student:";
    cin>>std[i].std_id;
    cout<<"Enter std_name Of "<<i+1<<" Student:";
    cin>>std[i].std_name;
    cout<<"Enter roll_num Of "<<i+1<<" Student:";
    cin>>std[i].roll_num;
    cout<<"Enter course_name Of "<<i+1<<" Student:";
    cin>>std[i].course_name;
    cout<<"Enter course_id Of "<<i+1<<" Student:";
    cin>>std[i].course_id;
 }
 cout<<"\n\nPrinting Information Of "<<range<<" Students:\n"<<endl;
 for(int i=0;i<range;i++){
    cout<<"Student Id Of "<<i+1<<" Student:";
    cout<<std[i].std_id;
    cout<<endl;
    cout<<"Student Name Of "<<i+1<<" Student:";
    cout<<std[i].std_name;
    cout<<endl;
    cout<<"Roll Number Of "<<i+1<<" Student:";
    cout<<std[i].roll_num;
    cout<<endl;
    cout<<"Course Name Of "<<i+1<<" Student:";
    cout<<std[i].course_name;
    cout<<endl;
    cout<<"Course Id Of "<<i+1<<" Student:";
    cout<<std[i].course_id;
    cout<<endl;
 }
 */
        
        // PROGRAM  >>>>>>>>>>>>>>>>   Addition Of Two Matrices

  /*   int mat1[3][3],mat2[3][3],res[3][3];
       cout<<"Input Number Into 1st Matrix:";
       for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
             cin>>mat1[i][j];
       }
       cout<<endl;
       }
       cout<<"Input Number Into 2nd Matrix:";
       for(int i=0;i<3;i++){
                for(int j=0;j<3;j++){
                    cin>>mat2[i][j];
                }
       }
       cout<<"Printing 1st Matrix:"<<endl;
       for(int i=0;i<3;i++){
                for(int j=0;j<3;j++){
                    cout<<mat1[i][j]<<" ";
                }
                cout<<endl;
       }
       cout<<"Printing 2nd Matrix:"<<endl;
       for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                cout<<mat2[i][j]<<" ";
            }
            cout<<endl;
       }
       cout<<"Sum Of These Two Matrix Is :"<<endl;
       for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                res[i][j]=mat1[i][j]+mat2[i][j];
            }
            cout<<endl;
       }
       for(int i=0;i<3;i++){
                for(int j=0;j<3;j++){
                    cout<<res[i][j]<<" ";
                }
                cout<<endl;
        }
  
  */
        return 0; 
}