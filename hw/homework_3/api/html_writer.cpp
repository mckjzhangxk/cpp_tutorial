#include "html_writer.hpp"
#include <iomanip>
#include <iostream>
using std::cerr;
using std::cout;
using std::endl;
namespace html_writer {

void OpenDocument() {
  // <!DOCTYPE html>
  // <html>
  cout << "<!DOCTYPE html>" << endl;
  cout << "<html>" << endl;
}

void CloseDocument() { cout << "</html>" << endl; }

void AddCSSStyle(const std::string &stylesheet) {
  cout << "<head>" << endl;
  //     <link rel="stylesheet" type="text/css" href="style.css" />
  if (!stylesheet.empty()) {
    cout << "<link rel=\"stylesheet\" type=\"text/css\" href=\"" << stylesheet
         << "\" />" << endl;
  }

  cout << "</head>" << endl;
}

void AddTitle(const std::string &title) {
  // <title>Image Browser</title>
  if (!title.empty()) {
    cout << "<title>" << title << "</title>" << endl;
  }
}

void OpenBody() { cout << "<body>" << endl; }
void CloseBody() { cout << "</body>" << endl; }

void OpenRow() { cout << "<div class=\"row\">" << endl; }
void CloseRow() { cout << "</div>" << endl; }

void AddImage(const std::string &img_path, float score, bool highlight) {

  std::string ext_name = img_path.substr(img_path.size() - 3);
  if (ext_name != "png" && ext_name != "jpg") {
    cerr << "[Error]"
         << "AddImage " << img_path << " not support" << endl;
    return;
  }

  if (highlight) {
    cout << "<div class=\"column\" style=\"border: 5px solid green;\">" << endl;
  } else {
    cout << "<div class=\"column\">" << endl;
  }

  std::string img_name = "";
  int index = img_path.find_last_of("/");
  if (index > 0) {
    img_name = img_path.substr(index);
  }

  cout << "<h2>" << img_name << "</h2>" << endl;
  cout << "<img src=\"" << img_path << "\" />" << endl;

  cout << "<p>score = " << std::setprecision(2) << std::fixed << score << "</p>"
       << endl;
  cout << "</div>" << endl;
}

} // namespace html_writer