// Using a switch statement with 4 'return' statements, finish
// the function below with the following behavior:
//    if -3 <= x < 0 return "negative"
//    if x == 0 return "zero"
//    if 0 < x <= 3 return "positive"
//    otherwise return "out-of-range"

const char* GetLimitedSign(int x)
{
  switch(x)
  {
    case -3:
    case -2:
    case -1:
      return "negative";
    case 0:
      return "zero";
    case 1:
    case 2:
    case 3:
      return "positive";
    default:
      return "out-of-range";
  }
}