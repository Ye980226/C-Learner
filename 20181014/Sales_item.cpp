#include<iostream>
// #include "Sales_item.h"

struct Sales_data
{
    std::string bookNo;
    unsigned units_sold=0;
    double revenue= 0.0;
    /* data */
};

int main(){
    Sales_item item1,item2;
    std::cin >> item1 >> item2;
    if (item.isbn()==item2.isbn()){
        std::cout<<item1+item2<<std::endl;
        return 0;
    }else{
        std::cerr<<"Data must refer to same ISBN"<<std::endl;
        return -1;
    }
    system("pause");
}