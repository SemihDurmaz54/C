#include<stdio.h>
#include<stdlib.h>
main() {
       int n,x,*dizi;
       int ib,ic,is,i;
       
       printf("Dizinin boyutunu giriniz:");
       scanf("%d",&n);
       
       dizi=(int *)malloc(n*sizeof(int));
       
       printf("Diziyi giriniz:\n");
       for(i=0;i<n;i++) scanf("%d",&*(dizi+i));  
       
       printf("Aranilacak elemani giriniz:\n");  
       scanf("%d",&x);     
       
       ib=0;
       is=n;
       ic=(ib+is)/2;
       
       while(ib<is && *(dizi+ic)!=x){
            if(x>*(dizi+ic)) ib=ic+1;
                    else is=ic-1;
            ic=(ib+is)/2;
            }
        
        if(*(dizi+ic)==x) printf("Aranilan eleman %d. gozdedir.",ic+1);
        else printf("Aranilan eleman listede yok.");
        getch();
        }     
