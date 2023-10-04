Given a string in roman no format (s)  your task is to convert it to an integer . Various symbols and their values are given below.
I 1
V 5
X 10
L 50
C 100
D 500
M 1000

Example 1:

Input:
s = V
Output: 5
Example 2:

Input:
s = III 
Output: 3

Solution:

int romanToDecimal(string &str) {
        // code here
        int sum = 0 ;
        for(int i = 0; i<str.size(); i++){
            if(str[i]=='C' && str[i+1]=='M'){
                sum += 900;
                ++i;
            }
            else if(str[i]=='M'){
                sum += 1000;
            }
            else if(str[i]=='C' && str[i+1]=='D'){
                sum += 400;
                ++i;
            }
            else if(str[i] == 'D'){
                sum += 500;
            }
            else if(str[i]=='X' && str[i+1]=='C'){
                sum += 90;
                ++i;
            }
            else if(str[i] == 'C'){
                sum += 100;
            }
            else if(str[i]=='X' && str[i+1]=='L'){
                sum += 40;
                ++i;
            }
            else if(str[i] == 'L'){
                sum += 50;
            }
            else if(str[i]=='I' && str[i+1]=='X'){
                sum += 9;
                ++i;
            }
            else if(str[i] == 'X'){
                sum += 10;
            }
            else if(str[i]=='I' && str[i+1]=='V'){
                sum += 4;
                ++i;
            }
            else if(str[i] == 'V'){
                sum += 5;
            }
            else{
                sum += 1;
            }
        }
        return sum;
    
        
    }
