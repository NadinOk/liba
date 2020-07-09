char *mx_strnew(const int size);
char *mx_nbr_to_hex(unsigned long nbr){
  int n = 1;
  unsigned int tmp = nbr;
  char *res = mx_strnew(n); 
  int i;
  while(tmp > 0) {
    tmp /= 16;
    n++;
  }
  for(i = n -1; i >= 0; i--){
    if((nbr % 16 >= 10 && nbr % 16 <= 15)){
      res[i] = nbr % 16 % 9 + 96;
    }
    else{
      res[i] = nbr % 16 + 48;
    }
    nbr /= 16;
  }
  return res;
}
