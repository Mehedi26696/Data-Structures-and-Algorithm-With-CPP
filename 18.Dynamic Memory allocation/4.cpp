// int n
// int arr[n] in this way declaring variable size for array is not a good practice 
// Reason for this: in the time of compiling program take a stack memory(static memory allocation) for 
//array but if array size is way too large than stack memory size then program crash
// so we can declare large constant instead of variable for example arr[100000]

//To overcome variable size array problem we use heap memory(Dynamic memory allocation)

//for heap memory we use kewwprd 'new' this called dynamic memory allocation 

//in heap memory we declare like -> new char or new int 
//(naming a variable is not allow in heap new i is not correct)
// new char or new int return a pointer so we use pointer to access the variable
// char * ch=new char;  here bew char is part of heap and 
//char *ch is a part of static and through ch pointer we use the variable
// char * ch take 4 or * byte and new ch take 1 byte
// int *n=new int here int *n take 4 or 8 byte and new int take 4 byte


//array declare-> int *arr=new int[5]; size of array is 5*4 + 4 0r 8
//Difference between static and Dynamic is size 
//static memory release(free) it's space autometically and 
//dynamic memory doesn't release(free) it's space autometically,we done it by using 'delete' keyword
//int *i=new int; delete i; 
//int *arr=new int[n]; delete []arr;


