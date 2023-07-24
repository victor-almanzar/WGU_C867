#!/bin/bash

# Path to your tasks.json file
file_path="/workspaces/WGU_C867/.vscode/tasks.json"

# Check if the file is in debug mode
if grep -q '// "-ggdb"' "$file_path"; then
    # Switch to release mode: uncomment -O2 and -DNDEBUG, comment -ggdb
    sed -i 's|// "-ggdb"|"-ggdb"|g; s|"-O2"|// "-O2"|g; s|"-DNDEBUG"|// "-DNDEBUG"|g' "$file_path"
    echo "DEBUG MODE"
else
    # Switch to debug mode: uncomment -ggdb, comment -O2 and -DNDEBUG
    sed -i 's|"-ggdb"|// "-ggdb"|g; s|// "-O2"|"-O2"|g; s|// "-DNDEBUG"|"-DNDEBUG"|g' "$file_path"
    echo "RELEASE MODE"
fi
