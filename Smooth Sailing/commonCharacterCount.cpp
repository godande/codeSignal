int commonCharacterCount(std::string s1, std::string s2) {
    int first[255] = {0};
    int second[255] = {0};
    for(const auto& s : s1) {
        first[s]++;
    }
    for(const auto& s : s2) {
        second[s]++;
    }
    int res = 0;
    for(int i = 0; i < 255; i++) {
        res += min(first[i],second[i]);
    }
    return res;
}

