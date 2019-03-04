#include "recfuncs.h"

int calc_array_size(int n)
{
  if(n==0)
  {
    return 1;
  }

  return 2 * calc_array_size(n-1);
}

int convert_to_binary(int n)
{
  if(n==0)
  {
    return 0;
  }

  return n%2+10*convert_to_binary(n/2);
}

int* create_array(int size)
{
  int* array=new int[size];

  for (int i = 0; i < size; i++) {
    array[i]=-1;
  }

  return array;
}

int calc_factorial(int n)
{
  if(n==0)
  {
    return 1;
  }
  return n*calc_factorial(n-1);
}

void calc_sums(int* nums,int size, int* out_arr, int* out_arr_bin)
{
  thx(nums, size-1, out_arr,out_arr_bin,0,0,0);
}

int thx(int* nums,int size, int* out_arr, int* out_arr_bin, int i, int index, int sum)
{
  if(i>size)
  {
    out_arr[index]=sum;
    out_arr_bin[index]=convert_to_binary(sum);
    return ++index;
  }

  int index1=thx(nums,size,out_arr,out_arr_bin,i+1,index,sum+nums[i]);
  thx(nums,size,out_arr,out_arr_bin,i+1,index1,sum);
}

CalculationResults perform_calculations(int* nums, int n){}
