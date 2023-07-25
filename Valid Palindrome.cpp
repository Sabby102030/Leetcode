class Solution {
private:
   bool isvalid(char ch){
       if((ch >= 'a' && ch <='z') || (ch >= 'A' && ch <='Z') || (ch >= '0' && ch <='9')){
           return true;
       }
       return false;
   }
    
char ToLowerCase(char ch){
    if((ch >= 'a' && ch<='z') || (ch >='0' && ch <='9')){
        return ch;
    }
    else{
       return ch - 'A' + 'a';
    
    }
}
    
bool ValidPalindrome(string s) {
    int st=0;
    int e=s.length()-1;
    
    while(st<=e){
        if(s[st] != s[e]){
            return false;
        }
        else{
            st++;
            e--;
            
        }
        
    }
    return true;
}   
    
public:
    bool isPalindrome(string s) {
      string temp ="";
          
          //store in temp is is valid case
      for(int i=0;i<s.length();i++){
          if(isvalid(s[i])){
              temp.push_back(s[i]);
          }
      }
        //convert into lower case by callin lower case function
          for(int i=0;i<temp.length();i++){
              temp[i] = ToLowerCase(temp[i]);
          }
        
      return ValidPalindrome(temp);
       } 
     
    
};
