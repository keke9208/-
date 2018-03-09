#include <stdio.h>
#include <stdlib.h>

#define A 1
#define B 2
#define C 3
#define D 4

void tryans(int);

_Bool test(void);
_Bool test1(void);
_Bool test2(void);
_Bool test3(void);
_Bool test4(void);
_Bool test5(void);
_Bool test6(void);
_Bool test7(void);
_Bool test8(void);
_Bool test9(void);
_Bool test10(void);
_Bool(*testfunc[10])() = { test1,test2,test3,test4,test5,test6,test7,test8,test9,test10 };

int ans[10];

int main()
{
  tryans(10);
  printf("done");
  getchar();
  return 0;
}

void tryans(int question)
{
  if (--question < 0) {
    if (test())
    {
      for (int i = 0; i < 10; i++)
      {
        printf("%c", ans[i] + 64);
      }
      printf("\n");
    }
    return;
  }
  for (int option = A; option <= D; option++) {
    ans[question] = option;
    tryans(question);
  }
}

_Bool test()
{
  for (int i = 0; i < 10; i++)
  {
    if (!testfunc[i]())
    {
      return 0;
    }
  }
  return 1;
}
_Bool test1()
{
  return 1;
}
_Bool test2()
{
  switch (ans[1])
  {
  case A:
    if (ans[4] == C)
    {
      return 1;
    }
    break;
  case B:
    if (ans[4] == D)
    {
      return 1;
    }
    break;
  case C:
    if (ans[4] == A)
    {
      return 1;
    }
    break;
  case D:
    if (ans[4] == B)
    {
      return 1;
    }
    break;
  }
  return 0;
}
_Bool test3()
{
  switch (ans[2])
  {
  case A:
    if (ans[5] == ans[1] && ans[1] == ans[3] && ans[5] != ans[2])
    {
      return 1;
    }
    break;
  case B:
    if (ans[2] == ans[1] && ans[1] == ans[3] && ans[2] != ans[5])
    {
      return 1;
    }
    break;
  case C:
    if (ans[2] == ans[5] && ans[5] == ans[3] && ans[1] != ans[2])
    {
      return 1;
    }
    break;
  case D:
    if (ans[2] == ans[5] && ans[5] == ans[1] && ans[3] != ans[2])
    {
      return 1;
    }
    break;
  }
  return 0;
}
_Bool test4()
{
  switch (ans[3])
  {
  case A:
    if (ans[0] == ans[4])
    {
      return 1;
    }
    break;
  case B:
    if (ans[1] == ans[6])
    {
      return 1;
    }
    break;
  case C:
    if (ans[0] == ans[8])
    {
      return 1;
    }
    break;
  case D:
    if (ans[5] == ans[9])
    {
      return 1;
    }
    break;
  }
  return 0;
}
_Bool test5()
{
  switch (ans[4])
  {
  case A:
    if (ans[7] == A)
    {
      return 1;
    }
    break;
  case B:
    if (ans[3] == B)
    {
      return 1;
    }
    break;
  case C:
    if (ans[8] == C)
    {
      return 1;
    }
    break;
  case D:
    if (ans[6] == D)
    {
      return 1;
    }
    break;
  }
  return 0;
}
_Bool test6()
{
  switch (ans[5])
  {
  case A:
    if (ans[1] == ans[7] && ans[3] == ans[7])
    {
      return 1;
    }
    break;
  case B:
    if (ans[0] == ans[7] && ans[5] == ans[7])
    {
      return 1;
    }
    break;
  case C:
    if (ans[2] == ans[7] && ans[9] == ans[7])
    {
      return 1;
    }
    break;
  case D:
    if (ans[4] == ans[7] && ans[8] == ans[7])
    {
      return 1;
    }
    break;
  }
  return 0;
}
_Bool test7()
{
  int sumA = 0;
  int sumB = 0;
  int sumC = 0;
  int sumD = 0;
  for (int i = 0; i < 10; i++)
  {
    switch (ans[i])
    {
    case A:
      sumA++;
      break;
    case B:
      sumB++;
      break;
    case C:
      sumC++;
      break;
    case D:
      sumD++;
      break;
    }
  }
  switch (ans[6])
  {
  case A:
    if (sumA <= sumB && sumA <= sumC && sumA <= sumD)
    {
      return 1;
    }
    break;
  case B:
    if (sumB <= sumA && sumB <= sumC && sumB <= sumD)
    {
      return 1;
    }
    break;
  case C:
    if (sumC <= sumA && sumC <= sumB && sumC <= sumD)
    {
      return 1;
    }
    break;
  case D:
    if (sumD <= sumA && sumD <= sumB && sumD <= sumC)
    {
      return 1;
    }
    break;
  }
  return 0;
}
_Bool test8()
{
  switch (ans[7])
  {
  case A:
    if (abs(ans[6] - ans[0]) != 1)
    {
      return 1;
    }
    break;
  case B:
    if (abs(ans[4] - ans[0]) != 1)
    {
      return 1;
    }
    break;
  case C:
    if (abs(ans[1] - ans[0]) != 1)
    {
      return 1;
    }
    break;
  case D:
    if (abs(ans[9] - ans[0]) != 1)
    {
      return 1;
    }
    break;
  }
  return 0;
}
_Bool test9()
{
  switch (ans[8])
  {
  case A:
    if ((ans[0] == ans[5]) ^ (ans[5] == ans[4]))
    {
      return 1;
    }
    break;
  case B:
    if ((ans[0] == ans[5]) ^ (ans[9] == ans[4]))
    {
      return 1;
    }
    break;
  case C:
    if ((ans[0] == ans[5]) ^ (ans[1] == ans[4]))
    {
      return 1;
    }
    break;
  case D:
    if ((ans[0] == ans[5]) ^ (ans[8] == ans[4]))
    {
      return 1;
    }
    break;
  }
  return 0;
}
_Bool test10()
{
  int sumA = 0;
  int sumB = 0;
  int sumC = 0;
  int sumD = 0;
  for (int i = 0; i < 10; i++)
  {
    switch (ans[i])
    {
    case A:
      sumA++;
      break;
    case B:
      sumB++;
      break;
    case C:
      sumC++;
      break;
    case D:
      sumD++;
      break;
    }
  }
  int max = sumA;
  int min = sumA;
  if (sumB > max)
  {
    max = sumB;
  }
  if (sumC > max)
  {
    max = sumC;
  }
  if (sumD > max)
  {
    max = sumD;
  }
  if (sumB < min)
  {
    min = sumB;
  }
  if (sumC < min)
  {
    min = sumC;
  }
  if (sumD < min)
  {
    min = sumD;
  }
  int difference = max - min;
  switch (ans[9])
  {
  case A:
    if (difference == 3)
    {
      return 1;
    }
    break;
  case B:
    if (difference == 2)
    {
      return 1;
    }
    break;
  case C:
    if (difference == 4)
    {
      return 1;
    }
    break;
  case D:
    if (difference == 1)
    {
      return 1;
    }
    break;
  }
  return 0;
}

