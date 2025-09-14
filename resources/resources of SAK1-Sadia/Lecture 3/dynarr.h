#ifndef DYNARR_H_INCLUDED
#define DYNARR_H_INCLUDED

class DynArr
{
private:
    int *data;
    int length;
public:
    DynArr();//It is a constructor, because it is declared with the class name.
    DynArr(int);//Here is another constructor with argument datatype(not argument). But it's allocated only one constructor memory.
    ~DynArr();//tilde for destructor
    void setValue(int, int);//(index,value)
    int getValue(int);//(index)
};

#endif // DYNARR_H_INCLUDED
