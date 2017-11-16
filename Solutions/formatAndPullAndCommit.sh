if [ ! -n "$1" ] ;then
    echo "you have not input the file name!"
    exit
else
    echo "The file name you've input is ______$1______"
fi
clang-format-4.0 tem > $1
rm tem
git pull origin master
git add $1
git commit -m "$1"
git push origin master
