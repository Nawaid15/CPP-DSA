int factorial(int x) {
    int t = 1;
    for(int i = 1; i <= x; i++) {
        t *= i; 
    } 
    return t;
}

int Permutation(int n, int r) {
    int a = factorial(n);
    int b = factorial(n-r);
    int z = a/b;
    return z;
}

int Combination(int n, int r) {
    int i = factorial(n);
    int j = factorial(r);
    int k = factorial(n-r);
    int y = i/(j*k);
    return y;
}

int swap(int x, int y) {
    x = x + y;
    y = x - y;
    x = x - y; 
    cout << "The value of number 1 is " << x << endl;
    cout << "The value of number 2 is " << y << endl;
    // cout << &x << " " << &y << endl;
    return x,y;  
}

int pswap(int* x, int* y) {
    *x = *x + *y;
    *y = *x - *y;
    *x = *x - *y; 
    cout << "The value of number 1 is " << *x << endl;
    cout << "The value of number 2 is " << *y << endl;
    // cout << &x << " " << &y << endl;
    return *x,*y;  
}

