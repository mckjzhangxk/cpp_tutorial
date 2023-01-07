#从github添加子模块

//首次clone，并添加子模块
git submodule add https://github.com/glfw/glfw.git external/glfw

//下载子模块
git submodule update --init --recursive
#配置
cmake -S . -B build -DGLFW_BUILD_DOCS=OFF
#编译
cd build; make