/**
 * File: main.cpp
 * Author(s): Pierre Abraham Mulamba
 * Creation (modification) date: 20210322 (20210322)
 * Description: Driver
 */


#include "queue.h"
#include <iostream>

int main(int argc, char *argv[])
{
  try{
    std::cout << "\nPROGRAM TO IMPLEMENT A QUEUE DATA STRUCTURE OF PRIME NUMBERS\n";
    Queue queue;

    std::cout << "\nEnter the limit of prime numbers: ";
    int limit = 0;
    std::cin >> limit;

    std::cout << "\nCREATING A QUEUE OF PRIME NUMERS\n";
    for(int i = 2; i < limit; i++){
      int n_divisors = 0;
      for(int j = 2; j <= i; j++){
        if(i % j == 0) n_divisors += 1;
      }
      if(n_divisors < 2)queue.enqueue(i);
    }

    queue.print();

    std::cout << "\nENQUEUEING A NEW NODE TO THE QUEUE\n";
    std::cout << "Enter the value of the node to enqueue: ? ";
    int value_to_enqueue = 0;
    std::cin >> value_to_enqueue;
    queue.enqueue(value_to_enqueue);
    queue.print();

    std::cout << "\nADDING A NEW NODE TO THE QUEUE \n";
    std::cout << "\nEnter the value of the node to add: ? ";
    int value_to_add = 0;
    std::cin >> value_to_add;
    queue.enqueue(value_to_add);
    queue.print();

    std::cout << "\nTESTING THE POP OF A NODE FROM THE QUEUE\n";
    int value_to_pop = 0;
    value_to_pop = queue.dequeue();
    std::cout <<"Pop the top node value : " << value_to_pop << '\n';
    queue.print();

    std::cout << "\nProgram Ended Successfully\n";
    return 0;
  }
  catch(...){
    std::cerr << "\nUnknown Exception Thrown\n";
  }
}
