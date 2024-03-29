#include "reflect.h"
#include "iostream"

void reflect(
  const std::vector<unsigned char> & input,
  const int width,
  const int height,
  const int num_channels,
  std::vector<unsigned char> & reflected)
{
  reflected.resize(width*height*num_channels);
  ////////////////////////////////////////////////////////////////////////////
  // Add your code here
  for(int j = 1; j <= height; j++){
  	for(int i = 0; i<width; i++){
		for(int k = 0; k < num_channels; k++){
    			reflected[(j*(width*num_channels)-1)-(i*num_channels)-(num_channels-k-1)] =
				input[(j-1)*(width*num_channels) + i*num_channels + k];
		}
    	}
  }  
  ////////////////////////////////////////////////////////////////////////////
}
