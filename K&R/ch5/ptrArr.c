/*
 * File:ptrArr.c
 * -------------
 *  This programs illustrates aspects of pointer 
 *  and arrays two studying two useful functions: 
 *  strcpy(s,t), and strcmp(s,t), which compares      
 *  the character string s and t and returns negative,
 *  zero, or positive if s is lexicogaphically less than,
 *  equal to or greather than t.
 *  The value is obtained by subtracting the characters
 *  at the first position where s and t disagree.
 */


/* 
 * Function:strcpy(s, t)
 * Usage: strcpy(char s, char t);
 * ------------------------------
 *  copy t to s.
 *  Array subscript version
 */

void strcpy(char *s, char *t) {
   int i;

   i = 0;
   while ((s[i] = t[i]) != '\0') {
      i++;
   }  

}


/* strcpy: copy t to s; pointer version 1 */

void strcpy (char *s, char *t) {
   
   while (( *s = *t) != '\0') {
      s++;
      t++;
   }
}

/* strcpy: copy t to s; pointer version 2 */

void strcpy (char *s, char *t)  {

   while (( *s++ = *t++) != '\0') {
      ;
   }
}	

/* strcpy: copy t to s; pointer version 3 */

void strcpy (char *s, char *t)  {
   while (*s++ = *t++ )  {
      ;
   }
}


/*********************************************************************/

/* strcmp: return < 0 if s < t, 0 if s == t, > 0 if s > t */

int strcmp (char *s, char *t) {
   int i;

   for (i = 0; s[i] == t[i]; i++) {
      if (s[i] == '\0') {
        return 0; 
      }
   }
  
   return s[i] - t[i];   
}


/* The pointer version to strcmp */

int strcmp (char *s, char *t) {
   
   for  (;  *s == *t; s++, t++)  {
       if (*s == '\0') {
	 return 0;      
       }	       
   }
   
   return *s - *t;
}









