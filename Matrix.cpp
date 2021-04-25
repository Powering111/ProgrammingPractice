#include <iostream>
using namespace std;

template <class T>
class Matrix{
private:
    unsigned int row,column;
    T ** values;
public:
    Matrix(unsigned int row, unsigned int column){
        this->row=row;
        this->column=column;
        this->values = new T*;
        for(int i=0;i<row;i++){
            this->values[i]=new T[column];
        }
    };
    Matrix(unsigned int row, unsigned int column, T ** values){
        this->row=row;
        this->column=column;
        
        this->values = new T*;
        for(int i=0;i<row;i++){
            this->values[i]=new T[column];
        }
        for(int i=0;i<row;i++){
            for(int j=0;j<column;j++){
                this->values[i][j]=values[i][j];
            }
        }
    }
    
    ~Matrix(){
        for(int i=0;i<row;i++){
            delete[] values[i];
        }
        delete[] values;
    }
};

int main()
{
    Matrix<int> a(2,2);
    return 0;
}
