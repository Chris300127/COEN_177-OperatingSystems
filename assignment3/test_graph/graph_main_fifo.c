  
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  
  int length = atoi(argv[1]); 
  int table[length];
  int page, found,i,j;
  int fifo_loc=0;

  int graphval = 0;

  for(i=0; i<10000;i++){
    scanf("%d", &page);
    /* search loop*/
    found=0;
    //printf("page = %d\n", page);
    
    for(j=0; j<length; j++){
      if (table[j]==page){
	//printf("search\n");
	found = 1;
	break;
      }
    }
    
    /*end search*/
    
    if(found==0){
      table[fifo_loc]=page;
      fifo_loc= (fifo_loc+1)%length;
      //printf("%d\n", page);

      graphval++;
    }
      
       
  }

    printf("Graph y value is: %d\n ", graphval);
}

