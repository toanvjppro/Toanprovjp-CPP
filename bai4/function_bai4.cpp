#include "bai4.h"

void input_n(std::string label, int &n)
{
    std::cout << label;
    std::cin >> n;
}
void sap_xep_array(int *array, int n)
{
    for (int i = (n-1) ; i > 0 ; i--)
    {
        for (int j = 0 ; j < i ; j++)
        {
            if (array[j] > array[j+1]){
                int bubble = array[j];
                array[j] = array[j+1];
                array[j+1] = bubble;
            }
        }
    }
}
void input_array(std::string label_in_array, int *array, int n)
{
    std::cout << label_in_array;
    for (int i = 0 ; i < n ; i++)
    {
        std::cin >> array[i];
    }
}
void output_array(std::string label_out_array, const int *array, int n)
{
    std::cout << label_out_array;
    for (int i = 0 ; i < n ; i++)
    {
        std::cout << array[i] << " ";
    }
}