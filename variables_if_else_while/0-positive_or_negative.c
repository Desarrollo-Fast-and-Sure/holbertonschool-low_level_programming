Last login: Wed Nov  1 16:39:58 on ttys000
MacBook-Air-de-martha:~ marthaceciliaalzate$ pwd
/Users/marthaceciliaalzate
MacBook-Air-de-martha:~ marthaceciliaalzate$ ssh 9b3a91b9181f@9b3a91b9181f.04b4d16c.hbtn-cod.io
9b3a91b9181f@9b3a91b9181f.04b4d16c.hbtn-cod.io's password: 
Permission denied, please try again.
9b3a91b9181f@9b3a91b9181f.04b4d16c.hbtn-cod.io's password: 
root@9b3a91b9181f:/# cd 
root@9b3a91b9181f:~# cd holbertonschool-low_level_programming/
root@9b3a91b9181f:~/holbertonschool-low_level_programming# cd variables_if_else_while/
root@9b3a91b9181f:~/holbertonschool-low_level_programming/variables_if_else_while# ls
0-positive_or_negative.c  README.md
root@9b3a91b9181f:~/holbertonschool-low_level_programming/variables_if_else_while# pwd 
/root/holbertonschool-low_level_programming/variables_if_else_while
root@9b3a91b9181f:~/holbertonschool-low_level_programming/variables_if_else_while# 
root@9b3a91b9181f:~/holbertonschool-low_level_programming/variables_if_else_while# cd ..
root@9b3a91b9181f:~/holbertonschool-low_level_programming# cd hello_world/
root@9b3a91b9181f:~/holbertonschool-low_level_programming/hello_world# ls
0-preprocessor  2-assembler  4-puts.c    6-size.c  README.md
1-compiler      3-name       5-printf.c  a.out
root@9b3a91b9181f:~/holbertonschool-low_level_programming/hello_world# vi 6-size.c 
root@9b3a91b9181f:~/holbertonschool-low_level_programming/hello_world# cd ..
root@9b3a91b9181f:~/holbertonschool-low_level_programming# cd variables_if_else_while/
root@9b3a91b9181f:~/holbertonschool-low_level_programming/variables_if_else_while# ls -l
total 8
-rwxr--r-- 1 root root 465 Nov  2 10:13 0-positive_or_negative.c
-rwxr--r-- 1 root root  20 Nov  2 10:08 README.md
root@9b3a91b9181f:~/holbertonschool-low_level_programming/variables_if_else_while# ls
0-positive_or_negative.c  README.md
root@9b3a91b9181f:~/holbertonschool-low_level_programming/variables_if_else_while# git add .
root@9b3a91b9181f:~/holbertonschool-low_level_programming/variables_if_else_while# git commit -m "Entry Value"
[main 7cd7935] Entry Value
 2 files changed, 27 insertions(+)
 create mode 100755 variables_if_else_while/0-positive_or_negative.c
 create mode 100755 variables_if_else_while/README.md
root@9b3a91b9181f:~/holbertonschool-low_level_programming/variables_if_else_while# git push
Enumerating objects: 6, done.
Counting objects: 100% (6/6), done.
Delta compression using up to 2 threads
Compressing objects: 100% (4/4), done.
Writing objects: 100% (5/5), 648 bytes | 15.00 KiB/s, done.
Total 5 (delta 1), reused 0 (delta 0)
remote: Resolving deltas: 100% (1/1), completed with 1 local object.
To github.com:Desarrollo-Fast-and-Sure/holbertonschool-low_level_programming.git
   a6dfca3..7cd7935  main -> main
root@9b3a91b9181f:~/holbertonschool-low_level_programming/variables_if_else_while# betty 0-positive_or_negative.c 

========== 0-positive_or_negative.c ==========
0-positive_or_negative.c:6: ERROR: trailing whitespace
0-positive_or_negative.c:6: WARNING: Block comments use * on subsequent lines
0-positive_or_negative.c:9: WARNING: Block comments use a trailing */ on a separate line
0-positive_or_negative.c:25: ERROR: trailing whitespace
total: 2 errors, 2 warnings, 26 lines checked
main
root@9b3a91b9181f:~/holbertonschool-low_level_programming/variables_if_else_while# git add .
root@9b3a91b9181f:~/holbertonschool-low_level_programming/variables_if_else_while# git commit -m "Entry Value"
[main c023143] Entry Value
 1 file changed, 4 insertions(+), 4 deletions(-)
