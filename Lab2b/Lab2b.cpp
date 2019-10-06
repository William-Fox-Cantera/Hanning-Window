/*
 * LabThree.cpp
 *
 * September 5 2019
 * TA NAME: Agnijit Das Gupta
 * NAMES: William Cantera
 *
 * The functions in this file are for lab three. They are not necessarily related beyond
 * being apart of lab three.
 *
 */

#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

//FUNCTION DECLARATIONS
/*
 * printStars
 * Consumes: Nothing
 * Produces: Nothing
 */
void printStars();

/*
 * generateRandomArray
 * Consumes: An integer and an alias to an integer
 * Produces: Nothing
 */
void generateRandomArray(int length, int &x);

/*
 * reverseArray
 * Consumes: An integer
 * Prodcues: Nothing
 */
void reverseArray(int length);

/*
 * sortArray
 * Conusumes: Two integers
 * Produces: Nothing
 */
void sortArray(int length, int range);

/*
 * printInt
 * Consumes: Nothing
 * Produces: A integer
 */
int *printInt();

/*
 * printArray
 * Consumes: An integer and an array of integers
 * Produces: Nothing
 */
void printArray(int arr[], int length);

/*
 * generateRandomArrayV2
 * Consumes: Three pointers to integers
 * Produces: An array of integers
 */
int *generateRandomArrayV2(int *length, int *highPoint, int *lowPoint);

/*
 * generateRandomArrayV3
 * Consumes: An integer
 * Produces: An address of an integer
 */
//Commented out on purpose as per instructions
//int *generateRandomArrayV3(int length);

/*
 * printArrayAddresses
 * Consumes: An array of integers and an integer
 * Produces: Nothing
 */
void printArrayAddresses(int arr[], int length);

/*
 * printDoubleAddressArrays
 * Consumes: An array of doubles and an integer
 * Produces: Nothing
 */
void printDoubleArrayAddresses(double arr[], int length);

/*
 * reduceDoubles
 * Consumes: An array of integers and a pointer to an integer
 * Produces: An array of integers
 */
int *reduceDoubles(int arr[], int *length);

/*
 * hanningWindow
 * Consumes: An array of integers and and three integers
 * Produces: An integer
 */
int hanningWindow(int arr[], int window);

/*
 * filterArray
 * Consumes: An array of integers and two integers
 * Produces: An array of integers
 */
int *filterArray(int arr[], int length, int window);

/*
 * printFilteredArray
 * Consumes: An array and three integers
 * Produces: Nothing
 */
void printFilteredArray(int arr[], int length, int lowPoint, int highPoint);

/*
 * generateBinaryArray
 * Consumes: Two pointers to integers
 * Produces: A 2-dimensional array
 */
int **generateBinaryArray(int *nbrOfAddresses, int *sizeOfArrays);

