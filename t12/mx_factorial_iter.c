int mx_factorial_iter(int n){
    if(n > 12 || n < 0){
        return 0;
    }
    int fact = 1;
    if(n == 0) return 1;
    for (int i = 1; i <= n; i++){
        fact *= i;
    }
    return fact;
}