root@9b3a91b9181f:~/holbertonschool-low_level_programming/variables_if_else_while# git push
Enumerating objects: 7, done.
Counting objects: 100% (7/7), done.
Delta compression using up to 2 threads
Compressing objects: 100% (4/4), done.
Writing objects: 100% (4/4), 453 bytes | 453.00 KiB/s, done.
Total 4 (delta 2), reused 0 (delta 0)
remote: Resolving deltas: 100% (2/2), completed with 2 local objects.
To github.com:Desarrollo-Fast-and-Sure/holbertonschool-low_level_programming.git
   7cd7935..c023143  main -> main
root@9b3a91b9181f:~/holbertonschool-low_level_programming/variables_if_else_while# betty 0-positive_or_negative.c 

========== 0-positive_or_negative.c ==========
0-positive_or_negative.c:6: ERROR: trailing whitespace
0-positive_or_negative.c:25: ERROR: trailing whitespace
total: 2 errors, 0 warnings, 26 lines checked
main
root@9b3a91b9181f:~/holbertonschool-low_level_programming/variables_if_else_while# git add .
root@9b3a91b9181f:~/holbertonschool-low_level_programming/variables_if_else_while# git commit -m "Entry Value"
[main ad8eb2f] Entry Value
 1 file changed, 1 insertion(+), 1 deletion(-)
root@9b3a91b9181f:~/holbertonschool-low_level_programming/variables_if_else_while# git push
Enumerating objects: 7, done.
Counting objects: 100% (7/7), done.
Delta compression using up to 2 threads
Compressing objects: 100% (4/4), done.
Writing objects: 100% (4/4), 400 bytes | 400.00 KiB/s, done.
Total 4 (delta 2), reused 0 (delta 0)
remote: Resolving deltas: 100% (2/2), completed with 2 local objects.
To github.com:Desarrollo-Fast-and-Sure/holbertonschool-low_level_programming.git
   c023143..ad8eb2f  main -> main
root@9b3a91b9181f:~/holbertonschool-low_level_programming/variables_if_else_while# betty 0-positive_or_negative.c 

========== 0-positive_or_negative.c ==========
0-positive_or_negative.c:6: WARNING: Block comments use * on subsequent lines
0-positive_or_negative.c:7: ERROR: trailing whitespace
0-positive_or_negative.c:25: ERROR: trailing whitespace
total: 2 errors, 1 warnings, 26 lines checked
0-positive_or_negative.c:6: warning: Cannot understand 
 on line 6 - I thought it was a doc line
0-positive_or_negative.c:12: warning: no description found for function main
root@9b3a91b9181f:~/holbertonschool-low_level_programming/variables_if_else_while# gcc 0-positive_or_negative.c 
root@9b3a91b9181f:~/holbertonschool-low_level_programming/variables_if_else_while# git add .
root@9b3a91b9181f:~/holbertonschool-low_level_programming/variables_if_else_while# git commit -m "Entry Value"
[main c99047d] Entry Value
 2 files changed, 3 insertions(+), 2 deletions(-)
 create mode 100755 variables_if_else_while/a.out
root@9b3a91b9181f:~/holbertonschool-low_level_programming/variables_if_else_while# git push
Enumerating objects: 8, done.
Counting objects: 100% (8/8), done.
Delta compression using up to 2 threads
Compressing objects: 100% (5/5), done.
Writing objects: 100% (5/5), 3.06 KiB | 1.53 MiB/s, done.
Total 5 (delta 2), reused 0 (delta 0)
remote: Resolving deltas: 100% (2/2), completed with 2 local objects.
To github.com:Desarrollo-Fast-and-Sure/holbertonschool-low_level_programming.git
   ad8eb2f..c99047d  main -> main
root@9b3a91b9181f:~/holbertonschool-low_level_programming/variables_if_else_while# betty 0-positive_or_negative.c 

========== 0-positive_or_negative.c ==========
0-positive_or_negative.c:26: ERROR: trailing whitespace
total: 1 errors, 0 warnings, 27 lines checked
0-positive_or_negative.c:6: warning: Cannot understand *
 on line 6 - I thought it was a doc line
0-positive_or_negative.c:12: warning: no description found for function main
root@9b3a91b9181f:~/holbertonschool-low_level_programming/variables_if_else_while# git add .
root@9b3a91b9181f:~/holbertonschool-low_level_programming/variables_if_else_while# git commit -m "Entry Value"
[main d304d18] Entry Value
 1 file changed, 1 deletion(-)
