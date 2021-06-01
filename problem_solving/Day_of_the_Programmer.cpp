#include <bits/stdc++.h>

// Complete the dayOfProgrammer function below.
std::string dayOfProgrammer(std::string& str,int& year) {
if (year == 1918){
    return "26.09.1918";
}else if(((year <= 1917)&&(year%4 == 0)) || ((year > 1918) && (year%400 == 0)) ||((year%4 == 0) & (year%100 != 0))){
    std::string year1="12.09."+str;
    return year1;
}else if(((year >= 1000) && (year%4 == 1)) || ((year%4 == 2) && (year%100 != 0)) || (year%4 == 3) || ((year > 1917)&&(year%4 == 0))){
     std::string year2="13.09."+str;
    return year2;
}else return 0;
}

int main()
{
    int year;
    std::cin>>year;
  std::stringstream ss;
ss << year;
std::string str = ss.str(); 
std::cout<<dayOfProgrammer(str,year);
}
