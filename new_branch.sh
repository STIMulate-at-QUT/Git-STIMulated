#!/bin/bash

echo "What is the Name of the branch?: "
read name

git branch "$name" bd0bb79b742c2394a1a8c16c9ab5c70fa3391a84

echo "Branch with name $name created successfully"