root@9b3a91b9181f:~/holbertonschool-low_level_programming/variables_if_else_while# git push
Enumerating objects: 7, done.
Counting objects: 100% (7/7), done.
Delta compression using up to 2 threads
Compressing objects: 100% (4/4), done.
Writing objects: 100% (4/4), 421 bytes | 421.00 KiB/s, done.
Total 4 (delta 2), reused 0 (delta 0)
remote: Resolving deltas: 100% (2/2), completed with 2 local objects.
To github.com:Desarrollo-Fast-and-Sure/holbertonschool-low_level_programming.git
   c99047d..d304d18  main -> main
root@9b3a91b9181f:~/holbertonschool-low_level_programming/variables_if_else_while# betty 0-positive_or_negative.c 

========== 0-positive_or_negative.c ==========
0-positive_or_negative.c:25: ERROR: trailing whitespace
total: 1 errors, 0 warnings, 26 lines checked
main
root@9b3a91b9181f:~/holbertonschool-low_level_programming/variables_if_else_while# git add .
root@9b3a91b9181f:~/holbertonschool-low_level_programming/variables_if_else_while# git commit -m "Entry Value"
[main 76f8967] Entry Value
 1 file changed, 1 deletion(-)
root@9b3a91b9181f:~/holbertonschool-low_level_programming/variables_if_else_while# git push
Enumerating objects: 7, done.
Counting objects: 100% (7/7), done.
Delta compression using up to 2 threads
Compressing objects: 100% (4/4), done.
Writing objects: 100% (4/4), 422 bytes | 422.00 KiB/s, done.
Total 4 (delta 2), reused 0 (delta 0)
remote: Resolving deltas: 100% (2/2), completed with 2 local objects.
To github.com:Desarrollo-Fast-and-Sure/holbertonschool-low_level_programming.git
   d304d18..76f8967  main -> main
root@9b3a91b9181f:~/holbertonschool-low_level_programming/variables_if_else_while# betty 0-positive_or_negative.c 

========== 0-positive_or_negative.c ==========
0-positive_or_negative.c:25: ERROR: trailing whitespace
total: 1 errors, 0 warnings, 25 lines checked
main
root@9b3a91b9181f:~/holbertonschool-low_level_programming/variables_if_else_while# git add .
root@9b3a91b9181f:~/holbertonschool-low_level_programming/variables_if_else_while# git commit -m "Entry Value"
[main e08d05f] Entry Value
 1 file changed, 1 insertion(+), 1 deletion(-)
root@9b3a91b9181f:~/holbertonschool-low_level_programming/variables_if_else_while# git push
Enumerating objects: 7, done.
Counting objects: 100% (7/7), done.
Delta compression using up to 2 threads
Compressing objects: 100% (4/4), done.
Writing objects: 100% (4/4), 423 bytes | 423.00 KiB/s, done.
Total 4 (delta 2), reused 0 (delta 0)
remote: Resolving deltas: 100% (2/2), completed with 2 local objects.
To github.com:Desarrollo-Fast-and-Sure/holbertonschool-low_level_programming.git
   76f8967..e08d05f  main -> main
root@9b3a91b9181f:~/holbertonschool-low_level_programming/variables_if_else_while# betty 0-positive_or_negative.c 

========== 0-positive_or_negative.c ==========
0-positive_or_negative.c:24: ERROR: trailing whitespace
total: 1 errors, 0 warnings, 25 lines checked
main
root@9b3a91b9181f:~/holbertonschool-low_level_programming/variables_if_else_while# git status
On branch main
Your branch is up to date with 'origin/main'.

Changes not staged for commit:
  (use "git add/rm <file>..." to update what will be committed)
  (use "git restore <file>..." to discard changes in working directory)
	deleted:    ../1-compiler
	modified:   0-positive_or_negative.c

no changes added to commit (use "git add" and/or "git commit -a")
root@9b3a91b9181f:~/holbertonschool-low_level_programming/variables_if_else_while# git add .
root@9b3a91b9181f:~/holbertonschool-low_level_programming/variables_if_else_while# git commit -m "Entry Value"
[main 72a2e75] Entry Value
 1 file changed, 1 insertion(+), 1 deletion(-)
root@9b3a91b9181f:~/holbertonschool-low_level_programming/variables_if_else_while# git push
Enumerating objects: 7, done.
Counting objects: 100% (7/7), done.
Delta compression using up to 2 threads
Compressing objects: 100% (4/4), done.
Writing objects: 100% (4/4), 427 bytes | 427.00 KiB/s, done.
Total 4 (delta 2), reused 0 (delta 0)
remote: Resolving deltas: 100% (2/2), completed with 2 local objects.
To github.com:Desarrollo-Fast-and-Sure/holbertonschool-low_level_programming.git
   e08d05f..72a2e75  main -> main
