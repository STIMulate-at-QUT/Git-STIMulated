def my_function():
    print("Hello World")
    
def my_func_with_param(some_param):
    print(some_param)
    
print("This Demonstrates How to use Python Functions\n")

## Call to my_function
my_function()
print()
## Passing a parameter to a function
my_func_with_param("I've got a parameter")

## Passing a different type to the function
my_func_with_param(10)

print()
## Does not run because of the nature of Python
my_func_below()

def my_func_below():
    print("I am defined below but called before")