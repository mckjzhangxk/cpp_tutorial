#include "image_browser.hpp"
#include "html_writer.hpp"
// #include <algorithm>
namespace image_browser {
// 必须再加入吗？
// using ScoredImage = std::tuple<std::string, float>;
// using ImageRow = std::array<ScoredImage, 3>;

void AddFullRow(const ImageRow &row1, bool first_row) {
  html_writer::OpenRow();
  for (int i = 0; i < row1.size(); i++) {
    std::string img_path = std::get<0>(row1[i]);
    float score = std::get<1>(row1[i]);

    if (first_row && i == 0) {
      html_writer::AddImage(img_path, score, true);
    } else {
      html_writer::AddImage(img_path, score, false);
    }
  }
  html_writer::CloseRow();
}

void CreateImageBrowser(const std::string &title, const std::string &stylesheet,
                        const std::vector<ImageRow> &rows) {

  html_writer::OpenDocument();

  html_writer::AddTitle(title);
  html_writer::AddCSSStyle(stylesheet);

  html_writer::OpenBody();

  bool firstRow = true;
  for (const ImageRow &row : rows) {
    AddFullRow(row, firstRow);

    if (firstRow) {
      firstRow = false;
    }
  }

  html_writer::CloseBody();
  html_writer::CloseDocument();
}
} // namespace image_browser