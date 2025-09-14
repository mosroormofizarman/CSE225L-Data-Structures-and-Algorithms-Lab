#ifndef DYNARR_H_INCLUDED
#define DYNARR_H_INCLUDED

class dynArr
{
private:
    int *data;
    int size;

    int *new_data;

    int **twoDdata;

public:
    dynArr();
    dynArr(int);
    ~dynArr();
    void setValue(int, int);
    int getValue(int);

    void allocate(int);//Task02

    void twoDarray(int, int); //Task03
    void settwoDarrayValue(int, int, int); //Task03
    int gettwoDarrayValue(int, int); //Task03
};

#endif // DYNARR_H_INCLUDED
