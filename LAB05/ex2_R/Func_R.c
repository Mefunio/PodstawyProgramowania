int silnia_int (int n){

    if (n==0)
        return 1;
    else if (n >= 1)
        return n * silnia_int(n - 1);
}
float silnia_float (float n){

    if (n==0)
        return 1;
    else if (n >= 1)
        return n * silnia_float(n - 1);
}
double silnia_double (double n){

    if (n==0)
        return 1;
    else if (n >= 1)
        return n * silnia_double(n - 1);
}