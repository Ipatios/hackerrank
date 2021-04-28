#include <iostream>
#include <sstream>
using namespace std;

class Student
{
private:
  int A, S;
  string f, l;

public:
  int get_age()
  {
    return A;
  }
  void set_age(int age)
  {
    A = age;
  }
  int get_standard()
  {
    return S;
  }
  void set_standard(int standard)
  {
    S = standard;
  }
  string get_first_name()
  {
    return f;
  }
  void set_first_name(string first_name)
  {
    f = first_name;
  }
  string get_last_name()
  {
    return l;
  }
  void set_last_name(string last_name)
  {
    l = last_name;
  }
  string to_string()
  {
    stringstream ss;
    char c = ',';
    ss << A << c << f << c << l << c << S;
    return ss.str();
  }
};

int main()
{
  int age, standard;
  string first_name, last_name;

  cin >> age >> first_name >> last_name >> standard;
  Student st;
  st.set_age(age);
  st.set_standard(standard);
  st.set_first_name(first_name);
  st.set_last_name(last_name);

  cout << st.get_age() << "\n";
  cout << st.get_last_name() << ", " << st.get_first_name() << "\n";
  cout << st.get_standard() << "\n";
  cout << "\n";
  cout << st.to_string();

  return 0;
}
