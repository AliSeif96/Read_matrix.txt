#include<iostream>                                                              //for cout
#include<vector>                                                                //for vector
typedef std::vector<int> vector_1d_int;                                         //define type of vector integer one dimensional
typedef std::vector<vector_1d_int> vector_2d_int;                               //define type of vector integer two dimensional


vector_2d_int matrix_vector(int size_matrix) {
    vector_2d_int matrix_2d;                                                    //create vector integer two dimensional(matrix_2d)
    std::ifstream ifile("matrix-SF-DAG1src-3.txt");                      //read address of file .txt
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
    
    return   matrix_2d;
    std::cout << matrix_2d[5][4] << std::endl;
    matrix_2d.clear();

}