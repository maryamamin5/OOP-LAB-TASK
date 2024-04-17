#include <iostream>
#include <string>
using namespace std;
class User
{
public:
  int id;
  string name;
  int cnic;
  string rollno;
  //User(){
  };
  User(int id,string name,int cnic,string rollno) : id(id),name(name),cnic(cnic),rollno(rollno){};
  User(const User &user)
  {
    id = user.id;
    name = user.name;
    cnic = user.cnic;
    rollno = user.rollno;
  };
};

class Order : public User
{
public:
  int oid;
  string items;
  //Order(){};
  Order(int oid, const User &from, string items) : oid(oid), items(items), User(from){};
};

int main()
{
//  Order allOrders[10];
  User user1(101, "Ali", 712312, "23p0030");
  Order order1(12, user1, "[1022,31232,12312]");
  cout << "Order 1" << endl;
  cout << "Oders id :" << order1.oid<<endl;
  cout << "Oders from :" << order1.name<<endl;
  cout << "Oders items :" << order1.items<<endl;
  return 0;
}