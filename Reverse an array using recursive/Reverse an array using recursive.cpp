#include<stdio.h>
#include<stdlib.h>

    void reverse(int array[100], int first, int last){
         
         int tmp;
         if(first>=last){
		 							//do nothing
         }					

         else{
         tmp=array[first];
         array[first]=array[last];
         array[last]=tmp;
         reverse(array, first+1, last-1);     //call the function again
         }
         
    }

int main(){
    
    int arraySize,i,tmp,first,last; 	//some variables we are gonna need
    int array[100];		//allocating some space for the array
    
    printf("Enter array size: ");
    scanf("%d",&arraySize);
    
    printf("\nEnter the array elements one by one:\n");
    for(i=0; i<arraySize; i++){
             scanf("%d",&array[i]);
    }
    
    first= 0;                        
    last= arraySize-1;                      
    reverse(array, first, last);		//function call
    
    printf("\nReversed array:");			 
    for(i=0; i<arraySize; i++){			//print the reversed array
        printf("%d ",array[i]);
    }
    
    return 0;
    }
  
