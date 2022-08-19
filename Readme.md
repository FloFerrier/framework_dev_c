# framework-dev-c Project
## Project
- VSCode with CMake extension
- CMake
- Unity
## lib
The target to test is locating on lib folder, you can put yours files directly here or
use a submodule for having a different repo.
## Use
### With VSCode
* Select your build variant : Test/Debug/Release
* Build your selected target
* Run the selected target on the terminal
### On command line
```bash
mkdir build && cd build
cmake .. -DCMAKE_BUILD_TYPE=<Release Test Debug>
make
./../bin/release
```
