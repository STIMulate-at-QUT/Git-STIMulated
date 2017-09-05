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
print(int_var,"=",type(int_var))
print(float_var,"=", type(float_var))
print(complex_var,"=", type(complex_var))

print("\nString Types")
print(string_var,"=",type(string_var))

print("\nList Types")
print(list_var,"=", type(list_var))
print(list_var,", element 0 =", type(list_var[0]))
print(list_string_var,", element 0 =", type(list_string_var[0]))
print(list_string_var,", element 1 =", type(list_string_var[1]))
print(mixed_list,"element 0 = ",type(mixed_list[0]),", element 1 =", type(mixed_list[1]))

print("\nTuple Types")
print(tuple_var,"=",type(tuple_var))
print(tuple_var,", element 0 =", type(tuple_var[0]))
print(mixed_tuple,", element 0 =", type(mixed_tuple[0]))
print(mixed_tuple,", element 0 =", type(mixed_tuple[1]))