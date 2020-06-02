std::vector<std::string> allLongestStrings(std::vector<std::string> inputArray) {
    sort(inputArray.begin(),inputArray.end(), [](string a, string b){
                                                    return a.size() > b.size();
                                                });
    vector<string> result;
    result.push_back(inputArray[0]);
    int i = 1;
    while(inputArray[i].size() == result[0].size()) {
        result.push_back(inputArray[i]);
        i++;
    }
    return result;

}

