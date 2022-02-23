#include <iostream>
#include <vector>
#include <list>
using namespace std;
int main()
{
    vector<int> vec{55, 3, 97, -21, 6};
    list<int> lst{55, 3, 97, -21, 6};

    vector<int>::iterator itrVec = vec.begin();
    list<int>::iterator itrLst = lst.begin();

    // vectorの各要素のアドレスを表示
   
    cout << "vectorStart" << endl;
    cout << &vec << endl;
    cout << "vector[0]" << endl;
    cout << &vec[0] << endl;
    cout << "vector[1]" << endl;
    cout << &vec[1] << endl;
    cout << "vector" << std::endl;
    while (itrVec != vec.end())
    {
        std::cout << &(*itrVec) << std::endl;
        itrVec++;
    }

    // listの各要素のアドレスを表示
    cout << "\nlist" << std::endl;
    while (itrLst != lst.end())
    {
        std::cout << &(*itrLst) << std::endl;
        itrLst++;
    }

    cin.get();
}