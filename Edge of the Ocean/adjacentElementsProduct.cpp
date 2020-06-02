int adjacentElementsProduct(std::vector<int> inputArray) {
    int answer = -INFINITY;
    for(int i = 1; i < inputArray.size(); i++) {
        answer = max(answer, inputArray[i]*inputArray[i-1]);
    }
    return answer;
}

