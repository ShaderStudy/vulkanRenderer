# Vulkan Renderer

GLFW 기반 Vulkan 렌더러 예제입니다. Vulkan, DX11, DX12 백엔드 구조를 지원합니다.

## Visual Studio 솔루션 생성

```powershell
cmake -S . -B build-vs -G "Visual Studio 17 2022" -A x64
```

생성된 `build-vs/VulkanTriangle.sln`을 Visual Studio에서 열어 빌드할 수 있습니다. Vulkan SDK와 GLFW가 필요합니다.

## 빌드 및 렌더러 선택

```powershell
cmake --build build-vs --config Debug
.\build-vs\bin\Debug\vulkan_triangle.exe --renderer vulkan
.\build-vs\bin\Debug\vulkan_triangle.exe --renderer dx11
.\build-vs\bin\Debug\vulkan_triangle.exe --renderer dx12
```

`--renderer` 인자를 생략하면 Vulkan이 기본 렌더러로 사용됩니다.