root@9b3a91b9181f:~/holbertonschool-low_level_programming/variables_if_else_while# betty 0-positive_or_negative.c 

========== 0-positive_or_negative.c ==========
0-positive_or_negative.c:25: ERROR: trailing whitespace
total: 1 errors, 0 warnings, 25 lines checked
main
root@9b3a91b9181f:~/holbertonschool-low_level_programming/variables_if_else_while# git add .
root@9b3a91b9181f:~/holbertonschool-low_level_programming/variables_if_else_while# git commit -m "Entry Value"
[main b726298] Entry Value
 1 file changed, 1 deletion(-)
root@9b3a91b9181f:~/holbertonschool-low_level_programming/variables_if_else_while# git push
Enumerating objects: 7, done.
Counting objects: 100% (7/7), done.
Delta compression using up to 2 threads
Compressing objects: 100% (4/4), done.
Writing objects: 100% (4/4), 423 bytes | 423.00 KiB/s, done.
Total 4 (delta 2), reused 0 (delta 0)
remote: Resolving deltas: 100% (2/2), completed with 2 local objects.
To github.com:Desarrollo-Fast-and-Sure/holbertonschool-low_level_programming.git
   72a2e75..b726298  main -> main
root@9b3a91b9181f:~/holbertonschool-low_level_programming/variables_if_else_while# betty 0-positive_or_negative.c 

========== 0-positive_or_negative.c ==========
0-positive_or_negative.c:24: ERROR: trailing whitespace
total: 1 errors, 0 warnings, 24 lines checked
main
root@9b3a91b9181f:~/holbertonschool-low_level_programming/variables_if_else_while# gcc 0-positive_or_negative.c 
root@9b3a91b9181f:~/holbertonschool-low_level_programming/variables_if_else_while# git add .
root@9b3a91b9181f:~/holbertonschool-low_level_programming/variables_if_else_while# git commit -m "Entry Value"
[main 49f7646] Entry Value
 1 file changed, 1 insertion(+), 1 deletion(-)
root@9b3a91b9181f:~/holbertonschool-low_level_programming/variables_if_else_while# git push
Enumerating objects: 7, done.
Counting objects: 100% (7/7), done.
Delta compression using up to 2 threads
Compressing objects: 100% (4/4), done.
Writing objects: 100% (4/4), 435 bytes | 435.00 KiB/s, done.
Total 4 (delta 2), reused 0 (delta 0)
remote: Resolving deltas: 100% (2/2), completed with 2 local objects.
To github.com:Desarrollo-Fast-and-Sure/holbertonschool-low_level_programming.git
   b726298..49f7646  main -> main
root@9b3a91b9181f:~/holbertonschool-low_level_programming/variables_if_else_while# betty 0-positive_or_negative.c 

========== 0-positive_or_negative.c ==========
0-positive_or_negative.c:24: ERROR: trailing whitespace
total: 1 errors, 0 warnings, 24 lines checked
main
root@9b3a91b9181f:~/holbertonschool-low_level_programming/variables_if_else_while# git add .
root@9b3a91b9181f:~/holbertonschool-low_level_programming/variables_if_else_while# git commit -m "Entry Value"
[main 2ccf059] Entry Value
 1 file changed, 1 insertion(+), 1 deletion(-)
root@9b3a91b9181f:~/holbertonschool-low_level_programming/variables_if_else_while# git push
Enumerating objects: 7, done.
Counting objects: 100% (7/7), done.
Delta compression using up to 2 threads
Compressing objects: 100% (4/4), done.
Writing objects: 100% (4/4), 425 bytes | 425.00 KiB/s, done.
Total 4 (delta 2), reused 0 (delta 0)
remote: Resolving deltas: 100% (2/2), completed with 2 local objects.
To github.com:Desarrollo-Fast-and-Sure/holbertonschool-low_level_programming.git
   49f7646..2ccf059  main -> main
root@9b3a91b9181f:~/holbertonschool-low_level_programming/variables_if_else_while# betty 0-positive_or_negative.c 

