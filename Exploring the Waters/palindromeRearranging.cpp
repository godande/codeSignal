bool palindromeRearranging(std::string inputString) {
    int chars[26] = {0};
    for(const auto& chr : inputString) {
        chars[chr-'a']++;
    }
    int c = 0;
    for(int i = 0; i < 26; i++) {
        c+=chars[i]&1;
    }
    return c<2;
}

