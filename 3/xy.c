#include<stdio.h>
int main(){
    FILE*fp=fopen("xy.dat","w");
   double x[6]={1.0,2.0,3.0,4.0,2.0,1.0};
   double y[20];
   y[0]=x[0];
   y[1]=-0.5*y[0]+x[1]; 
   for(int n=2;n<19;n++){
    if (n< 6){
		y[n] = -0.5*y[n-1]+x[n]+x[n-2];
    }
	else if (n > 5 && n < 8){
		y[n] = -0.5*y[n-1]+x[n-2];
    }
	else{
		y[n] = -0.5*y[n-1];
        }
   }
   for(int i=0;i<20;i++){
    fprintf(fp,"%lf\n",y[i]);
   }
   fclose(fp);
}