========== 0-positive_or_negative.c ==========
0-positive_or_negative.c:24: ERROR: trailing whitespace
total: 1 errors, 0 warnings, 24 lines checked
main
root@9b3a91b9181f:~/holbertonschool-low_level_programming/variables_if_else_while# git add .
root@9b3a91b9181f:~/holbertonschool-low_level_programming/variables_if_else_while# git commit -m "Entry Value"
[main 6c0fe01] Entry Value
 1 file changed, 1 insertion(+)
root@9b3a91b9181f:~/holbertonschool-low_level_programming/variables_if_else_while# git push
Enumerating objects: 7, done.
Counting objects: 100% (7/7), done.
Delta compression using up to 2 threads
Compressing objects: 100% (4/4), done.
Writing objects: 100% (4/4), 437 bytes | 437.00 KiB/s, done.
Total 4 (delta 2), reused 0 (delta 0)
remote: Resolving deltas: 100% (2/2), completed with 2 local objects.
To github.com:Desarrollo-Fast-and-Sure/holbertonschool-low_level_programming.git
   2ccf059..6c0fe01  main -> main
root@9b3a91b9181f:~/holbertonschool-low_level_programming/variables_if_else_while# betty 0-positive_or_negative.c 

========== 0-positive_or_negative.c ==========
0-positive_or_negative.c:25: ERROR: trailing whitespace
total: 1 errors, 0 warnings, 25 lines checked
main
root@9b3a91b9181f:~/holbertonschool-low_level_programming/variables_if_else_while# git add .
root@9b3a91b9181f:~/holbertonschool-low_level_programming/variables_if_else_while# git commit -m "Entry Value"
[main bb208c1] Entry Value
 1 file changed, 1 insertion(+)
root@9b3a91b9181f:~/holbertonschool-low_level_programming/variables_if_else_while# git push
Enumerating objects: 7, done.
Counting objects: 100% (7/7), done.
Delta compression using up to 2 threads
Compressing objects: 100% (4/4), done.
Writing objects: 100% (4/4), 426 bytes | 213.00 KiB/s, done.
Total 4 (delta 2), reused 0 (delta 0)
remote: Resolving deltas: 100% (2/2), completed with 2 local objects.
To github.com:Desarrollo-Fast-and-Sure/holbertonschool-low_level_programming.git
   6c0fe01..bb208c1  main -> main
root@9b3a91b9181f:~/holbertonschool-low_level_programming/variables_if_else_while# betty 0-positive_or_negative.c 

========== 0-positive_or_negative.c ==========
0-positive_or_negative.c:26: ERROR: trailing whitespace
total: 1 errors, 0 warnings, 26 lines checked
main
root@9b3a91b9181f:~/holbertonschool-low_level_programming/variables_if_else_while# git add .
root@9b3a91b9181f:~/holbertonschool-low_level_programming/variables_if_else_while# git commit -m "Entry Value"
[main 62abc3a] Entry Value
 1 file changed, 1 insertion(+), 1 deletion(-)
root@9b3a91b9181f:~/holbertonschool-low_level_programming/variables_if_else_while# git push
Enumerating objects: 7, done.
Counting objects: 100% (7/7), done.
Delta compression using up to 2 threads
Compressing objects: 100% (4/4), done.
Writing objects: 100% (4/4), 423 bytes | 423.00 KiB/s, done.
Total 4 (delta 2), reused 0 (delta 0)
remote: Resolving deltas: 100% (2/2), completed with 2 local objects.
To github.com:Desarrollo-Fast-and-Sure/holbertonschool-low_level_programming.git
   bb208c1..62abc3a  main -> main
root@9b3a91b9181f:~/holbertonschool-low_level_programming/variables_if_else_while# betty 0-positive_or_negative.c 

========== 0-positive_or_negative.c ==========
main
root@9b3a91b9181f:~/holbertonschool-low_level_programming/variables_if_else_while# vi 0-positive_or_negative.c 

  1 #include<stdio.h>
  2 #include <stdlib.h>
  3 #include <time.h>
  4 
  5 /**
  6 * main - C entry value
  7 *
  8 * Return: always 0 (Success)
  9 */
 10 
 11 int main(void)
 12 {
 13         int n;
 14 
 15         srand(time(0));
 16         n = rand() - RAND_MAX / 2;
 17         if (n > 0)
 18                 printf("%d is positive\n", n);
 19         else if (n == 0)
 20                 printf("%d is zero\n", n);
 21         else
 22                 printf("%d is negative\n", n);
 23 
#include<stdio.h>
#include <stdlib.h>
#include <time.h>

/**
* main - C entry value
*
* Return: always 0 (Success)
*/

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else
		printf("%d is negative\n", n);

return (0);

	}
