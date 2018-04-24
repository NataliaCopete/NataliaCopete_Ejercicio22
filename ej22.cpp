#include <iostream>
#include<math.h>


using std::cout;
using std::endl;


int main(){

double D=1.0; 
double dx=0.05;
double dt=0.001;
double t=0.0;
double x=0.0;
double *u;
double *u1;
double *u2;
double xmin=0.0;
double xmax=2.0;
int N=(xmax-xmin)/dx;


u=new double[N];
u1=new double[N];
u2=new double[N];

for(int i=0;i<N;i++){
     
     u1[i]=exp(-0.5 * (i*dx-1)*(i*dx-1)/(0.1*0.1));
     u2[i]=exp(-0.5 * (i*dx-1)*(i*dx-1)/(0.1*0.1));
    
 }

 for(int i=1;i<N-2;i++){
     
    u[i]=1;
    
 }

 u[0]=0;
 u[N-1]=0;



 while(u[N/2]>0.5){

for(int i=1;i<N-1;i++){
 
  u[i]= (D*dt/dx*dx)*(u1[i+1]+u1[i-1]-2*u1[i])+u1[i];
  
}
for (int i=1;i<N-1;i++)
{
u1[i]=u[i];
}

}

for(int i=0;i<N;i++)
{
cout<<i*dx<<" "<<u[i]<<" "<<u2[i]<<endl;
}


return 0;
}
