#!/bin/bash -e

if [ ! -n "$1" ] ;then
    echo "you have not input the file name!"
    exit
else
    echo "The file name you've input is ______$1______"
fi

if echo "$1" | grep -q ".cpp"
then
    clang-format-4.0 tem >> $1
    cd ~/GithubRepositories/MyLeetCodeSolutions/Solutions && rm tem 
elif echo "$1" | grep -q ".go"
then
    sed -i "1ipackage main\n" tem
    mv tem $1
    go fmt $1
else
    echo 'ERROR!This script only support Go and Cpp files'
    exit 1
fi

echo "format $1 done, start commit..."

git pull origin master
git add $1
git commit -m "$1"
git push origin master
