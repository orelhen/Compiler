
/*code example*/
public void foo(args>> int: x, y, z; float: f) {
if (x > y) { 
x <- x + y;
}
else {
y <- x + y + z;
z <- y * 2;
f <- z;
}
}
private char goo(): static{
var char*: x;   
var int: x; 
var int*: y; 
 
x <- 5; 
y <- &x;
              
x <- 6;      
z <- *y;    
    
y <- null;



return 'a';
}








/* expected output*/

/*
)CODE 
(FUNC 
 foo 
 NON-STATIC 
 PUBLIC 
 (ARGS 
  (INT  
x  
y  
z 
) 
  (FLOAT  
f 
) 
 ) 
(RETURN VOID) 
 (BODY  
(IF-ELSE 
     (>  
x  
y 
      )  
     (BLOCK  
  (ASS x  
   (+  
x  
y 
) 
  ) 
      ) 
     (BLOCK  
  (ASS y  
    (+  
(+  
x  
y 
)  
     z 
    ) 
  ) 
 
 
  ( 
   (ASS  z  
          (*  
y  
2 
) 
       ) 
       (ASS  f  
z 
) 
  ) 
     ) 
 ) 
) 
 ) 
 (FUNC 
  goo 
  STATIC 
  PRIVATE 
  (ARGS NONE) 
  (RET CHAR) 
  (BODY 
   (RET 'a') 
  ) 
 ) 
)*/
