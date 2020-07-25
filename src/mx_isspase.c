#include "../inc/libmx.h"

bool mx_isspace(int sym){
  
  if(sym == ' ' || sym == '\t' || sym == '\n' || sym == '\v' || sym == '\f' || sym == '\r'){
    return 1;
  }
  else{
    return 0;
  }
}
