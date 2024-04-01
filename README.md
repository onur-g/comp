# comp

## [onur_g4 Codeforces Profile](https://codeforces.com/profile/onur_g4)

## Compile

### g++ -std=c++17 -Wshadow -Wall -o "%e.x" "%f" -O2 -Wno-unused-result

## Build

### g++ -std=c++17 -Wshadow -Wall -o "%e.x" "%f" -g -fsanitize=address -fsanitize=undefined -D_GLIBCXX_DEBUG

## Execute

### "./%e.x"

## VS Code Code Runner Extension

### "cpp": "cd $dir && g++ -std=c++17 -Wshadow -Wall -o $fileNameWithoutExt.x $fileName -O2 -Wno-unused-result && $dir$fileNameWithoutExt.x",
