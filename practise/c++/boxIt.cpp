#include<bits/stdc++.h>

//Implement the class Box
//l,b,h are integers representing the dimensions of the box
// The class should have the following functions : 

// Constructors: 
// Box();
// Box(int,int,int);
// Box(Box);


// int getLength(); // Return box's length
// int getBreadth (); // Return box's breadth
// int getHeight ();  //Return box's height
// long long CalculateVolume(); // Return the volume of the box

//Overload operator < as specified
//bool operator<(Box& b)

//Overload operator << as specified
//ostream& operator<<(ostream& out, Box& B)





class Box {
 private:
  int length, breadth, height;
 public:
  Box() :length(0),breadth(0),height(0){}

  Box(int l, int b, int h) {
    length = l;
    breadth = b;
    height = h;
  }
  Box(const Box &B) {
    length = B.length;
    breadth = B.breadth;
    height = B.height;
  }
  int getLength() {
    return length;
  }
  int getBreadth() {
    return breadth;
  }
  int getHeight() {
    return height;
  }
  long long CalculateVolume() {
    return (long long)(breadth) * length * height;
  }
  bool operator<(Box &B) {
    if (length < B.length) {
      return true;
    } else if (length == B.length) {
      if (breadth < B.breadth) {
        return true;
      } else if (breadth == B.breadth) {
        if (height < B.height) {
          return true;
        }
      }
    }

    return false;
  }
};
std::ostream &operator<<(std::ostream &out, Box &B) {
  out << B.getLength() << " " << B.getBreadth() << " " << B.getHeight();
  return out;
};

void check2()
{
	int n;
	std::cin>>n;
	Box temp;
	for(int i=0;i<n;i++)
	{
		int type;
		std::cin>>type;
		if(type ==1)
		{
			std::cout<<temp<<std::endl;
		}
		if(type == 2)
		{
			int l,b,h;
			std::cin>>l>>b>>h;
			Box NewBox(l,b,h);
			temp=NewBox;
			std::cout<<temp<<std::endl;
		}
		if(type==3)
		{
			int l,b,h;
			std::cin>>l>>b>>h;
			Box NewBox(l,b,h);
			if(NewBox<temp)
			{
				std::cout<<"Lesser\n";
			}
			else
			{
				std::cout<<"Greater\n";
			}
		}
		if(type==4)
		{
			std::cout<<temp.CalculateVolume()<<std::endl;
		}
		if(type==5)
		{
			Box NewBox(temp);
			std::cout<<NewBox<<std::endl;
		}

	}
}

int main()
{
	check2();
}




/*
class Box{
    private:
    int length,breadth,height;

    public:
    Box(){
     length=breadth=height=0;
    }
    Box(int l,int b,int h){
        length=l;
        breadth=b;
        height=h;
    }
    Box(const Box &b){
    length=b.length;
    breadth=b.breadth;
    height=b.height;
    }
    int getLength(){
        return length;
    }
    int getBreadth(){
        return breadth;
    }
    int height(){
        return height;
    }
    long long CalculateVolume(){
        return (long long)breadth*height*length;
    }
    
    };
    
*/