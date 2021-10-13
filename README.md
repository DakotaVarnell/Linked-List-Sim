# Linked-List-Sim
-Program written in C++ that simulates the functionality of a linked list by utilizing the properties of arrays. 

NOTES
######################################################################################
-Program begins by filling an array of size 25 with values 1 - 25
-We then utilize the random shuffle function included in the <random> library
-The Shuffle function will allow us to randomize the array with NO duplicates
-We then "Push" the values 1-10 into the linked list stack and display said values
-After displaying the values that we pushed in, we will alternate between pushing
 values and displaying values
-The alternation between push and display allows us to mimic how a linked list stack would
 function in practice
 #######################################################################################
 
 
 Function Descriptions
 #######################################################################################
 
 Empty
 -----------------------------------------------------------------------------------------
 IF our value at top is -1 or NULL that shows that there are no other elements in our stack.
 If our value is anything outside of -1 that means that our stack has elements in it and is
 not empty. 
 ------------------------------------------------------------------------------------------


  Push
 -----------------------------------------------------------------------------------------
 The empty function will check if the top of the stack is -1/NULL, -1 will be our checking
 value. The top value will be -1 if there are no other elements inside of the stack. If we
 are at NULL, we will set the data at the index in shuffled_array to the element inserted. 
 We then set the next at the index stored in shuffled array equal to the previous top of 
 the stack. Then we set the top to the new index stored in the shuffled array. 
 If top is NOT equal to NULL and there are other elements in the stack we just do the same
 thing as before, the code is set up to work for both cases. 
 -----------------------------------------------------------------------------------------
 
 
 Top
 -----------------------------------------------------------------------------------------
 Strictly displays the value located at the top of the stack
 -----------------------------------------------------------------------------------------
 
 
 Pop
 -----------------------------------------------------------------------------------------
 We loop through the entire stack waiting for index i and top to be equal, in which case we
 will change our temporary value to the value that is stored in the current top's next
 "pointer". We then assign a NULL value to the current top's next after collecting it's value.
 We finally assign a NULL value to the current top's data that makes it functionally empty 
 and break the loop.
 
 
 For our second loop we use it to search the stack for the previous top's next value and 
 determine if it is equal to our i value. If it is equal to our i value, we have found our
 new top value, we then set the new top equal to the current index and break the loop. 
 ------------------------------------------------------------------------------------------
 
 
 Display
 ---------------------------------------------------------------------------------------------
 We begin by setting our temporary variable equal to the top of our stack. We then set a while
 loop to iterate while our temp variable is not equal to NULL. We then begin displaying each 
 part of our stack iteratively, we then set our temp equal to the next value allowing it to 
 continue throughout our stack simulation. 
 ---------------------------------------------------------------------------------------------
 
 
 
 
 
 
 
 
