int matrixElementsSum(std::vector<std::vector<int>> matrix) {
    int j = 0;
    long long sum = 0;
    for(int i = 0; i < matrix[0].size(); i++) {
        while(j < matrix.size() && matrix[j][i] != 0) {
            sum += matrix[j][i];
            j++;
        }
        j=0;
    }
    return sum;
}

