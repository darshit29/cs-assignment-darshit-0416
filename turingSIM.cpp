#include<iostream>
using namespace std;
void add()
{  int n1,n2,tm[20]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},count,i,buff,counter;
   cout<<"\nEnter number 1:";
   cin>>n1;
   cout<<"\nEnter number 2:";
   cin>>n2;
   cout<<"\nrepresentation of entered numbers on a turing machine input tape:\n";
   for(i=0;i<n1;i++)
    {
         tm[i]=1;
         counter++;
    }
   buff=n1+1;
   counter=n1+1+n2;
   for(i=buff;i<counter;i++)
   { 
        tm[i]=1;
   }
   count=n1+n2+1;
   for(int j=0;j<=count;j++)
   cout<<tm[j]<<'\t';
   cout<<"\nThe read write head starts from leftmost cell";
   for(int j=0;j<=count;)
   { while(tm[j]==1)
      {cout<<"\ndel(q0,1)=(q0,1,R)";
        ++j;
      }
     if(tm[j]==0)
      {cout<<"\ndel(q0,0)=(q1,1,R)";
        tm[j]=1;
        ++j;
        break;
      }
   }
   cout<<"\nCurrent turing machine tape:\n";
   for(int j=0;j<=count;j++)
   cout<<tm[j]<<'\t';

   for(int k=buff;k<counter;)
   {  while(tm[k]==1)
      {cout<<"\ndel(q1,1)=(q1,1,R)";
        ++k;
      }
      if(tm[k]==0)
      {cout<<"\ndel(q1,0)=(q2,0,L)";
        ++k;
        break;
      }
   }   
   for(int l=counter;i>0;--l)
   {   if(tm[l]==1)
      {cout<<"\ndel(q2,1)=(qf,0,R)";
        tm[l]=0;
       cout<<"\nYou Have Reached The Final State";
        break; 
      }
   }

   cout<<"\nFinal turing machine tape after addition:\n";
   for(int j=0;j<=count;j++)
   cout<<tm[j]<<'\t';
}

void onescomp()
{ 
  int tm[10]={'x','x','x','x','x','x','x','x','x','x'},binlen;
  cout<<"\nEnter the length of binary number:";
  cin>>binlen;
  cout<<"\nEnter the binary number to calculate 1's complement(enter digits one by one)\n";
  for(int i=0;i<binlen;++i)
  cin>>tm[i];
  for(int i=0;i<=binlen;)
  {
    if(tm[i]==1)
    { cout<<"\ndel(q0,1)=(q0,0,R)";
       tm[i]=0;
     ++i;
    }

    if(tm[i]==0)
    { cout<<"\ndel(q0,0)==(q0,1,R)";
      tm[i]=1;
      ++i;
    }

    if(tm[i]=='x')
    {
      cout<<"\ndel(q0,x)=(qf,x,L)";
       break;
    }
  }
  cout<<"\nturing machine tape after 1's complement conversion:\n";
  for(int i=0;i<binlen;++i)
  cout<<tm[i]<<'\t';
}

void towscomp()
{  int tm[10]={'x','x','x','x','x','x','x','x','x','x'},binlen,buff;
  cout<<"\nEnter the length of binary number:";
  cin>>binlen;
  cout<<"\nEnter the binary number to calculate 2's complement(enter digits one by one)\n";
  for(int i=0;i<binlen;++i)
  cin>>tm[i];

  for(int i=binlen-1;i>=0;)
  {
     if(tm[i]==0)
     {
       cout<<"\ndel(q0,0)=(q0,0,L)";
       --i;
     }

     if(tm[i]==1)
     { buff=i;
       cout<<"\ndel(q0,1)=(q1,1,L)";
       break;
     }
  }
 
   for(int i=buff-1;i>=0;)
   {  if(tm[i]==1)
    { cout<<"\ndel(q1,1)=(q1,0,L)";
       tm[i]=0;
     --i;
    }

    if(tm[i]==0)
    { cout<<"\ndel(q1,0)==(q1,1,L)";
      tm[i]=1;
      --i;
    }
    
    if(tm[i]=='x')
    {
      cout<<"\ndel(q1,x)=(qf,x,R)";
       break;
    }
   } 
cout<<"\nturing machine tape after 2's complement conversion:\n";
  for(int i=0;i<binlen;++i)
  cout<<tm[i]<<'\t';
}

