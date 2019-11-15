#include<stdio.h> 
#include <cctype>



int main(void) {
    FILE *fps;  
 
    int nowParagraphNum = 0;
 
    char cha;
    int wordCount = 0;  
    int charCount = 0;  
	int lettCount = 0;
    int nowStateInWord = 0;  
    fps = fopen("article.txt", "rt");  
    if (fps == NULL) {  
        return 1;
    }

 	while ( (cha = fgetc(fps)) != EOF ){
    
        if (cha >= 'A' && cha <= 'z') { 
            charCount++;

            if (nowStateInWord == 0) {
                nowStateInWord = 1;
            }
        }
        else {
            if (nowStateInWord == 1) {
                if (cha == '(') {
                    nowStateInWord = 2;
                }
                else if (cha == ' ' || cha == ',' || cha == '.') {
                    nowStateInWord = 0;
                    wordCount++;
                }
            }
            else if (nowStateInWord == 2) {
                if (cha == ')') {
                    wordCount++;
                    nowStateInWord = 0;
                }
            }
        }
        if (32 < cha && cha < 126 ){lettCount++;}
        
        int alpha[26] = {0};
        
        for (int i = 'A' ; i < 'z' ; i++)
		{
			if (cha >= 'a' && cha <= 'z') 
				{
				int t = int(cha) - 97; 
				alpha[t] = alpha[t] + 1;
			}
        	if (cha >= 'A' && cha <='Z')
        		{
        		int t = int(cha) - 65;
        		alpha[t] = alpha[t] + 1;
				}
		}
        
        if (cha == '\n') {
            nowParagraphNum++;
        }

    }
    fclose(fps);


    nowParagraphNum++;
 
    printf("\n\nalphabet Num : %d,  word Num : %d, nletter Num : %d \n\n", charCount, wordCount, lettCount);
    printf("\n");
 

    return 0;
}


