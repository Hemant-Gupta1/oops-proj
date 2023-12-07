#include "Brightness.h"
void applyBrightness(vector<vector<Pixel>> &imageVector,float &amount)
{
    int imageWidth = imageVector.size();
    int imageHeight = imageVector[0].size();
    amount -= 50.0f;
    for(int j = 0; j < imageHeight; j++)
    {
        for(int i = 0; i < imageWidth; i++)
        {
            int r = imageVector[i][j].r;
            int g = imageVector[i][j].g;
            int b = imageVector[i][j].b;

            //calculate brightR,brightG,brightB
            int brightG = static_cast<int> ( g + amount );
            int brightB = static_cast<int> ( b + amount );
            int brightR = static_cast<int> ( r + amount ) ;

            //Conditions to check if RGB values have exceeded 255
            if(brightR > 255)
            {
                imageVector[i][j].r = 255;
            }
            else if(brightR < 0)
            {
                imageVector[i][j].r = 0;
            }
            else
            {
                imageVector[i][j].r = brightR;
            }
            if(brightG > 255)
            {
                imageVector[i][j].g = 255;
            }
            else if(brightG < 0)
            {
                imageVector[i][j].g = 0;
            }
            else
            {
                imageVector[i][j].g = brightG;
            }
            if(brightB > 255)
            {
                imageVector[i][j].b = 255;
            }
            else if(brightB < 0)
            {
                imageVector[i][j].b = 0;
            }
            else
            {
                imageVector[i][j].b = brightB;
            }
        }
    }
}