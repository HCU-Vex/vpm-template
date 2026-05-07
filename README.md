# vpm-template

A template for creating VPM-compatible libraries for VEXcode V5 C++.

## Getting Started

1. Click **Use this template** on GitHub to create your own library repo
2. Rename `my-library` to your library's name throughout the project
3. Fill in `vpm.json` with your library's details
4. Write your code in `include/` and `src/`
5. Tag a release to make it installable

## Structure

```
your-library/
  include/
    your-library.hpp    ← public API headers
  src/
    your-library.cpp    ← implementation
  vpm.json              ← library metadata
```

## vpm.json

```json
{
  "name": "your-library",
  "version": "1.0.0",
  "description": "A short description of your library",
  "author": "your-github-username"
}
```

## Publishing a Release

Once your library is ready, tag a release on GitHub:

```bash
git tag v1.0.0
git push origin v1.0.0
```

Then create a release on GitHub from that tag. Teams can now install your library with:

```bash
vpm install your-username/your-library
vpm install your-username/your-library@v1.0.0
```

## Usage in a VEXcode Project

```cpp
#include "your-library.hpp"

int main() {
    yourlib::hello();
}
```

## VPM

This template is part of the [HCU-Vex](https://github.com/HCU-Vex) ecosystem.  
Install VPM: `pip install vpm-vex`
