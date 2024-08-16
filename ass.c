#include<stdio.h>
equality(char a[], char b[],char c[])
{ 
 if (strcmp(a, b) == 0) {
        printf("str1 and str2 are equal\n");
    } else {
        printf("str1 and str2 are not equal\n");
    }

    // Compare str1 and str3
    if (strcmp(a, c) == 0) {
        printf("str1 and str3 are equal\n");
    } else {
        printf("str1 and str3 are not equal\n");
    }

}
stringCopy(char a[], char b[])
{
		stringCopy(b,a);
		printf("String b is : %s",b);
}
concat(char a[], char b[])
{
		int i,j;
		for(i=0;a[i]!='\0';i++);
	 	for(j=0;b[j]!='\0';j++)
	 	{
	 		a[i]=b[j];
	 		i++;
		}
		a[i]='\0';
		printf("marge : %s",a);
}
show(char a[])
{
	 printf("%s\n", a);
}
reverse(char a[])
{
	strrev(a);
	printf("Reversed string: %s\n", a);
}
palindrome(char *str)
{

int len = strlen(str);
int i;

// Ignore case for simplicity
for (i = 0; i < len / 2; i++) {
if (str[i] != str[len - i - 1]) {
return 0; // Not a palindrome
}
}
}
subString(char *str, int start, int len, char *substr) {
   int i;
     if (start < 0 || len < 0 || start + len > strlen(str)) {
    printf("Invalid input parameters.\n");
    return;
  }

  for (i = 0; i < len; i++) {
    substr[i] = str[start + i];
  }
  substr[len] = '\0'; // Null-terminate the substring
}



main()
{
	while(1)  //while use in infinate loop
	{
		printf("press 1 equality ");
		printf("\npress 2 stringCopy ");
		printf("\npress 3 concat ");
		printf("\npress 4 show ");
		printf("\npress 5 reverse ");
		printf("\npress 6 palindrome ");
		printf("\npress 7 subString ");	
		printf("\npress 8 exit");
		
		int ch;
		printf("\nenter the choise :");
		scanf("%d",&ch);
		
		if(ch==1)
		{
			char a[5],b[5],c[5];
			printf("Enter String 1  : ");
			scanf("%s",&a);
			printf("Enter String 2  : ");
			scanf("%s",&b);
			printf("Enter String 3  : ");
			scanf("%s",&c);
			equality( a,b,c);
			
		}
		else if(ch==2)
		{   
			char a[5],b[5];
			printf("Enter String : ");
			scanf("%s",&a);
			stringCopy(a,b);
		}
		else if(ch==3)
		{ 
			char a[5],b[5];
			printf("enter the name :");
			scanf("%s",&a);
			printf("enter the name 1 :");
			scanf("%s",&b);
			concat(a,b);
		}
		else if(ch==4)
		{
			char a[5];
			printf("enter the name :");
			scanf("%s",&a);
			show(a);
		}
		else if(ch==5)
		{
			char a[5];
			printf("enter the string :");
			scanf("%s",&a);
			reverse(a);
		}
		else if(ch==6)
		{
			char str[100];

			printf("Enter a string: ");
			scanf("%s", str);

			if (palindrome(str)) {
				printf("%s is a palindrome.\n", str);
			} else {
				printf("%s is not a palindrome.\n", str);
			}
			palindrome(str);
		}
		else if(ch==7)
		{
		char str[] = "Hello, World!";
  		char substr[10];

  		substring(str, 7, 5, substr);
  		printf("Substring: %s\n", substr);

  		return 0;
		}
		else if(ch==8)
		{
			printf("thank you!!");
			break;
		}
		else 
		{
			printf("invalid choise...");
			break;
		}
	}
}

