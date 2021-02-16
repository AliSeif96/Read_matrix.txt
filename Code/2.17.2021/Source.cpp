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

typedef std::vector<int> vector_1d_int;                                         //define type of vector integer one dimensional
typedef std::vector<vector_1d_int> vector_2d_int;                               //define type of vector integer two dimensional

#define size_matrix 10                                                          //size of matrix clom and row

int main() {
    vector_2d_int matrix_2d;                                                    //create vector integer two dimensional(matrix_2d)
    std::ifstream ifile("matrix-SF-DAG1src-3 - Copy.txt");                      //read address of file .txt
    if (ifile.is_open()) {                                                      //if file was available 
        vector_1d_int matrix_1d;                                                //create vector integer one dimensional(matrix_1d)
        int num;                                                                //create integer number(num)
        while (ifile >> num) {                                                  //Set the read number of the file to the defined integer(num)
            matrix_1d.push_back(num);                                           //set defined integer(num) into the One after the last cell vector integer one dimensional(matrix_1d)
            if (matrix_1d.size() == size_matrix) {                              //if size of vector is full
                matrix_2d.push_back(matrix_1d);                                 //set vector integer one dimensional(matrix_1d) into the One after the last cell vector integer tow dimensional(matrix_2d)
                matrix_1d.clear();                                              //clean all cels of vector integer one dimensional(matrix_1d) and delete it
            }
        }
    }
    else {                                                                      //else if file wasn't available
        std::cout << "There was an error opening the input file!\n";            //print "..."
        exit(1);                                                                //means program(process) terminate normally unsuccessfully..
    }
//##############################################################
//####                                                      ####
//####              Displaying the 2D vector                ####
//####                                                      ####
//############################################################## 
    for (int i = 0; i < matrix_2d.size(); i++) {
        for (int j = 0; j < matrix_2d[i].size(); j++)
            std::cout << matrix_2d[i][j] << " ";
        std::cout << std::endl;
    }
	return 0;
}
