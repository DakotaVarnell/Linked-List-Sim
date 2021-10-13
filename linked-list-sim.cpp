//Dakota Varnell
//Linked List Simulator
//07/17/2021

#include <iostream>
#include <ctime>
#include <iomanip>
#include <random>

using namespace std;

//Structure for creating the nodes of the stack
struct node
{
	int data;
	int next;
};

//Declares all necessary variables and arrays for the program to function
node stack[26][2];//Creates the array to be accessed by all functions
int top = -1;//creates the top variable to be accessed by all functions
int counter = 0;//Counter to increment each value of shuffled array
int shuffled_array[26];//Array to hold the sorted and then randomized array values


//Function Headers
bool Empty(); //Checks if stack is empty
void Push(int);//Pushes value on to the top of the stack
void Top();//Returns the value at the top of the stack
void Pop();//Takes the value off the top of the stack
void Display();//Displays all elements of the stack

int main()
{
	//Sets the seed of the random function to allow the random shuffle to shuffle the sorted array differently each time
	srand(time(0));

	//Random Number Generator for the random indexes of the linked stack
	for (int i = 0; i < 26; i++)
	{
		shuffled_array[i] = i;//Assigns the values of 0-25 to each index
	}
	random_shuffle(shuffled_array, shuffled_array + 26);//Shuffles all the values of the sorted array

	//Function Calls
	Push(1);
	Push(2);
	Push(3);
	Push(4);
	Push(5);
	Push(6);
	Push(7);
	Push(8);
	Push(9);
	Push(10);

	Display();
	
	Push(20);
	Display();
	Push(30);
	Display();
	Push(40);
	Display();
	
	Top();
	Pop();
	Display();
	Top();
	Pop();
	Display();

	Top();
	Pop();
	Display();
}


bool Empty()
{
	bool empty = 0;//sets empty bool to false

	if (top == -1)//Determines that there are no elements in the stack
	{
		empty = true;//Sets empty to true, showing that the stack is empty and returns the value
		return empty;
	}
	else //Determines that there are elements in the stack because empty is false meaning it has items + returns the value
		return empty;

};

void Push(int element)
{

	if (top == -1)//If top == -1/NULL, if there are no other elements in the stack
	{
		stack[shuffled_array[counter]][0].data = element;//Sets the data at index stored in shuffled_array to the element inserted
		stack[shuffled_array[counter]][1].next = top;//sets the next at index stored in shuffled array equal to the previous top of the stack
		top = shuffled_array[counter];//sets the top to the new index stored in the shuffled array
	}
	else//if there are other elements in the stack
	{
		stack[shuffled_array[counter]][0].data = element;//Same use as first element above
		stack[shuffled_array[counter]][1].next = top;//Same use as first element above
		top = shuffled_array[counter];//same use as first element above
		
	}

	counter++;//counter to increment everytime the push function is called to assign the random value to each part of stack[row]
}

void Top()
{
	cout << "Top: " << stack[top][0].data << endl;//displays the data at the top location
	cout << "\n\n";//Just for formatting
};

void Pop()
{
	int temp = 0;//Creates a temporary variable to store the next of the current top
	
	for (int i = 0; i < 26; i++)//loops through all of the stack
	{
		if (top == i)//if top == i
		{
			temp = stack[i][1].next;//change temp to the value that is stored in the current top's next
			stack[i][1].next = NULL;//assigns a NULL value to the current top's next after collecting the value
			stack[i][0].data = NULL;//assigns a null value to the current top's data part after collecting its value, ultimatetly "deleting" it
			break;//breaks the loop
		}
	}

	for (int i = 0; i < 26; i++)//loop to traverse the entire stack
	{
		if (temp == i)//if the previous top's next value is equal to i, then we have found our new top
		{
			top = i;//set our new top equal to the current index value
			break;//breaks the loop after value is found
		}
	}

	


};

void Display()
{
	cout << "Index  Data  Next" << endl;//Displays the columns

	int temp = top;//sets temporary variable equal to top of stack

	while (temp != -1)//while temp is not equal to the bottom of the list		
	{
		cout << setw(3) << temp;//display the current index													
		cout << setw(6) << stack[temp][0].data;//display the data at the current index
		cout << setw(6) << stack[temp][1].next << endl;//display the next value of the current index
		temp = stack[temp][1].next;//changes temp to the current values next
	}																					

	cout << "\n\n";//Spaces out the displays
	
};