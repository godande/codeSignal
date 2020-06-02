bool isLucky(int n) {
    // i'm too lazy
    string nm = to_string(n);
    int sm1 = 0;
    int sm2 = 0;
    for(int i = 0; i < nm.size()/2; i++) {
        sm1 += nm[i]-'0';
        sm2 += nm[nm.size()-i-1]-'0';
    }
    return sm1==sm2;
}

