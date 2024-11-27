#include "color.h"
#include "vec3.h"

#include <iostream>

int main(){
    int img_width = 256;
    int img_height = 256;

    std::cout<<"P3\n"<<img_width<<" "<<img_height<<"\n255\n";
    
    for(int j=0; j<img_height; j++){
        std::clog << "\rScanLines remaining: " << (img_height - j) << " " << std::flush;
        for(int i=0; i<img_width; i++){
            auto pixel_color = color(double(i)/(img_width-1), double(j)/(img_width-1), 0);
            write_color(std::cout, pixel_color);
        }
    }
    std::clog<< "\rDone.       \n";
    return 0;
}