//MAIN FUNCTION
int main() {

	//SEEDING RANDOM NUMBERS
	srand(time(NULL));

	cout << "Problem 1: \n";
	int smallestValue = -1;
	cout << "TEST 1:\n";
	generateRandomArray(10, smallestValue);
	cout << "\nThe smallest value in the array is: " << smallestValue << "\n\n";

	int smallestValue2 = -1;
	cout << "TEST 2:\n";
	generateRandomArray(10, smallestValue2);
	cout << "\nThe smallest value in the array is: " << smallestValue2 << "\n\n";

	int smallestValue3 = -1;
	cout << "TEST 3:\n";
	generateRandomArray(10, smallestValue3);
	cout << "\nThe smallest value in the array is: " << smallestValue3 << "\n";

//**************************************************************************************************************************

	printStars();


	cout << "Problem 2: \n";
	//TEST 1
	cout << "TEST 1\n";
	reverseArray(10);
	cout << "\n\n";

	//TEST 2
	cout << "TEST 2\n";
	reverseArray(7);
	cout << "\n\n";

	//TEST 3
	cout << "TEST 3\n";
	reverseArray(12);
	cout << "\n";

//**************************************************************************************************************************

	printStars();


	cout << "Problem 3:";
	//TEST 1
	cout << "\nTEST 1";
	sortArray(10, 30);

	//TEST 2
	cout << "\n\nTEST 2";
	sortArray(5, 20);

	//TEST 3
	cout << "\n\nTEST 3";
	sortArray(15, 27);
	cout << "\n";

//**************************************************************************************************************************

	printStars();


	cout << "Problem 4: \n";
	int *intAddress = printInt();
	//Attempting to compile the line below did not work or compile because because after the printInt
	//function was finished, the variable in the printInt function left the stack, hence there was no
	//value at the intAddress pointer to be printed out resulting in a compilation error.

	//However, printing out the address of the pointer in main still works because the variable still has
	//a location in memory despite not holding a value after the printInt function.

	//cout << "\nThe value in the pointer created in main: " << *intAddress << "\n";
	cout << "\nThe address of the pointer created in main: " << &intAddress << "\n";

//**************************************************************************************************************************

	printStars();


	cout << "Problem 5: \n";
	//Problem 5b -- Making a random array of length 25 for testing problem 5
	int someArr[25];
	for(int i = 0; i < 26; i++) {
		someArr[i] = rand() % 9 + 1;
	}
	//End problem 5b
	cout << "Here is an example array being printed from the printArray function: \n";
	printArray(someArr, 25);

//**************************************************************************************************************************

	printStars();


	cout << "Problem 6: \n";
	int length = 10;
	int highPoint = 0;
	int lowPoint = 0;
	int *array = generateRandomArrayV2(&length, &highPoint, &lowPoint);
	cout << "\nArray of random length: " << length << ", and random numbers iterating between high point: " << highPoint << " and low point " << lowPoint << " integers: \n";
	printArray(array, length);
	delete [] array;

	int length23 = 10;
	int highPoint23 = 0;
	int lowPoint23 = 0;
	int *array23 = generateRandomArrayV2(&length23, &highPoint23, &lowPoint23);
	cout << "\nArray of random length: " << length23 << ", and random numbers iterating between high point: " << highPoint23 << " and low point " << lowPoint23 << " integers: \n";
	printArray(array23, length23);
	delete [] array23;

	int length24 = 10;
	int highPoint24 = 0;
	int lowPoint24 = 0;
	int *array24 = generateRandomArrayV2(&length24, &highPoint24, &lowPoint24);
	cout << "\nArray of random length: " << length24 << ", and random numbers iterating between high point: " << highPoint24 << " and low point " << lowPoint24 << " integers: \n";
	printArray(array24, length24);
	delete [] array24;

//**************************************************************************************************************************

	printStars();


	cout << "Problem 7: \n";
	cout << "This problem is not meant to work, read the reasoning in the comments in problem 7\n";
	/*
	int *test = generateRandomArrayV3(25);
	generateRandomArray(25, *test);
	*/


//**************************************************************************************************************************

	printStars();


	cout << "Problem 8: \n";
	//Example Array:
	int exampleArray[] = {1,2,3,4,5};
	cout << "Example integer array: \n";
	printArray(exampleArray, 5);
	cout << "\n";
	printArrayAddresses(exampleArray, 5);


	printStars();

//**************************************************************************************************************************

	cout << "Problem 9: \n";
	//Example array of doubles:
	double exampleDoubleArray[] = {1.333, 2.567, 3.580, 4.796, 5.123};
	cout << "Example double array: \n";
	for(int i = 0; i < 5; i++) {
		cout << exampleDoubleArray[i];
		if(i < 4) {
			cout << ", ";
		}
	}
	cout << "\n\n";
	printDoubleArrayAddresses(exampleDoubleArray, 5);

//**************************************************************************************************************************

	printStars();


	cout << "Problem 10: \n";
	//TEST 1
	//Example array for the reducing doubles:
	int doublesArray[] = {9,8,8,8,7,6,5,5,4,4,3,2,2,1};

	cout << "TEST 1:\n";
	cout << "Original array filled with adjacent doubles: \n";
	printArray(doublesArray, 14);
	cout << "\n";

	//Using the reduceDoubles function
	int someLength = 14;
	int *z = reduceDoubles(doublesArray, &someLength);
	cout << "Here is the reduced doubles array, and its new length is: " << someLength << "\n";
	printArray(z, someLength);

	//Freeing the space of the array made from problem 10
	delete [] z;


	//TEST 2
	//Example array for the reducing doubles:
	int doublesArray2[] = {2,2,5,5,6,7,8,9,9,9,4,5,0};

	cout << "\nTEST 2:";
	cout << "\nOriginal array filled with adjacent doubles: \n";
	printArray(doublesArray2, 13);
	cout << "\n";

	//Using the reduceDoubles function
	int someLength2 = 13;
	int *z2 = reduceDoubles(doublesArray2, &someLength2);
	cout << "Here is the reduced doubles array, and its new length is: " << someLength2 << "\n";
	printArray(z2, someLength2);

	//Freeing the space of the array made from problem 10
	delete [] z2;



	//TEST 3
	//Example array for the reducing doubles:
	int doublesArray3[] = {0,9,9,7,6,8,4,4,4,2,1,0,3,4,3};

	cout << "\nTEST 3:";
	cout << "\nOriginal array filled with adjacent doubles: \n";
	printArray(doublesArray3, 15);
	cout << "\n";

	//Using the reduceDoubles function
	int someLength3 = 15;
	int *z3 = reduceDoubles(doublesArray3, &someLength3);
	cout << "Here is the reduced doubles array, and its new length is: " << someLength3 << "\n";
	printArray(z3, someLength3);

	//Freeing the space of the array made from problem 10
	delete [] z3;

//**************************************************************************************************************************

	printStars();

	//TEST1
	cout << "Problem 11: \n";
	int toBeWeighted[] = {3,8,2,5,1,4,6,0,2};
	int window = 5;

	cout << "\nTEST 1:";
	cout << "Example array: \n";
	printArray(toBeWeighted, 9);
	cout << "\nWeighted and averaged value for the array at position 6 with a window of " << window << ":\n";
	cout << hanningWindow(&toBeWeighted[5], window);
	cout << "\n\n";


	//TEST2
	int toBeWeighted2[] = {1,2,3,4,5,6,7};
	int window2 = 3;

	cout << "TEST 2:";
	cout << "Example array: \n";
	printArray(toBeWeighted2, 7);
	cout << "\nWeighted and averaged value for the array at position 3 with a window of " << window2 << ":\n";
	cout << hanningWindow(&toBeWeighted[2], window2);
	cout << "\n\n";

	//TEST3
	int toBeWeighted3[] = {4,5,6,7,8,2,1,3};
	int window3 = 3;

	cout << "TEST 2:";
	cout << "Example array: \n";
	printArray(toBeWeighted3, 8);
	cout << "\nWeighted and averaged value for the array at position 5 with a window of " << window3 << ":\n";
	cout << hanningWindow(&toBeWeighted[4], window3);
	cout << "\n";

//**************************************************************************************************************************

	printStars();


	cout << "Problem 12: \n";
	//TEST1
	int toBeWeightedV2[] = {3,8,2,5,1,4,6,0,2};
	int window100 = 5;

	cout << "TEST 1:\n";
	cout << "Array before the hanning window: \n";
	printArray(toBeWeightedV2, 9);

	cout << "\nArray after the hanning window with window of: " << window100 << "\n";
	int *zed = filterArray(toBeWeightedV2, 9, window100);
	printArray(zed, 9);
	cout << "\n";
	delete [] zed;


	//TEST2
	int toBeWeightedV22[] = {2,4,6,9,6,5,0,4,6};
	int window200 = 5;

	cout << "\nTEST 2:\n";
	cout << "Array before the hanning window: \n";
	printArray(toBeWeightedV22, 9);

	cout << "\nArray after the hanning window with winodw of: " << window200 << "\n";
	int *zed2 = filterArray(toBeWeightedV22, 9, window200);
	printArray(zed2, 9);
	cout << "\n";
	delete [] zed2;


	//TEST3
	int toBeWeightedV23[] = {2,2,4,0,7,0,3,5,6};
	int window300 = 3;

	cout << "TEST 3:\n";
    cout << "Array before the hanning window: \n";
    printArray(toBeWeightedV23, 9);

	cout << "\nArray after the hanning window with a window of: " << window300 << "\n";
	int *zed3 = filterArray(toBeWeightedV23, 9, window300);
	printArray(zed3, 9);
	delete [] zed3;

//**************************************************************************************************************************

	printStars();


	cout << "Problem 13: \n";
	int length2 = 0;
	int highPoint2 = 0;
	int lowPoint2 = 0;
	int *someTestArray2 = generateRandomArrayV2(&length2, &highPoint2, &lowPoint2);

	cout << "Array of random length: " << length2 << ", and random numbers iterating between high point: " << highPoint2 << " and low point " << lowPoint2 << " integers:";
	printFilteredArray(someTestArray2, length2, lowPoint2, highPoint2);
	cout << "\n\n";


	int window97 = 3;
	cout << "Now the filtered array with a window of: " << window97;
	int *filteredTestArray2 = filterArray(someTestArray2, length2, window97);
	printFilteredArray(filteredTestArray2, length2, lowPoint2, highPoint2);

	delete [] someTestArray2;
	delete [] filteredTestArray2;

//**************************************************************************************************************************

	printStars();


	cout << "Problem 14: \n";
	int numberOfArrays = 0;
	int arrayLength = 0;
	int **finalArray = generateBinaryArray(&numberOfArrays, &arrayLength);

	cout << "\n";
	cout << "Here is a 2d array of random row and column sizes filled with 0's and 1's\n\n";
	for(int i = 0; i < numberOfArrays; i++) {
		printArray(finalArray[i], arrayLength);
	}
	//Deleting
	for(int i = 0; i < numberOfArrays; i++) {
		delete [] finalArray[i];
		}
	delete [] finalArray;


	return 0;
}

