# cmakepractice
 A small repo to learn CMake with.


# Commands:
Run these from the root of the repo
## initialise
`cd build; cmake ../; cd ..`
## build
`cmake --build build`
## clean
`cmake --build build --target clean`
## test:
`cd build; ctest; cd ..`
## run:
`build/Game`

# Features:
- include paths can be done relative to the root of the project
- `assets` gets copied in with the build result
-  build results get placed in a folder together