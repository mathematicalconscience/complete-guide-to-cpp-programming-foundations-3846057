// Complete Guide to C++ Programming Foundations
// Exercise 04_07
// Using Objects with Vectors, by Eduardo Corpeño 

#include <vector>
#include <iostream>
#include <complex>

int main(){
    std::vector<std::complex<double>> points;

    points.push_back(std::complex<double>(1.0, 2.5));
    points.push_back(std::complex<double>(1.1, 3.5));
    points.push_back(std::complex<double>(1.2, 4.5));
    points.push_back(std::complex<double>(1.3, 5.5));
    
    std::cout << points.begin()->real() << std::endl;
    std::cout << points[1].imag() << std::endl;
    std::cout << (prev(points.end(), 2))->real() << std::endl;

    std::cout << std::endl << std::endl;
    return 0;
}
