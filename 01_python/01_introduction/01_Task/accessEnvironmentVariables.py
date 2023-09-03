import os

variable_name = "PROCESSOR_LEVEL"       # stroe the name of the variable to be searched
if variable_name in os.environ:         # if the name is one of the environmental variables
    variable_value = os.environ[variable_name]
    print(f"The value of {variable_name} is: {variable_value}")
else:
    print(f"The environment variable {variable_name} is not set.")
