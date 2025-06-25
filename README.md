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

# TODO:
- make it so includes can be done using file paths relative to the root of the project
- clone contents of `assets` with the build
- output executable and assets in a folder together