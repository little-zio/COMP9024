#ifndef ARRAY2DOT_H
#define ARRAY2DOT_H

typedef char ArrayElementTy;

void Array2Dot(char *filePath, char *graphName,
               long *lastOccurrances, char *pattern, long m, char *text, long n,
               long indexPat, long startTxt);
               
void ArrayGenOneImage(char *graphName, char *fileName, long seqNo, 
                      long *lastOccurrances, char *pattern, long m, char *text, long n, 
                      long indexPat, long startTxt);               

#endif

