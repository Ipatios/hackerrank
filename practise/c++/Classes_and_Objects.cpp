#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cassert>
using namespace std;

/*/class Student{
vector <vector<int>> scores;
public:
void input(){
    vector<int>mainInput;//oi vatmoi tou enos mathiti
    int i=0;
      for(int j=0; j<5; j++){
        cin>>mainInput[j];
      scores[i][j]=mainInput[j];  
      }
      i++; 
   
}
int calculateTotalScore(){
    int sumKristen=0,sumOtherStudent=0,i=0;
    for(int j=0; j<5; j++){
        sumKristen+=scores[0][j];
        sumOtherStudent+=scores[i+1][j];
        i++;
        
    }
}
};*/

class Student {
  private:
    int scores[5];
    int sum;
  public:
  //το ":" κανει αρχικοποιησει οτι το sum στην class student ισουται με 0, περισσοτερες πληροφορειες->https://www.quora.com/What-is-the-meaning-of-in-C++
    //Student() : sum(0) {}
    int calculateTotalScore() {return sum;}
    void input() {
        for(int i=0; i<5; i++) {
            cin >> scores[i];
            sum+=scores[i];
        }
    }
};


int main() {
    int n; // number of students
    cin >> n;
    Student *s = new Student[n]; // an array of n students
    
    for(int i = 0; i < n; i++){
        s[i].input();
    }

    // calculate kristen's score
    int kristen_score = s[0].calculateTotalScore();

    // determine how many students scored higher than kristen
    int count = 0; 
    for(int i = 1; i < n; i++){
        int total = s[i].calculateTotalScore();
        if(total > kristen_score){
            count++;
        }
    }

    // print result
    cout << count;
    
    return 0;
}