//******************************************************************************************************

/*
 * printStars, prints a line of stars to the console, makes things look better
 * Consumes: Nothing
 * Produces: Nothing
 */
void printStars() {
	cout << "\n***********************************************************************************************\n\n";
}

//******************************************************************************************************

/*
 * Problem 1
 * generateRandomArray, generates an array the length of a given int and filled with random numbers between
 * 0 and 50. It then prints the array. Finally, it makes the second parameter in the array the smallest value
 * and prints out that value using pass by reference.
 * Consumes: An integer and an alias to an integer
 * Produces: Nothing
 */
void generateRandomArray(int length, int &x) {
	int arr[length];

	//Generating array
	cout << "The array: \n";
	for(int i = 0; i < length; i++) {
		arr[i] = (rand() % 50) + 1;
		cout << arr[i];

		if(i < length - 1) {
			cout << ", ";
		}
	}
	//Locating smallest value
	int temp = arr[0];
	for(int j = 0; j < length; j++) {
		if(temp > arr[j]) {
			temp = arr[j];
			x = temp;
		}
	}
}

//********************************************************************************************************

/*
 * Problem 2
 * reverseArray, makes an array of a given length filled with random numbers between 0 and 50. It prints
 * this array then reverses the array and then prints the reversed array.
 * Consumes: An integer
 * Produces: Nothing
 */
