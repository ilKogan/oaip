#include <iomanip>
#include <iostream>

void Task3() 
{
  int k;
  puts("You want bye car?\n 0.Yes\n 1.No");
  std::cin >> k;

  switch (k) {
  case 0:
  {
    puts("Well...What kind of car do you want?\n 1.Maybach 2.Toyota 3.Lada ");
    std::cin >> k;
    switch (k) {
    case 1: puts("You get a lot of MONEY?!?!!!?"); break;
    case 2: puts("Good"); break;
    case 3: puts("Are you fucking crazy?!"); break;
    }
  }
  case 1: puts("Well, then what are you doing here?"); break;
  default: puts("What? you say something wrong!");
    break;
  }
  system("pause");
}