#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cassert>
// explanation-->https://stackoverflow.com/questions/31162367/significance-of-ios-basesync-with-stdiofalse-cin-tienull
//with this one it passed all the cases idk what the fuck it does(nevermind figured it out)
// #define cin ios_base::sync_with_stdio(false);cin.tie(NULL); cin
template<class t>
class AddElements {
    private:
    t Element1;
    public:
    AddElements(t x):Element1(x){}
    t add(t y){
        return(Element1+y);}
    t concatenate(t z){return (Element1+z);}
};

int main () {
  int n,i;
  std::cin >> n;
  for(i=0;i<n;i++) {
    std::string type;
    std::cin >> type;
    if(type=="float") {
        double element1,element2;
        std::cin >> element1 >> element2;
        AddElements<double> myfloat (element1);
        std::cout << myfloat.add(element2) <<std::endl;
    }
    else if(type == "int") {
        int element1, element2;
        std::cin >> element1 >> element2;
        AddElements<int> myint (element1);
        std::cout << myint.add(element2) <<std::endl;
    }
    else if(type == "string") {
        std::string element1, element2;
        std::cin >> element1 >> element2;
        AddElements<std::string> mystring (element1);
        std::cout << mystring.concatenate(element2) <<std::endl;
    }
  }
  return 0;
}



