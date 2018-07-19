# 用c++实践的一些leecode,acm算法

## boost在centos7上的安装
到[boost代码](http://sourceforge.net/projects/boost/files/boost)下载boost的源代码然后解压到/usr/local
``` bash
[root@DESKTOP-77QP9D4 local]# tar -zxvf boost_1_60_0.tar.gz
[root@DESKTOP-77QP9D4 local]# cd boost_1_60_0
[root@DESKTOP-77QP9D4 local]# ./bootstrap.sh
[root@DESKTOP-77QP9D4 local]# ./bjam  --layout=versioned --build-type=complete --toolset=gcc install  #这一步时间比较长
```

然后设置环境变量打开/etc/profile

export BOOST_INCLUDE=/usr/local/include/boost-1_60

export BOOST_LIB=/usr/local/lib

第二种方法在/etc/profile.d下建立一个.sh脚本文件

脚本文件里面写上

export BOOST_INCLUDE=/usr/local/include/boost-1_60

export BOOST_LIB=/usr/local/lib+x

然后记得给文件授权chmod +x boost.sh

