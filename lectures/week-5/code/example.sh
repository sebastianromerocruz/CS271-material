#!/bin/sh

# Create a new Python file called `example.py`
touch example.py

# Ensure the owner has writing permission for `example.py`
chmod o+w example.py

# Write the line `print('Hello, World!')` directly into `example.py`
echo "print('Hello, World!')" > example.py

# Run the file `example.py`
python3 example.py

# Lists the contents of the current directory in long, human form
ls -lh

# Lists the contents of `example.py`
cat example.py