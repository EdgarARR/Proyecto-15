#include<stdio.h>
int main(){
	
int ma[20], me[20], f[20], may, men, p, a, b, x, y;

	men=0;
	may=0;

printf("Introduzca el numero de personas: ");
scanf("%d",&p);
	
	if(p<=20){
	for(a=1;a<=p;a++){
		printf("Edad de la persona %d: ", a);
		scanf("%d", &f[a]);
	}

	for(b=0;b<p;b++){

	    if(f[b]<25){
	        me[men]=f[b];;
	        men++;
	    }
	    else{
	        ma[may]=f[b];
	        may++;
	    }
	}
	
	printf("\n\nFila de personas entre 18 y 24: \n" );
	for(x=0;x<men;x++){
	    printf("%d  ",me[x]);
	}
	
	printf("\n\nFila de personas entre los 25 y 40: \n");
	for(y=0;y<may;y++){
	    printf("%d  ",ma[y]);
	}
	
}
	else{
	    printf("Exceso de personas");
	}
	return 0;
}

