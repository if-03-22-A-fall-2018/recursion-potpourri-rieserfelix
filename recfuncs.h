#ifndef ___RECURSIVE_POTPOURRI
#define ___RECURSIVE_POTPOURRI

struct CalculationResults
 {
   int* num_factorials;
  int no_of_nums;
  int* binary_sums;
  int* sums;
  int no_of_sums;

};

int calc_array_size(int n);
int convert_to_binary(int n);
int* create_array(int size);
int calc_factorial(int n);
void calc_sums(int* nums,int size, int* out_arr, int* out_arr_bin);
CalculationResults perform_calculations(int* nums, int n);
int thx(int* nums,int size, int* out_arr, int* out_arr_bin, int i, int index, int sum);

#endif
