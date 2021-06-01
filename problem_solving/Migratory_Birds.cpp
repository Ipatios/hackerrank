#include <bits/stdc++.h>
#include<vector>
#include <iostream>
#include <algorithm>

int main()
{
    enum types{type1=1,type2,type3,type4,type5};
    int n;
    std::cin >> n;
    int arrayTypes[n],count1,count2,count3,count4,count5;
    count1=count2=count3=count4=count5=0;
for (int i = 0; i < n; i++){std::cin >> arrayTypes[i];}
    for (int j = 0; j < n; j++)
    {
      if(arrayTypes[j]==type1)
      {
          count1++;
      }
      if(arrayTypes[j]==type2){
          count2++;
      } 
      if(arrayTypes[j]==type3){
          count3++;
      } 
      if(arrayTypes[j]==type4){
          count4++;
      } 
      if(arrayTypes[j]==type5){
          count5++;
      }  
       
    } 
     std::vector<int> counts={count1,count2,count3,count4,count5};
     sort(counts.begin(),counts.end());
     if(counts.back()==count1){
         std::cout<<"1"<<std::endl;
     }else if(counts.back()==count2){
         std::cout<<"2"<<std::endl;
     }else if(counts.back()==count3){
         std::cout<<"3"<<std::endl;
     }else if(counts.back()==count4){
         std::cout<<"4"<<std::endl;
     }else if(counts.back()==count5){
         std::cout<<"5"<<std::endl;
     }
     
    
    
}
/*switch (arrayTypes[i])
        {
        case 1:
            type1+=1;
            break;
        case 2:
            type2+=1;
            break;
        case 3:
            type3+=1;
            break;
        case 4:
            type4+=1;
            break;
        case 5:
            type5+=1;
            break;
        }
    if(type1>type2 && type1>type3 && type1>type4 && type1>type5){
        std::cout<<1<<std::endl;
    }else if(type2>type1 && type2>type3 && type2>type4 && type2>type5){
        std::cout<<2<<std::endl;
    }else if(type3>type1 && type3>type2 && type3>type4 && type3>type5){
     std::cout<<3<<std::endl;
    }else if(type4>type1 && type4>type2 && type4>type3 && type4>type5){
     std::cout<<4<<std::endl;
    }else{
     std::cout<<5<<std::endl;
    }*/