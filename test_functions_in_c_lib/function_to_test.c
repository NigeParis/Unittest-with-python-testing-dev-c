int add(int a, int b) {

    int result;

    result = a + b;
    return (result);
}


int sub(int a, int b) {

    int result;

    result = a - b;
    return (result);
}

//cc -shared -o function_to_test.so -fPIC function_to_test.c
