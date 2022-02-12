#framework-test-c Project
## Unity framework for testing c
- Version : v2.5.2
## Build as Test and run
```bash
cd build
cmake .. -DCMAKE-BUILD-TYPE=Test
cmake --build ..
./../test/libapp_test
```
## Build as Release and run
```bash
cd build
cmake .. -DCMAKE-BUILD-TYPE=Release
cmake --build ..
./../src/release_run
```
