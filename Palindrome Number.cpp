class Solution {
public: 
    bool isPalindrome(int x) {
        string start = to_string(x); //Converting integer to an string
        int end = start.length(); //size of an string from the end


     //Creating a for loop to check each string first and last elements whether they're matching or not.
        for(int i=0; i<end; i++){
            if(start[i] != start[end-1 -i]){
                return 0;      //returning false if elements of an string not matched i.e not a Palindrome number
            }
        }
        return 1;   //Else returning true if above condition fine i.e  is a Palindrome number
      
    }
};
