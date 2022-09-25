#include<stdio.h>
int main(){
	double x[6]={1.0,2.0,3.0,4.0,2.0,1.0};
	double a[12][12];
	for(int i=0;i<12;i++){
	   for(int j=0;j<12;j++){
	    a[i][j]=0;
	   }
	}
	for(int i=0;i<12;i++){
		for(int j=0;j<12;j++){
			if(j==i){
				for(int k=0;k<6;k++){
					if(j+k<12){
					a[i][j+k]=x[k];
					}
				}
				
			}
		}
	}
       	for(int i=0;i<12;i++){
           for(int j=0;j<12;j++){
            printf("%lf ",a[i][j]);
           }
	   printf("\n");
        }

}
