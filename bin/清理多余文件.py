'''
Author: yejinliang
Date: 2025-02-11 11:47:10
LastEditTime: 2025-02-11 11:47:22
LastEditors: yejinliang
Description: 
'''
import os

# 1. 获取文件夹下所有文件
def get_all_files(path):
    files = []
    for file_name in os.listdir(path):
        if '.obj' in file_name or '.exe' in file_name:
            file_path = os.path.join(path, file_name)
            files.append(file_path)
    return files

files = get_all_files(os.path.abspath('../'))
for file in files:
    os.remove(file)