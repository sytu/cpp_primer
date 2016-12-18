void print(const int ia[10]) { //10 is pointless
	for (size_t i = 0; i != 10; ++i) // the condition can be improved if the purpose of the code is to print all the element of an array, the size shall not use the integer but the actual size of the array. 
		cout << ia[i] << endl;   // if the size of the array is smaller than 10, the array can still be passed to the function but the behavior is undefined. 
}
// improved
void print(const int ia[], size_t sz) {
	for (size_t i = 0; i != sz; ++i) // the condition can be improved if the purpose of the code is to print all the element of an array, the size shall not use the integer but the actual size of the array. 
		cout << ia[i] << endl;   // if the size of the array is smaller than 10, the array can still be passed to the function but the behavior is undefined. 
}
// or call by reference. pass in the reference of the array
void print(const int (&arr)[10])   {  // then the size of the array has to be 10
	for (size_t i = 0; i != 10; ++i)
		cout << ia[i] << endl;
}
