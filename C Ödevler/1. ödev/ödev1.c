#include <stdio.h>
#include <math.h>



int main() {
	
	//A1x+B1y+C1=0 ve A2x+B2y+C2=0 denklemleri için;
	double A1,B1,C1,A2,B2,C2;
	printf("A1,B1,C1,A2,B2,C2 degerlerini giriniz: \n");
	scanf("%lf %lf %lf %lf %lf %lf", &A1, &B1, &C1, &A2, &B2, &C2);
	
	
	if((A1/A2!=B1/B2)){
	printf("iki cizgi aci ile kesisiyor. \n");
	double pi = 3.1416;
	double egim = (A1*B2-A2*B1)/(A1*A2+B1*B2);
	double aci = (atan(egim)*180)/pi;
	double uzaklik = (fabs(C1-C2))/(sqrt(A1*A1+B1*B1));
	double x0 = (B1*C2-B2*C1)/(A1*B2-A2*B1);  
	double y0 = (C1*A2-C2*A1)/(A1*B2-A2*B1);
	
	printf("aci = %lf \n", aci);
	printf("x0 = %lf \n", x0);
	printf("y0 = %lf \n", y0);
	
	
	}
	else if(((A1*A2)+(B1*B2)==0)){
		printf("iki cizgi birbirine diktir. \n");
		double pi = 3.1416;
		double egim = (A1*B2-A2*B1)/(A1*A2+B1*B2);
		double aci = (atan(egim)*180)/pi;
		double x0 = (B1*C2-B2*C1)/(A1*B2-A2*B1);  
		double y0 = (C1*A2-C2*A1)/(A1*B2-A2*B1);
	
		printf("x0 = %lf \n", x0);
		printf("y0 = %lf \n", y0);
		printf("aci = %lf \n", aci);
		

	} 
	else if((A1/A2==B1/B2) && (A1/A2!=C1/C2)){
		printf("iki cizgi paraleldir. \n");
		double uzaklik = (fabs(C1-C2))/(sqrt(A1*A1+B1*B1));
		printf("%lf \n", uzaklik);
	}
	else if((A1/A2==B1/B2) && (A1/A2==C1/C2)){
		printf("iki cizgi cakisiyor. \n");
	}
}
