#include <stdio.h>

int main() {
  FILE* fp = fopen("xnyn.dat","w");

  double xn[6] = {1.0, 2.0, 3.0, 4.0, 2.0, 1.0};
  double yn[20];

  yn[0] = xn[0];
  yn[1] = -0.5*yn[0]+xn[1];

  for(int n = 2; n < 19; n++) {
    if (n< 6) {
		  yn[n] = -0.5*yn[n-1]+xn[n]+xn[n-2];
    } else if (n > 5 && n < 8){
		  yn[n] = -0.5*yn[n - 1] + xn[n - 2];
    } else {
		yn[n] = -0.5*yn[n - 1];
    }
  }

  for(int i = 0; i < 20; i++){
    fprintf(fp,"%lf\n", yn[i]);
  }
  fclose(fp);
}
