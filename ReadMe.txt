一般默认外部构建：
必须要有一个CmakeLists.txt

然后 新建一个build 文件夹

cd ./build/ 里面 执行cmake .. 编译再 make 执行生成可执行的文件

如果配置了我们的的lauch.json和tasks.json 可以完成调试和执行

需要重新回顾的，可以观看 https://www.bilibili.com/video/BV1fy4y1b7TC/?p=21&spm_id_from=333.33.header_right.history_list.click&vd_source=4749d46b7f7e22e09d6387ab3e98b899


cmake的好处：
中大型项目构建，方便，修改其中一个文件，而不需要整个工程编译，只编译修改的文件
与MakeFile的区别：
cmake 执行时会根据不同平台去构建生成一个MakeFile，跨平台，而make命令根据makefile生成可执行文件

makeFile自己手写的话，可能要写很多，优点麻烦不好管理




