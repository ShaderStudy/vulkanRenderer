# Repository Guidelines

## Project Structure & Module Organization

- `src/main.cpp` contains the current Vulkan renderer and application entry point.
- `src/renderer.h` defines the renderer abstraction and backend selection types.
- `src/backend_factory.cpp` creates backend instances; `dx11_renderer.*` and `dx12_renderer.*` are the DirectX backend modules.
- `shaders/` contains GLSL sources and generated SPIR-V shader binaries.
- `CMakeLists.txt` defines the executable and dependencies. Build directories such as `build/` and `build-vs/` are generated and ignored.
- There is currently no dedicated test directory or test framework.

## Build, Test, and Development Commands

Generate a Visual Studio 2022 solution on Windows:

```powershell
cmake -S . -B build-vs -G "Visual Studio 17 2022" -A x64
cmake --build build-vs --config Debug
```

For a platform-native CMake build:

```bash
cmake -S . -B build
cmake --build build
```

Run the executable with `--renderer vulkan`, `--renderer dx11`, or `--renderer dx12`; Vulkan is the default. Compile shaders with `glslangValidator` when shader sources change.

There are no automated tests yet. At minimum, configure and build after every C++ or CMake change, then launch the selected backend to verify startup behavior.

## Coding Style & Naming Conventions

Use C++17, four-space indentation, braces on the same line, and descriptive camelCase for functions and variables. Use PascalCase for classes (`VulkanRenderer`) and uppercase names for compile-time constants (`MAX_FRAMES_IN_FLIGHT`). Keep each backend’s API-specific code in its own module and expose shared behavior through `Renderer`.

## Commit & Pull Request Guidelines

Existing commits use short imperative descriptions, for example `Add basic Vulkan triangle renderer example`. Keep commits focused and use the same style. Pull requests should describe the backend or build-system change, list validation commands, mention required SDK/dependencies, and include screenshots or runtime notes for visible rendering changes.

## Configuration and Dependency Notes

Install Vulkan SDK and GLFW before configuring. Do not commit generated CMake folders, Visual Studio metadata, binaries, or generated shader output; these are covered by `.gitignore`.
