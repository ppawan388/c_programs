import os,sys
import shutil
src=str(input())
dst=str(input())
dirs=os.listdir(src)
def file_copy(i):
    shutil.copy(i,dst)
    print(i)
def dir_copy(f):
	for i in f:
		isDirectory=os.path.isdir(i)
		if isDirectory==True:
			newlst=os.listdir(i)
			dirs.append(newlst)
			dir_copy(newlst)
		else:
			file_copy(i)

for f in dirs:
	isDirectory=os.path.isdir(f)
	if isDirectory==True:
		dir_copy(dirs)
	
	else :
		file_copy(f)

