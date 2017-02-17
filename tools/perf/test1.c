void longa() 
{ 
  int i,j; 
  for(i = 0; i < 10000000; i++) 
    j=i; //am I silly or crazy? I feel boring and desperate. 
}

void funcA() 
{ 
  int i; 

  for(i=0 ; i < 10; i++) 
       longa(); 
}

void funcB() 
{ 
  int i; 

  for(i = 0; i< 100; i++) 
     longa(); 
}

int main(void) 
{ 
  funcA(); 
  funcB(); 
} 
