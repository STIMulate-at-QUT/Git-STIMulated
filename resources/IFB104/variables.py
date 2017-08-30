#Numerical Variables

int_var=10
float_var = 10.0
complex_var = complex(10,10)

#Strings
string_var="some string 123"

#List Types
list_var = [1,2,3,4,5,6,7,8,9,10]
list_string_var = ["A","B","C","D"]
mixed_list = [1,"A"]

#Tuple
tuple_var = (1,1)
mixed_tuple = (1,"A")

print("Numerical Types")
print("10",type(int_var))
print("10.0", type(float_var))
print("10+10i", type(complex_var))

print("\nString Types")
print("some string 123",type(string_var))

print("\nList Types")
print("[1,2,3,4,5,6,7,8,9,10]", type(list_var))
print("[1,2,3,4,5,6,7,8,9,10], element 0", type(list_var[0]))
print("[A,B,C,D], element 0", type(list_string_var[0]))
print("[A,B,C,D], element 1", type(list_string_var[1]))
print("[1,A], element 1", type(mixed_list[1]))

print("\nTuple Types")
print("(1,1)",type(tuple_var))
print("(1,1), element 0", type(tuple_var[0]))
print("(1,A), element 0", type(mixed_tuple[0]))
print("(1,A), element 0", type(mixed_tuple[1]))
