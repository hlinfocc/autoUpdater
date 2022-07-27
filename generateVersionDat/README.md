# generateVersionDat
generateVersionDat是版本号文件version.dat生成小工具，用于生成自动升级更新程序的版本号文件version.dat。

# QT版本
5.15.X

# 开发工具
 Qt Creator
 
# 发布
## Windows环境打包
1. 用Release模式运行一遍;
2. 在Build directory目录下的dist目录中会生成autoUpgrader.exe可执行文件；
3. 打开QT命令行(开始菜单里面/QT下)，进入dist目录；
4. 执行：windeployqt autoUpgrader.exe
5. 将系统盘windows/system32/下的msvcp140_1.dll和vcruntime140_1.dll复制到dist目录。


