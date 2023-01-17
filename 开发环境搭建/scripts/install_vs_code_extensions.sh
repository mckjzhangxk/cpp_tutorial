#!/bin/sh
# @file      install_vs_code_extensions.sh
# @author    Ignacio Vizzo     [ivizzo@uni-bonn.de]
#
# Copyright (c) 2021 Ignacio Vizzo, all rights reserved
echo "Installing Visual Studio Code Extension Pack for Modern C++ Course"
code --install-extension ms-vscode.cpptools
code --install-extension llvm-vs-code-extensions.vscode-clangd
code --install-extension twxs.cmake
code --install-extension ms-vscode.cmake-tools
code --install-extension cheshirekow.cmake-format
code --install-extension yzhang.markdown-all-in-one
code --install-extension DavidAnson.vscode-markdownlint
