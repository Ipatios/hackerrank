#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>



int main() {
    
    std::string s;
    int hour;
    std::cin>>s;
    hour = ((s[0]-'0')*10)+(s[1]-'0');

    if(s[8]=='P'&& hour ==12) 
    std::cout<<std::to_string(hour);
    else if(s[8]=='P') 
    std::cout<<std::to_string(hour+12);
    else if(s[8]=='A'&&hour==12) 
    std::cout<<"00";
    
    else 
    std::cout<< s[0]<<s[1];
    
   
    for(int i =2;i<8;i++)
        std::cout<<s[i];
    std::cout<<std::endl;
    return 0;
}



/*#include <bits/stdc++.h>
#include<stdio.h>

std::string timeConversion(std::string s) {
    char timeOfDay=s.at(s.length()-1);
    char restChar[30];
    std::string restStr;
    s.copy(restChar,s.length()-4,2);
    //converter from char to string 
     for (int i = 0; i < s.length()-2; i++) { 
        restStr = restStr + restChar[i]; 
    } 
    if(timeOfDay=='P'){
    if(!(s[0]=='1' && s[1]=='2'))
		{
			
			s[0]=s[0]+1;
			s[1]=s[1]+2;
            restStr=s[0],s[1],restStr;
            return restStr;
		}
        }else {
            if(s[0]=='1' && s[1]=='2')
            {
            s[0]=0;
			s[1]=0;
            
            return restStr;
            }else{
               restStr=s[0],s[1],restStr;
                return restStr;
            } 

        }
        return restStr;
}   

int main(){
 std::string s;
    getline(std::cin, s);

    std::string result = timeConversion(s);

    std::cout << result << "\n";

    return 0;   
}*/   

