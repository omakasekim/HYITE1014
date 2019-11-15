#include <stdio.h>
#include <math.h>

float add_func(float, float);
float minus_func(float, float);
float mult_func(float, float);
float div_func(float, float);
float mod_func(float, float);
float exp_func(float, float);

float add_func(float a, float b)
{
	a+b;
}

float minus_func(float a, float b)
{
    a-b;

}

float mult_func(float a, float b)
{
	a*b;

}

float div_func(float a, float b)
{
	a/b;

}

float mod_func(float a, float b)
{
	fmod(a,b);

}
float exp_func(float a, float b)
{
	pow(a,b);

}

int main()
{
	FILE*ptr;
	ptr = fopen("result.txt", "w");
		
    int choice;
	float op1, op2, result;
	char op;

   	printf("============================\n");
	printf("operator: +, -, *, /, %%, ^\n");
	printf("============================\n");
	printf("operand>>");
	scanf("%f", &op1);
	printf("\n");
	
	while(1)
	{
	    printf("operator >> ");
	    scanf(" %c", &op);
	    printf("\n");
	    printf("operand>>");
	    scanf("%f", &op2);
	    
	     while(1){
	      
	        switch (op){
	            
	            case '+':
	                float add_func();
	                return result;
	            case '-':
	                float minus_func();
	                return result;
	            case '*':
	                float mult_func();
	                return result;
	            case '/':
	                float div_func();
	                return result;
	            case '%':
	                float mod_func();
	                return result;
	            case '^':
	                float exp_func();
	                return result;
	        }     
	        printf("Result >>");
            printf("%.2f\n", result);
	        printf("operator >> ");
	        scanf(" %c", &op);
	        printf("\n");
	        printf("operand >>");
	        scanf("%f", &op2);
	    	
	    	op1 = result;
	    	
	    	fclose(ptr);
	     }
	    

	
	}
	return 0;
}


