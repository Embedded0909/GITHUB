## Phần 01 Git config
Set config
```cpp
git config --global user.name "Name"
git config --global user.email "Email"
```
Get config
```cpp
git config --global user.name
git config --global user.email
```
## Phần 02 Creating repo
```cpp
git init
```
## Phần 03 Staging
Check status
```cpp
git status
```
To add a file to staging area
```cpp
git add FILE_NAME
```
To remove a file from staging area
```cpp
git rm --cached FILE_NAME
```
To add all file to staging area
```cpp
git add .
```

## Phần 04 Committing
To show all the commits with detail
```cpp
git log
```
To show all(n) the commits in one line
```
git log --oneline
```
```
git log --oneline -n
```
To commit
```cpp
git commit -m "comment"
```
## Phần 05 Git stash

## Phần 06 Git ignore
## Phần 07 Reverting & Reset
## Phần 08 Branch
## Phần 09 Merging branch
## Phần 10 Git rebase