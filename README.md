Date 11/12/24
Topics covered
1. to create a orphan branch so that it doesnot copy commits of main branch
git checkout --orphan branchname
2.to merge it into main branch
git checkout main
git merge --allow-unrelated-histories branchname

3.rebase command