void revstr()
{ char tm[10]={'x','x','x','x','x','x','x','x','x','x'};
  int strlen,c;
  cout<<"\nEnter the length of the string:";
  cin>>strlen;
  cout<<"\nEnter the string(a,b)to print its reverse(enter letters one by one)\n";
  for(int i=0;i<strlen;++i)
  cin>>tm[i];
  cout<<"\nrepresentation of string on the input tape of turing machine:\n";
  for(int i=0;i<10;++i)
  cout<<tm[i]<<'\t';
  c=0;
  for(int i=0;i<=strlen;++i)
  {  if(tm[i]=='a')
     {
       cout<<"\ndel(q0,a)=(q0,a,R)";
     }
     if(tm[i]=='b')
     {
       cout<<"\ndel(q0,b)=(q0,b,R)";
     }
     if(tm[i]=='x')
     {
       cout<<"\ndel(q0,x)=(q1,x,L)";
       break;
     }

  }

  for(int i=strlen-1;i>=0;)
  {  
    if(tm[i]=='b')
    { cout<<"\ndel(q1,b)=(q3,x,R)";
      tm[i]='x';
      cout<<"\ndel(q3,x)=(q4,b,L)";
      tm[strlen+c]='b';
      --i;
      ++c;
      cout<<"\ndel(q4,x)=(q4,x,L)";
      cout<<"\ndel(q4,b)=(q4,b,L)";
    }

    if(tm[i]=='a')
    { cout<<"\ndel(q1,a)=(q2,x,R)";
       tm[i]='x';
       cout<<"\ndel(q2,x)=(q4,a,L)";
      tm[strlen+c]='a';
      --i;
      ++c;
      cout<<"\ndel(q4,a)=(q4,a,L)";
    }
  }
  cout<<"\nturing machine tape after reversing the string:\n";
  for(int i=0;i<10;++i)
  cout<<tm[i]<<'\t';
}

/*void subt()
{ int n1,n2,tm[20]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},count,i,buff,counter,c=0;
   cout<<"\nEnter number 1:";
   cin>>n1;
   cout<<"\nEnter number 2:";
   cin>>n2;
   cout<<"\nrepresentation of entered numbers on a turing machine input tape:\n";
   for(i=0;i<n1;i++)
    {
         tm[i]=1;
         counter++;
    }
   buff=n1+1;
   counter=n1+1+n2;
   for(i=buff;i<counter;i++)
   { 
        tm[i]=1;
   }
   for(int j=0;j<=counter;j++)
   cout<<tm[j]<<'\t';

   for(i=0;i<counter;++i)
   {
      if(tm[i]==1)
      { tm[i]=0;
        cout<<"\ndel(q0,1)=(q1,0,R)";
      }
      for(int j=1;j<counter;++j)
      {   if(tm[j]==1)
        {
        cout<<"\ndel(q1,1)=(q1,1,R)";
        }  
          if(tm[j]==0)
            { break; }
      }

      if(tm[buff]==1)
      {
        tm[buff]=0;
      }

      if(tm[buff+c]==0)
      { tm[n1]=1;
        break;
      }
      ++c;
   }

   cout<<"\nFinal turing machine tape after subtraction:\n";
   for(int j=0;j<=counter;j++)
   cout<<tm[j]<<'\t'; 
}*/

void chkstr()
{ char tm[10]={'x','x','x','x','x','x','x','x','x','x'},buff,b;
  int strlen,c;
  cout<<"\nEnter the length of the string:";
  cin>>strlen;
  cout<<"\nEnter the string over sigma (a-z) to check if turing machine accepts it(enter letters one by one)\n";
  for(int i=0;i<strlen;++i)
  cin>>tm[i];
  cout<<"\nrepresentation of string on the input tape of turing machine:\n";
  for(int i=0;i<10;++i)
  cout<<tm[i]<<'\t';
   for(int i=0;i<10;++i)
   {   buff=tm[i];
       b=buff-32;
       if(tm[i]=='x')
      { cout<<"\ndel(q0,x)=(qf,x,S)";
        cout<<"\nTuring machine has reached final/accepting state and the string is accepted.";
        break;
      }
      if(buff>=97 && buff<=122)
      { cout<<"\ndel(q0,"<<buff<<")=(q0,"<<b<<",R)";
        tm[i]=b;
      }
    }
    cout<<"\ntape of turing machine after checking for string:\n";
    for(int i=0;i<10;++i)
    cout<<tm[i]<<'\t';
}

int main()
{   int choice;
    char choice2;
    do
    {  cout<<"BASIC OPERATIONS OF A TURING MACHINE:\n";
       cout<<"1.add two numbers(unary format).\n";
       cout<<"2.find 1's compliment.\n";
       cout<<"3.find 2's compilment.\n";
       cout<<"4.reverse a string\n";
       cout<<"5.check is a string will be accepted and if TM will halt\n";
       cout<<"Enter your choice:";
       cin>>choice;
       switch(choice)
       {  case 1: add();
                  break;
          case 2: onescomp();
                  break;
          case 3: towscomp();
                  break;
          case 4: revstr();
                  break;
          case 5: chkstr();
                  break;
       }
       cout<<"\nDo you want to continue?:";
       cin>>choice2;

    }while(choice2 =='y' || choice2 =='Y');
    return 0;
}