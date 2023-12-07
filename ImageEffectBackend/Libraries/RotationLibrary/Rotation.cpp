#include "Rotation.h"

//To rotate the image by given degress,
//We first assume rotation by 90 deg first and according rotate again to attain other angles

//For 90 deg
// Calculate transpose abd then reverse each row

void rotateBy90deg(vector< vector<Pixel> > &imageVector)
{
    int imageWidth = imageVector.size();
    int imageHeight = imageVector[0].size();

    //Transpose of the matrix
    for(int i = 0; i < imageWidth ; i++)
    {
        for(int j = 0; j < i ; j++)
        {
            swap(imageVector[i][j] , imageVector[j][i]);
        }
    }

    //Now we reverse each row of the transposed matrix
    for(int i = 0; i < imageVector.size() ; i++)
    {
        reverse(imageVector[i].begin(),imageVector[i].end());
    }
}


void applyRotation(vector< vector<Pixel> > &imageVector, int &value)
{
    if(value == 90)
    {
        rotateBy90deg(imageVector);
    }
    else if(value == 180)
    {
        rotateBy90deg(imageVector);
        rotateBy90deg(imageVector);
    }
    else if(value == 270)
    {
        rotateBy90deg(imageVector);
        rotateBy90deg(imageVector);
        rotateBy90deg(imageVector);
    }
}