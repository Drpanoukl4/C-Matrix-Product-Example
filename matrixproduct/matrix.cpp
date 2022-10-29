#include <iostream>

int main () {

std::cout << "-*- Program Demostration Matrix Product -*-";

int row1, col1, row2, col2;

int m1[10][10], m2[10][10], pro[10][10];

std::cout << "\n\n|| Enter the number of Row and Colums to the First Matrix \n";
std::cin >> row1 >> col1;

std::cout << "\n\n|| Enter the number of Row and Colums to the Second Matrix \n";
std::cin >> row2 >> col2;

//matrix mul

if(col1 == row2){

    std::cout << "\n|| Enter The " << row1 * col1 << " Elements of the first Matrix \n";

    for(int i = 0; i < row1; i++){

        for(int j = 0; j < col1; j ++){

            std::cin >> m1[i][j];

        }

    }

    std::cout << "\n|| Enter The " << row2 * col2 << " Elements of the Second Matrix \n";

      for(int i = 0; i < row2; i++){

        for(int j = 0; j < col2; j ++){

            std::cin >> m2[i][j];

        }

    }

    //Product//

       for(int i = 0; i < row1; i++){

        for(int j = 0; j < col2; j ++){

            pro[i][j] = 0;

            for(int k = 0; k < col1; k ++){

                pro[i][j] = pro[i][j] + (m1[i][k] * m2[k][j]);

            }
        
         }

    }

    //Product//

    std::cout << "\n\n The First Matrix is: \n";
    for(int i = 0; i < row1; i++){

        for(int j = 0; j < col1; j ++){

            std::cout <<m1[i][j] << "  "; 
            
    }

    std::cout << std::endl;
    
    }

    std::cout << "\n\n The Second Matrix is: \n";
    for(int i = 0; i < row2; i++){

        for(int j = 0; j < col2; j ++){

            std::cout <<m2[i][j] << "  "; 
            
    }

    std::cout << std::endl;
    
    }

    std::cout << "\n\n The Product Matrix is: \n";
    for(int i = 0; i < row2; i++){

        for(int j = 0; j < col2; j ++){

            std::cout <<pro[i][j] << "  ";

            
    }

    std::cout << std::endl;
    
    }



}else{

std::cout <<"\n\n  Matrix product *-Error-* Indices does not Match!";

}

std::cout << "\n\n";

};

