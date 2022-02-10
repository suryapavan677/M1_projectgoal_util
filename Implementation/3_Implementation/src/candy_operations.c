/**
 * @file candy_operations.c
 * @author 255914 Souhardya Sengupta (senguptasouhardya@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2021-04-09
 * 
 * @copyright Copyright (c) 2021
 * 
 */
/**
 * @brief 
 * Used for Sorting the array
 * @param arr_name 
 * @param count 
 * @param size 
 * @param new_size 
 */
#include <candy_operations.h>
void sort_array(int*arr_name,int *count,int size,int*new_size){
  if (size < 2){
    (*new_size)=size;
    return;
  }
  int m = (size+1)/2,iterator_first;
  int *left,*right,*count_left,*count_right;
  left=(int*)malloc(m*sizeof(int));
  right=(int*)malloc((size-m)*sizeof(int));
  count_left=(int*)malloc(m*sizeof(int));
  count_right=(int*)malloc((size-m)*sizeof(int));
  for(iterator_first=0;iterator_first<m;iterator_first++){
    left[iterator_first]=arr_name[iterator_first];
    count_left[iterator_first]=count[iterator_first];
  }
  for(iterator_first=0;iterator_first<size-m;iterator_first++){
    right[iterator_first]=arr_name[iterator_first+m];
    count_right[iterator_first]=count[iterator_first+m];
  }
  int new_l_size=0,new_r_size=0;
  sort_array(left,count_left,m,&new_l_size);
  sort_array(right,count_right,size-m,&new_r_size);
  merge_array(arr_name,left,right,count,count_left,count_right,new_l_size,new_r_size,new_size);
  free(left);
  free(right);
  free(count_left);
  free(count_right);
  return;
}
/**
 * @brief 
 * Used for Merging the array
 * @param arr_name 
 * @param left 
 * @param right 
 * @param count 
 * @param count_left 
 * @param count_right 
 * @param left_size 
 * @param right_size 
 * @param new_size 
 */
void merge_array(int*arr_name,int*left,int*right,int *count,int*count_left,int*count_right,int left_size, int right_size,int*new_size){
  int iterator_first = 0, iterator_second = 0,index=0;
  while (iterator_first < left_size|| iterator_second < right_size) {
    if (iterator_first == left_size) {
      count[index] = count_right[iterator_second];
      arr_name[index++] = right[iterator_second];
      iterator_second++;
    } else if (iterator_second == right_size) {
      count[index] = count_left[iterator_first];
      arr_name[index++] = left[iterator_first];
      iterator_first++;
    } else if (left[iterator_first] <= right[iterator_second]) {
      count[index] = count_left[iterator_first];
      arr_name[index++] = left[iterator_first];
      iterator_first++;
    } else {
      count[index] = count_right[iterator_second];
      arr_name[index++] = right[iterator_second];
      iterator_second++;
    }
    if(index>1&&arr_name[index-2]==arr_name[index-1]){
      index--;
      count[index-1]+=count[index];
    }
  }
  (*new_size)=index;
  return;
}
/**
 * @brief Get the position object
 * Used for Getting the Position in array
 * @param arr_name 
 * @param num 
 * @param size 
 * @return int 
 */
int get_position(int*arr_name,int num,int size){
  if(size==0)
    return 0;
  if(num>median_of_array(arr_name,size))
    return get_position(&arr_name[(size+1)>>1],num,size>>1)+((size+1)>>1);
  else
    return get_position(arr_name,num,(size-1)>>1);
}
/**
 * @brief 
 * Used for finding the Median in the array
 * @param arr_name 
 * @param size 
 * @return int 
 */
int median_of_array(int*arr_name,int size){
  return arr_name[(size-1)>>1];
}
