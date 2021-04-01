// Finish the function below using one 'if', one 'else if' and
// one 'else' statement. Its behavior should be as follows:
//    if 'to_compare' and 'basis' are equal, return "equal to"
//    if 'to_compare' is greater than 'basis', return "greater than"
//    if 'to_compare' is less than 'basis, return "less than"

const char* GetRelativity(int to_compare, int basis)
{
  if(to_compare == basis)
    return "equal to";
  else if(to_compare > basis)
    return "greater than";
  else
    return "less than";
}