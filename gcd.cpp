int gcd(int A, int B) {
    if(A==0)
        return B;
    else if(B==0)
        return A;
    else if(A<=B)
        return gcd(A,B%A);
    else
        return gcd(B,A%B);
}
