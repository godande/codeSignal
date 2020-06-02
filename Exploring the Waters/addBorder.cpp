std::vector<std::string> addBorder(std::vector<std::string> picture) {
    picture.insert(picture.begin(),string(picture[0].size()+2,'*'));
    picture.push_back(string(picture[0].size(),'*'));
    for(int i = 1; i < picture.size()-1; i++) {
        picture[i].push_back('*');
        picture[i].insert(picture[i].begin(),'*');
    }
    return picture;
}

