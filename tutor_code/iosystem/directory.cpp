
#include <filesystem>
#include <fstream>
#include <iostream>
// std::filesystem 命名空间下的
// create_directories，remove_all，directory_iterator
// path()
int main(int argc, char *argv[]) {
  //创建了 sandbox/a/b文件夹
  std::filesystem::create_directories("sandbox/a/b");

  std::fstream fout{"sandbox/my.txt", std::ios_base::out};

  for (auto p : std::filesystem::directory_iterator("sandbox")) {
    auto pathstr = p.path();
    std::cout << "path:" << pathstr << ",";
    std::cout << "filename:" << std::filesystem::path(pathstr).filename()
              << ",";
    ;
    std::cout << "stem:" << std::filesystem::path(pathstr).stem() << ",";
    std::cout << "ext:" << std::filesystem::path(pathstr).extension()
              << std::endl;
  }

  std::filesystem::remove_all("sandbox");
}