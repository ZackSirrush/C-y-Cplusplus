#include <stdio.h>
#define TAM 5

int main(){
	int aCalif[TAM];
	int aModa[TAM]={0,0,0,0,0};
	int ix,iy,icuenta,imax=0,iposicion=0;
	
	for (ix=0;ix<TAM;ix++){
		printf("Ingrese calificacion: \n");
		scanf("%d",&aCalif[ix]);
	}
	
	ix=0;
	while(ix<TAM){
		iy=0;
		icuenta=1;
		while(iy<TAM){
			if(aCalif[ix]==aCalif[iy]){
				aModa[ix]=aModa[ix]+icuenta;
			}
			iy++;
		}
		ix++;
	}
	for (ix=0;ix<TAM;ix++){
		if(aModa[ix]>imax){
			imax=aModa[ix];
			iposicion=ix;
		}
	}
	printf("El elemento que se repite %d veces es %d",aModa[iposicion],aCalif[iposicion]);
}
