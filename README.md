#include <stdio.h>
#include <stdlib.h>

int main(){
	int X,N,A[N],ib,is,ic;
	printf("Dizi boyutu : ");scanf("%d",&N);
	printf("Aranacak sayiyi giriniz : ");scanf("%d",&X);
	
	for(int i = 0; i < N; i++){
		printf("%d. eleman : ",i+1);
		scanf("%d",&A[i]);
	}
	
	ib = 0;is = N-1;ic = (ib+is)/2;
	while(ib<=is && A[ic] != X){
		if(X > A[ic])
			ib = ic+1;
		else
			is = ic - 1;
		ic = (ib+is)/2;
	}	
	
	if(ib > is)
		printf("%d sayisi dizide yok",X);
	else
		printf("%d. gözde bulundu",ic);

	return 0;
}
