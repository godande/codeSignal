bool areSimilar(std::vector<int> a, std::vector<int> b) {
    if(a.size() != b.size()) {
        return false;
    }

    vector<pair<int,int>> differences;

    for(int i = 0; i < a.size(); i++) {
        if(a[i] != b[i]) {
            differences.push_back(pair<int,int>{a[i],b[i]});
        }
    }

    if(differences.size() == 0) {
        return true;
    }

    if(differences.size() == 2) {
        if(differences[0].first == differences[1].second
          && differences[0].second == differences[1].first) {
            return true;
        } else {
            return false;
        }
    }

    return false;
}