void reverseArray(int length) {
	int arr[length];

	//Generating and printing array
	cout << "Normal array: \n";
	for(int i = 0; i < length; i++) {
		arr[i] = (rand() % 50);
		cout << arr[i];

		if(i < length - 1) {
			cout << ", ";
		}
		else {
			cout << "\n\n";
		}
	}

	//Reversing array
	for(int j = 0; j < length/2; j++) {
		int temp = arr[j];
		arr[j] = arr[length-j-1];
		arr[length-j-1] = temp;
	}

	//Printing reversed array
	cout << "Reversed array: \n";
	for(int k = 0; k < length; k++) {
		cout << arr[k];
		if(k < length - 1) {
			cout << ", ";
		}
	}
}

//**************************************************************************************************

/*
 * Problem 3
 * sortArray, generates an array of a given length and fill it with a range up to a given integer. It then
 * finds the smallest value in the array, prints that value and replaces it with the gieven integer + 1. This
 * continues until every element in the array is printed and replaced.
 * Consumes: Two integers
 * Produces: Nothing
 */
void sortArray(int length, int range) {
	int arr[length];

	//Generating array
	cout << "\nOriginal array: \n";
	for(int i = 0; i < length; i++) {
		arr[i] = rand() % (range - 1);
		cout << arr[i];

		if(i < length - 1) {
			cout << ", ";
		}
	}

	//Sorting, printing, and replacing the array
	cout << "\n\nSorted array: \n";

	for(int i = 0; i < length; i++) {
		int x = 0;
		int temp = arr[0];

		for(int j = 0; j < length; j++) {
			if(temp > arr[j]) {
				temp = arr[j];
				x = j;
			}
		}
		cout << temp;
		if(i < length - 1) {
			cout << ", ";
		}
		arr[x] = range + 1;
	}

}

//******************************************************************************************************

