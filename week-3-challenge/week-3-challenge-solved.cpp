#include <iostream>

class Pair {
  public:
    int *pa,*pb;
    Pair(int, int);
    Pair(const Pair &);
    ~Pair();
};
 
 
 Pair::Pair(int a, int b){
   pa = new int;
   pb = new int;
   *pa = a;
   *pb = b;
 }

 Pair::Pair(const Pair &p){
   pa = new int;
   pb = new int;
   *pa = *(p.pa);
   *pb = *(p.pb);
 }
 
 Pair::~Pair(){
   delete pa;
   delete pb;
 }
 
 /* Here is a main() function you can use
  * to check your implementation of the
  * class Pair member functions.
  */
  
int main() {
  Pair p(15,16);
  Pair q(p);
  Pair *hp = new Pair(23,42);
  
  std::cout << p.pa << ", " << p.pb << std::endl;
  std::cout << q.pa << ", " << q.pb << std::endl;
  std::cout << *(q.pa) << *(q.pb) << std::endl;

  std::cout << *(hp->pa) << *(q.pb) << std::endl;
  delete hp;
  
  std::cout << "If this message is printed,"
    << " at least the program hasn't crashed yet!\n"
    << "But you may want to print other diagnostic messages too." << std::endl;
  return 0;
}