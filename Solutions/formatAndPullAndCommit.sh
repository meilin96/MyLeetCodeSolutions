clang-format-4.0 tem > $1
rm tem
git pull origin master
git add $1
git commit -m "$1"
git push origin master
