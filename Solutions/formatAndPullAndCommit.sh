clang-format-3.9 tem > $1
rm tem
sudo git pull origin master
git add $1
git commit -m "$1"
