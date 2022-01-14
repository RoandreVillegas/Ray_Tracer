#include <iostream>
#include <fstream>
using namespace std;
int main(){
    int nx = 200;
    int ny = 100;
    ofstream MyFile("image.ppm");
    MyFile << "P3\n" << nx << " " << ny << "\n255\n";
    cout << "P3\n" << nx << " " << ny << "\n255\n";
    for(int j = ny - 1; j >= 0; j--){
        for(int i = 0; i < nx; i++){
            double r = double(i) / double(nx);
            double g = double(j) / double(ny);
            double b = 0.2;
            int ir = (255.99 * r);
            int ig = (255.99 * g);
            int ib = (255.99 * b);
            MyFile << ir << " " << ig << " " << ib << "\n";
            cout << ir << " " << ig << " " << ib << "\n";
        }
    }
    MyFile.close();
}