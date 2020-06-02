double det(double x1,double y1, double x2,double y2) {
    return x1*y2 - x2*y1;
}
bool isRectangle(std::vector<std::vector<int>> points) {
    swap(points[1],points[3]);

    double A = points[0][1] - points[1][1];
    double B = points[1][0] - points[0][0];

    double A2 = points[1][1] - points[2][1];
    double B2 = points[2][0] - points[1][0];

    double A3 = points[2][1] - points[3][1];
    double B3 = points[3][0] - points[2][0];

    double A4 = points[3][1] - points[0][1];
    double B4 = points[0][0] - points[3][0];


    double angle = (points[0][0]-points[1][0])*(points[2][0]-points[1][0])
                 + (points[0][1]-points[1][1])*(points[2][1]-points[1][1]);
    if(angle != 0) return false;

    return det(A,B,A3,B3) == 0 && det(A2,B2,A4,B4) == 0;
}

