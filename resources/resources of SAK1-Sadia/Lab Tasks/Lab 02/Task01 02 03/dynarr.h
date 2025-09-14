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

    void allocate(int);

    void twoDarray(int, int);
    int gettwoDarrayValue(int, int);
    void settwoDarrayValue(int, int, int);
};

#endif // DYNARR_H_INCLUDED
