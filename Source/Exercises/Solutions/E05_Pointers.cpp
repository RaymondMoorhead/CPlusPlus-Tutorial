// create the following pointer variables as the appropriate type,
// and initialize them as follows:
//    my_int_pointer                 = null pointer
//    my_int_pointer_pointer         = address of my_int_pointer
//    my_int_pointer_pointer_pointer = address of my_int_pointer_pointer_pointer

int* my_int_pointer = nullptr;
int** my_int_pointer_pointer = &my_int_pointer;
int*** my_int_pointer_pointer_pointer = &my_int_pointer_pointer;