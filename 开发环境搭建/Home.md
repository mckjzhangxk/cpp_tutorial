# Must have installed tools in GNU/Linux to be a real roboticist

_Note 1:_ If you plan to use Windows(not the best idea) you should first follow [**these instructions**](./Windows), and then come back to this wiki.

_Note 2:_ This guide assumes that you have installed an Ubuntu 20.04 distribution on your machine.

After you have a working Ubuntu you can start reading this guide.

## Things you _must_ have

<details>

<summary>The right toolset</summary>

### The right toolset

While we can spend years discussing which are the "best" tools for working, here is the **bare minimum** set of tools you will need to work in our lab. The choice of these tools is backed up by my personal and professional experience, both, in academia and in industry.

My hope is that you also spend quite a lot of time searching around which is the best toolset that fits you. Most people usually underestimate this fact, and by the time they enter the job market or Academia, it's probably too late to spend time to improve your tools. It's actually quite straightforward if your tools suck, you suck, go ahead and invest the right amount of time now that you probably have it.

- **git** `sudo apt install git`
- **build tools** `sudo apt install build-essential`
- **cmake** `sudo apt install cmake`
- **cppcheck** `sudo apt install cppcheck`
- **clang-tools** `sudo apt install clang-format clang-tidy clangd`

In short, you could install all the necessary packages with the following command:

```shell
sudo apt update
sudo apt install git build-essential cmake cppcheck clang-format clang-tidy clangd
```

</details>

<details>
<summary> Modern text editors</summary>

### Modern text editors

- [**Visual Studio Code**](https://code.visualstudio.com/) _This is the one we use internally_
- [Sublime Text](https://www.sublimetext.com/)

**How to install on Linux?** Couldn't be easier:

_NOTE_ If you are running Windows using `WSL` you can skip this step

```shell
sudo snap install code --classic
```

#### Visual Studio Code extensions

Visual studio is an open-source and great tool, that will allow you to do anything you need, from editing C++ or python code to write your LaTeX documents, all using the same editor and with the same settings. This is the de-factor in both industry and research. IDEs were popular some years ago, but not anymore.

Even when vscode is a powerful tool, you will need to install some extensions to make it more user-friendly. I would recommend to you to briefly take a look at the extensions web page before installing it, you can simply find this by googling the name + vscode

**Too lazy to install all manually?** Just run this script: [install_vs_code_extensions](scripts/install_vs_code_extensions.sh)

Visual Studio Code Extension Summary

##### C+C++

| Name   | How to install: Ctrl + p and type                   |
| ------ | --------------------------------------------------- |
| C/C++  | `ext install ms-vscode.cpptools`                    |
| clangd | `ext install llvm-vs-code-extensions.vscode-clangd` |

##### CMake

| Name               | How to install: Ctrl + p and type      |
| ------------------ | -------------------------------------- |
| CMake              | `ext install twxs.cmake`               |
| CMake Tools Helper | `ext install ms-vscode.cmake-tools`    |
| CMake format       | `ext install cheshirekow.cmake-format` |

##### Markdown

| Name                | How to install: Ctrl + p and type            |
| ------------------- | -------------------------------------------- |
| Markdown all in one | `ext install yzhang.markdown-all-in-one`     |
| Markdown lint       | `ext install DavidAnson.vscode-markdownlint` |

##### Visual Studio Settings

You should spend some time on your own settings, but with respect to the C++ part, I'd recommend that you use the following settings(also available [here](./scripts/settings.json)):

```json
{
  /*-------------------- GLOBAL EDITOR CONFIGURATIONS -------------------------*/
  "editor.formatOnType": true,
  "editor.formatOnPaste": true,
  "editor.formatOnSave": true,
  /*----------------------------- C++ STUFF ----------------------------------*/
  "C_Cpp.autocomplete": "Disabled",
  "C_Cpp.formatting": "Disabled",
  "C_Cpp.errorSquiggles": "Disabled",
  "C_Cpp.intelliSenseEngine": "Disabled",
  //clangd
  "clangd.arguments": [
    "--background-index",
    "--clang-tidy",
    "--header-insertion=never",
    "--suggest-missing-includes",
    "--compile-commands-dir=build/"
  ],
}
```
</details>

<details>
<summary>  clang-tools config files</summary>

### clang-tools config files

If you want to use the same configuration files that we use and the `hw_bot` use you can copy-paste these files into your repository:

- [clang-format](clang-tools/.clang-format)
- [clang-tidy](clang-tools/.clang-tidy)
</details>