/*
 * Problem 4
 * printInt, creates an integer of value 3 to go on the stack. Prints this integers value and address.
 * Returns the address of the variable.
 * Consumes: Nothing
 * Produces: A string
 */
int *printInt() {
	int x = 3;
	cout << "The integers value is: " << x << "\n";
	cout << "The integers address is: " << &x << "\n";
	return &x;
 }

//******************************************************************************************************

/*
 * Problem 5
 * printArray, prints a given array on a single line with commas between each number
 * Consumes: An integer and an array of integers
 * Produces: Nothing
 */
void printArray(int arr[], int length) {
	for(int i = 0; i < length; i++) {
		cout << arr[i];
		if(i < length - 1) {
			cout << ", ";
		}
		else {
			cout << endl;
		}
	}
}

//******************************************************************************************************

/*
 * Problem 6
 * generateRandomArrayV2, generates a random number between 25 and 50 then creates space for an array on
 * the heap of that size. A random high number between 5 and 10 and a random low number beetween -5 and
 * -10 are generated and then the array is filled iteratively with randomm numbers between the high and
 * low points. The array is then returned.
 * Consumes: Three pointers to integers
 * Produces: An array of integers
 */
int *generateRandomArrayV2(int *length, int *highPoint, int *lowPoint) {
	*length = rand() % 25 + 25;
	int *arr = new int[*length];

	//High Point and Low Point
	*highPoint = rand() % (10 - 5) + 5;
    *lowPoint = rand() % (10 - 5) + 5;
    *lowPoint -= *lowPoint * 2;

	for(int i = 0; i < *length; i += 2) {
		arr[i] = rand() % *highPoint;
		arr[i+1] = -(rand() % *lowPoint);
	}
	return arr;
}

//*******************************************************************************************************

/*
 * Problem 7
 * generateRandomArrayV3, generates a random array in the same way the function from problem 6 does. However,
 * Consumes: An integer
 * Produces: The address of an integer
 */
/*
int *generateRandomArrayV3(int length) {
	int arr[length];

	//High Point and Low Point
	int highPoint = rand() % (10 - 5) + 5;
	int lowPoint = rand() % (10 - 5) + 5;
	lowPoint -= lowPoint * 2;

	for(int i = 0; i < length; i++) {
		arr[i] = rand() % highPoint;
		arr[i+1] = -(rand() % lowPoint);

	}
	return &arr[0];
}
*/
//NOTE, This function should not work because the after the function is called in main, the variable at the
//first position in the array ceases to exist after the function is done being called. Because the array
//was created on the stack.

//********************************************************************************************************

/*
 * Problem 8
 * printArrayAddresses, prints out the addrress of every value in the given array
 * Consumes: An array of integers and an integer
 * Produces: Nothing
 */
void printArrayAddresses(int arr[], int length) {
	for(int i = 0; i < length; i++) {
		cout << "Address for the element at position " << i << ": " << &arr[i] << "\n";
	}
}

//********************************************************************************************************

/*
 * Problem 9
 * printDoubleArrayAddresses, prints the addresses of each element in an array of doubles
 * Consumes: An array of doubles and an integer
 * Produces: Nothing
 */
void printDoubleArrayAddresses(double arr[], int length) {
	for(int i = 0; i < length; i++) {
		cout << "Address for the element at position " << i << ": " << &arr[i] << "\n";
	}
}

//*******************************************************************************************************

/*
 * Problem 10
 * reduceDoubles, takes an array and creates a new array on the heap with all the double numbers that are
 * next to eachother removed. Returns the newly created array with a size modified to be the size of the new
 * reduced size array.
 * Consumes: An array of integers and a pointer to an integer
 * Produces: An array of integers
 */
int *reduceDoubles(int arr[], int *length) {
	int newLength = 0;
	int originalLen = *length;
	int *newArr = new int[*length];
	int j = 0;

	for(int i = 0; i < *length - 1; i++) {
		if(arr[i] == arr[i+1]) {
			newLength += 1;
		}
		else {
			newArr[j] = arr[i];
			j++;
		}
	}
	*length -= newLength;
	newArr[j++] = arr[originalLen-1];

	return newArr;
}

//*******************************************************************************************************

/*
 * Problem 11
 * hanningWindow, takes in an array and finds the weighted and average value using the hanning window
 * Consumes: An array of integers and an integer
 * Produces: An integer
 */
