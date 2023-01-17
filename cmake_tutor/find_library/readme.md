**find_library**
```
 find_library (<VAR> libname | NAMES name1 name2 ... REQUIRED)

 #这个函数用于 查询libname的位置，放到VAR这个变量中
 #REQUIRED 如果设置了，找不到会 报错。

 如果找不到哦：VAR=ADDER_LIB-NOTFOUND
```


**find_path**
```
find_path(<VAR> headerName)

eg:
    find_path(ADD_HEADER "add.h")
```

**find_package**

* find_package多次调用find_path,find_library
* 之所以可以找到每个pkg,是因为Find\<pkg>.cmake文件的存在
* Find\<pkg>.cmake 一般放在CMAKE_MODULE_PATH里面