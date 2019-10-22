#include<stdio.h> 

#include<stdlib.h> 
#include<string.h> 
 
char MainArr[20]; 
int sr=1; 
char copy[20]; 
int k; 
 
/*int CanCome(char ch,char * arr,int j){ 
 
int i; 
 
for(i=0;i<j;i++){ 
 
 
if(arr[i]==ch) 
 
 
 
return 0; 
 
} 
 
return 1; 
} */ 
 
//int CheckStatus(copy[pos],newarr,i,index) 
int CheckStatus(char ch,char *newarr,int i,int index){ 
 
for(;i<index;i++) 
 
 
if(ch==newarr[i]) 
 
 
 
return 0; 
 
return 1; 
} 
 
 int cancome(char ch,char newarr[],int pos){ 
 
 int i; 
 
for(i=0;i<pos;i++) 
 
 
if(ch==newarr[i]) 
 
 
 
return 0; 
 
return 1; 
 } 
  
  
 void print(char newarr[], int index){ 
 
 int i; 
 
 printf("%3d- ",sr); 
 
 ++sr; 
 
 for(i=0;i<index;i++) 
 
 
 printf("%c",newarr[i]); 
 
 printf("\n"); 
 
  
 } 
  
  
  
  int InsertIntoAnagram(int pos,char newarr[],int index) 
 { 
 
int i,j; 
 
//printf("Entered the InsertInto\n"); 
 
for(i=index;i>=1;i--) 
 
{ 
 
 
if((CheckStatus(copy[pos],newarr,i,index))) 
 
 
{ 
 
 
 
//printf("the lenght is-%d\n",strlen(newarr)); 
 
 
 
for(j=strlen(newarr);j>=i;j--) 
 
 
 
 
newarr[j]=newarr[j-1]; 
 
 
 
newarr[j+1]=copy[pos]; 
 
 
 
//printf("the lenght after increment %d\n",strlen(newarr)); 
 
 
 
if(pos==(k-1)) 
 
 
 
{ 
 
 
 
 
print(newarr,index+1); 
 
 
 
 
//return 0; 
 
 
 
} 
 
 
 
else{ 
 
 
 
 
 
 
 
 
 
InsertIntoAnagram(pos+1,newarr,index+1); 
 
 
 
} 
 
 
 
 
 
 
 
 
 
for(j=i;j<strlen(newarr);j++) 
 
 
 
 
newarr[j]=newarr[j+1]; 
 
 
 
newarr[j]='\0'; 
 
 
 
//printf("This is the test %d - %s",i,newarr); 
 
 
} 
 
} 
 
 
 
return 0; 
} 
  
 int PrintAnagram(int pos,char newarr[],int index) 
 { 
 
int i; 
 
 
 
for(i=0;i<index;i++) 
 
{ 
 
 
if(cancome(MainArr[i],newarr,pos)) 
 
 
{ 
 
 
 
newarr[pos]=MainArr[i]; 
 
 
 
if(pos==(index-1)) 
 
 
 
{ 
 
 
 
 
if(strlen(copy)==0) 
 
 
 
 
 
print(newarr,index); 
 
 
 
 
else 
 
 
 
 
 
InsertIntoAnagram(0,newarr,index); 
 
 
 
 
return 0; 
 
 
 
} 
 
 
 
else{ 
 
 
 
 
 
 
 
 
 
PrintAnagram(pos+1,newarr,index); 
 
 
 
} 
 
 
 
 
 
 
} 
 
} 
 
 
 
return 0; 
} 
 
 
void main(){ 
 
char newarr[20]; 
 
char input[20]; 
 
int i,j,l; 
 
printf("Enter the string\n"); 
 
scanf("%s",input); 
 
l=strlen(input); 
 
for(i=0,j=0,k=0;i<l;i++){ 
 
 
if(cancome(input[i],MainArr,j)){ 
 
 
 
MainArr[j]=input[i]; 
 
 
 
j++; 
 
 
} 
 
 
else{ 
 
 
 
copy[k]=input[i]; 
 
 
 
k++; 
 
 
} 
 
} 
 
//MainArr[j]='\0'; 
 
//copy[k]='\0'; 
 
printf("The value of arr is- %s\n",MainArr); 
 
printf("The value of copy is - %s\n",copy); 
 
PrintAnagram(0,newarr,j); 
 
 
} 
