#include "Flip.h"
#include<vector>
#include<math.h>
#include<algorithm>
#include "../Pixel.h"

using namespace std;

void ApplyFlip(std::vector<std::vector<Pixel>>& image, int horizontalFlipValue, int verticalFlipValue){
     if (verticalFlipValue != 0){
        reverse(image.begin(), image.end());
    }

    if (horizontalFlipValue != 0){
        for (vector<Pixel>& row : image) {
            reverse(row.begin(), row.end());
        }
    }


 }