if [ ! -n "$1" ] ;then
    echo "you have not input the file name!"
    exit
else
    echo "the file name you've input is ______$1______"
fi
clang-format-3.9 tem > $1
rm tem
sudo git pull origin master
git add $1
sudo git commit -m "$1"
sudo git push origin master
