/************************************************************************************************/
/*** Topic: Read a 2D matrix from a .txt file and save it in a 2D vector in C++    Ali-Seif   ***/
/*** Version Release 16.8.5                                                                   ***/
/*** Date: 2/17/2021                                                                          ***/
/*** Code implemented in Microsoft Visual Studio Enterprise 2019 C++ compiler                 ***/
/*** MSI: PX60 6QD/ DDR4                                                                      ***/
/*** Run under a Intel® Core™ i7-6700HQ CPU @ 2.60GHz × 64 based processor with 16 GB RAM     ***/
/************************************************************************************************/
#include<iostream>                                                              //for cout
#include<vector>                                                                //for vector
#include<fstream>                                                               //for ifstream
#include"Header.h"

#define size_matrix 200                                                         //size of matrix clom and row

int main() {
    vector_2d_int matrix;
    matrix = matrix_vector(size_matrix);

 // Displaying the 2D vector
/*
//##############################################################
//####                                                      ####
//####              Displaying the 2D vector                ####
//####                                                      ####
//############################################################## 
    for (register int i = 0; i <matrix.size(); i++) {
        for (register int j = 0; j < matrix[i].size(); j++)
            std::cout << matrix[i][j] << " ";
        std::cout << std::endl;
    }
    */  
	
    
    return 0;
}