int hanningWindow(int arr[], int window) {
	int weightedAndAveraged = 0;

	int i = 0;
	int multiplier = 1;
	int iterations = window/2;
	int weight = 0;

	//Finding the sum and weight
	while(i <= iterations) {
		if(i == iterations) {
			weightedAndAveraged += arr[0]*multiplier;
			weight += multiplier;
			break;
		}
		else {
			weightedAndAveraged += arr[(0-iterations)+i]*multiplier + arr[(0+iterations)-i]*multiplier;
			weight += multiplier*2;
		}
		multiplier++;
		i++;
	}
	//cout << weightedAndAveraged << "\n";
	//Averaging the weight
	weightedAndAveraged /= weight;

	return weightedAndAveraged;
}


//*******************************************************************************************************

/*
 * Problem 12
 * filterArray, uses an array and the size of the array as well as the hanning window function from the previous
 * problem to filter every element in the array.
 * Consumes: An array of integers and two integers
 * Produces: An array of integers
 */
int *filterArray(int arr[], int length, int window) {
	int *filteredArr = new int[length];

	//Checks is the winow is out of bounds, if it is then the array at that position is 0.
	//Otherwise the hanning window is run.
	for(int i = 0; i < length; i++) {
		if(i < (window / 2) || i > (length - 1 - (window/2))) {
			filteredArr[i] = 0;
		}
		else {
			filteredArr[i] = hanningWindow(&arr[i], window);
		}
	}

	return filteredArr;
}


//********************************************************************************************************

/*
 * Problem 13
 * printFilteredArray, takes in an array, its length, and highest/lowest values. Prints out a graph of *'s
 * in the correct locations.
 * Consumes: An array and three integers
 * Produces: Nothing
 */
void printFilteredArray(int arr[], int length, int lowPoint, int highPoint) {

	//Printing out the array for reference
	cout << "\nThe original array for reference: \n";
	for(int i = 0; i < length; i++) {
		cout << arr[i];
		if(i < length - 1) {
			cout << ", ";
		}
		else {
			cout << "\n\n";
		}
	}

	//Putting the array into a graph
	for(int i = highPoint; i >= lowPoint; i--) {

		cout << i;

		for(int j = 0; j < length; j++) {
			if(arr[j] == i) {
				cout << "*";
			}
			else {
				cout << " ";
			}

			if(j == length - 1) {
				cout << "\n";
			}
		}
	}
}

//********************************************************************************************************

/*
 * Problem 14
 * generateBinaryArray, takes in two integers addresses using call by pointer and returns the addressof a
 * 2-dimensional array. It then generates a random number between 5 and 10 (size of the addresses) and a random
 * number between 4 and 8 (size of the array). The input parameters are my to hold these two random numbers and
 * then a 2-dimensional array is created on the heap and filled with 0's. Next, 5 random number pairs are
 * generated and used to fill some spots in the array with 1's, as long as there isn't already a 1 in that
 * location.
 * Consumes: Two pointers to integers
 * Produces: A 2-dimensional array of integers
 */
int **generateBinaryArray(int *nbrOfAddresses, int *sizeOfArrays) {

	//Generating random x and y
	int x = rand() % 5 + 5;
	int y = rand() % 4 + 5;

	//Setting the input parameters to x and y with call by pointer
	*nbrOfAddresses = x;
	*sizeOfArrays = y;

	cout << "\n" << "Number of rows: " << x;
	cout << "\n" << "Number of columns: " << y;

	//Creating 2d array filled with 0's
	int **newArray = NULL;
	newArray = new int *[x];

	for(int i = 0; i < x; i++) {
		newArray[i] = new int[y];
	}

	for(int i = 0; i < x; i++) {
		for(int j = 0; j < y; j++) {
			newArray[i][j] = 0;
		}
	}

	//Generating 5 random number pairs and replacing array values with 1
	int a = 0;
	int b = 0;
	for(int i = 0; i <= 4; i++) {
		a = rand() % x;
		b = rand() % y;
		if(newArray[a][b] == 0) {
			newArray[a][b] = 1;
		}
		else {
			//Loops until a spot in the array is found that is 0
			while(newArray[a][b] != 0) {
				a = rand() % x;
				b = rand() % y;
			}
			newArray[a][b] = 1;
		}
	}
	return newArray;
}
