#ifndef _ARRAY_LIB_H_
#define _ARRAY_LIB_H_

#include <stdio.h>
/*******************************************************************************

 * Definitions


 ******************************************************************************/
typedef struct Array {
    int arr[100];
    int size;
} Array;

/*******************************************************************************

 * Prototypes

 ******************************************************************************/




/*******************************************************************************

 * API

 ******************************************************************************/
/*!

 * @brief <Create an empty array>

 *

 * @param ptr <Pointer to pointer(array)>

 * @param size <Size of array is assigned 0>  

 * 

 * @return <void>.

 */
void Array_CreateEmptyArray(int **, int *);
/*!

 * @brief <Add a element to the end of array>

 *

 * @param ptr <Pointer to pointer(array)>

 * @param data <Data to add to array>

 * @param size <Size of array>  

 * 

 * @return <void>.

 */
void Array_AddToEnd(int **, int, int *);
/*!

 * @brief <Sort array by descending order>

 *

 * @param ptr <Pointer(array)>

 * @param size <Size of array>  

 * 

 * @return <void>.

 */
void Array_SortDescending(int *, int);
/*!

 * @brief <Sort array by assending order>

 *

 * @param ptr <Pointer(array)>

 * @param size <Size of array>  

 * 

 * @return <void>.

 */
void Array_SortAssending(int *, int);
/*!

 * @brief <Delete a element at the k position of array>

 *

 * @param ptr <Pointer to pointer(array)>

 * @param size <Size of array>

 * @param k <Delete position>    

 * 

 * @return <void>.

 */
void Array_DeleteAtK(int **, int *, int);
/*!

 * @brief <Find a element is exist in array>

 *

 * @param ptr <pointer to pointer(array)>

 * @param size <size of array is assigned 0>  

 * 

 * @return <If element exist in array return 1> <Else return 0>.

 */
int Array_FindElement(int *, int, int);

#endif /* _ARRAY_LIB_H_ */