/**
 * @file project_main.c
 * @author 255914 Souhardya Sengupta (senguptasouhardya@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2021-04-10
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include <candy_operations.h>
int main(){
    /**
     * @brief Static Local Variables
     * 
     */
  int num_of_stacks;
  int evensize,oddsize;
  int sort_evensize,sort_oddsize;
  int iterator_first,iterator_second;
  int temp_var;
  /**
   * @brief Dynamic Variables
   * 
   */
  int *dyn_ptr,*ddyn_ptr;
  int *dseven,*dsodd;
  int *sort_even,*sort_odd;
  int *count_even,*count_odd;
  int **even_table,**odd_table;
  long long ans=0;
  
  
  scanf("%d",&num_of_stacks);
  /**
   * @brief Dynamic Memory Allocation
   * 
   */
  dyn_ptr=(int*)malloc(num_of_stacks*sizeof(int));
  
  ddyn_ptr=(int*)malloc((num_of_stacks-1)*sizeof(int));
  
  evensize=oddsize=(num_of_stacks-1)/2;
  
  evensize+=(num_of_stacks-1)%2;
  /**
   * @brief Dynamic Memory Allocation
   * 
   */  
  dseven=(int*)malloc(evensize*sizeof(int));
  
  dsodd=(int*)malloc(oddsize*sizeof(int));
  
  sort_even=(int*)malloc(evensize*sizeof(int));
  
  sort_odd=(int*)malloc(oddsize*sizeof(int));
  
  count_even=(int*)malloc(evensize*sizeof(int));
  
  count_odd=(int*)malloc(oddsize*sizeof(int));
  /**
   * @brief Starting the Main Operations
   * 
   */
  for(iterator_first=0;iterator_first<num_of_stacks;iterator_first++)
      scanf("%d",dyn_ptr+iterator_first);
  /**
   * @brief 
   * 
   */
  for(iterator_first=0;iterator_first<num_of_stacks-1;iterator_first++){
    ddyn_ptr[iterator_first]=dyn_ptr[iterator_first+1]-dyn_ptr[iterator_first];
    
    if(!iterator_first)
      dseven[iterator_first/2]=ddyn_ptr[iterator_first];
      
    else if(iterator_first==1)
      dsodd[iterator_first/2]=ddyn_ptr[iterator_first];
      
    else if(iterator_first%2)
      dsodd[iterator_first/2]=dsodd[iterator_first/2-1]^ddyn_ptr[iterator_first];
      
    else
      dseven[iterator_first/2]=dseven[iterator_first/2-1]^ddyn_ptr[iterator_first];
  }
  for(iterator_first=0;iterator_first<evensize;iterator_first++){
    sort_even[iterator_first]=dseven[iterator_first];
    count_even[iterator_first]=1;
  }
  
  for(iterator_first=0;iterator_first<oddsize;iterator_first++){
    sort_odd[iterator_first]=dsodd[iterator_first];
    count_odd[iterator_first]=1;
  }
  /**
   * @brief Construct a new sort array object
   * 
   */
  sort_array(sort_even,count_even,evensize,&sort_evensize);
  
  sort_array(sort_odd,count_odd,oddsize,&sort_oddsize);
  
  even_table=(int**)malloc(sort_evensize*sizeof(int*));
  
  for(iterator_first=0;iterator_first<sort_evensize;iterator_first++){
    even_table[iterator_first]=(int*)malloc((count_even[iterator_first]+1)*sizeof(int));
    even_table[iterator_first][0]=0;
  }
  
  odd_table=(int**)malloc(sort_oddsize*sizeof(int*));
  
  for(iterator_first=0;iterator_first<sort_oddsize;iterator_first++){
    odd_table[iterator_first]=(int*)malloc((count_odd[iterator_first]+1)*sizeof(int));
    
    odd_table[iterator_first][0]=0;
  }
  
  for(iterator_first=0;iterator_first<evensize;iterator_first++){
    iterator_second=get_position(sort_even,dseven[iterator_first],sort_evensize);
    
    even_table[iterator_second][++even_table[iterator_second][0]]=iterator_first;
  }
  for(iterator_first=0;iterator_first<oddsize;iterator_first++){
    iterator_second=get_position(sort_odd,dsodd[iterator_first],sort_oddsize);
    
    odd_table[iterator_second][++odd_table[iterator_second][0]]=iterator_first;
  }
  for(iterator_first=0;iterator_first<num_of_stacks-1;iterator_first++)
  
    if(iterator_first%2){
      temp_var=dyn_ptr[iterator_first]^dseven[(iterator_first-1)/2];
      iterator_second=get_position(sort_even,temp_var,sort_evensize);
      if(iterator_second>=0 && iterator_second<sort_evensize && sort_even[iterator_second]==temp_var){
        temp_var=get_position(even_table[iterator_second]+1,(iterator_first+1)/2,even_table[iterator_second][0]);
        ans+=even_table[iterator_second][0]-temp_var;
      }
      temp_var=0;
      if(iterator_first!=1)
        temp_var^=dsodd[(iterator_first-2)/2];
      iterator_second=get_position(sort_odd,temp_var,sort_oddsize);
      if(iterator_second>=0 && iterator_second<sort_oddsize && sort_odd[iterator_second]==temp_var){
        temp_var=get_position(odd_table[iterator_second]+1,iterator_first/2,odd_table[iterator_second][0]);
        ans+=odd_table[iterator_second][0]-temp_var;
      }
    }
    else{
      temp_var=dyn_ptr[iterator_first];
      if(iterator_first)
        temp_var^=dsodd[(iterator_first-1)/2];
      iterator_second=get_position(sort_odd,temp_var,sort_oddsize);
      if(iterator_second>=0 && iterator_second<sort_oddsize && sort_odd[iterator_second]==temp_var){
        temp_var=get_position(odd_table[iterator_second]+1,iterator_first/2,odd_table[iterator_second][0]);
        ans+=odd_table[iterator_second][0]-temp_var;
      }
      temp_var=0;
      if(iterator_first)
        temp_var^=dseven[(iterator_first-1)/2];
      iterator_second=get_position(sort_even,temp_var,sort_evensize);
      if(iterator_second>=0 && iterator_second<sort_evensize && sort_even[iterator_second]==temp_var){
        temp_var=get_position(even_table[iterator_second]+1,iterator_first/2,even_table[iterator_second][0]);
        ans+=even_table[iterator_second][0]-temp_var;
      }
    }
  ans=((long long)num_of_stacks)*(num_of_stacks-1)/2-ans;
  printf("%lld",ans);
  /**
   * @brief Construct a new free object
   * Releasing the Heap Memory
   */
  free(dyn_ptr);free(ddyn_ptr);
  free(dseven);free(dsodd);
  free(sort_even),free(sort_odd);
  free(count_even);free(count_odd);
  free(even_table);free(odd_table);
  return 0;
}
