std::vector<int> alternatingSums(std::vector<int> a) {
    int t1=0,t2=0;
    for(int i = 0; i < a.size(); i++) {
        if(i&1) t2+=a[i];
        else t1+=a[i];
    }
    return vector<int>{t1,t2};
}

