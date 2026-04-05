# Vulkan Renderer

기본 Vulkan **육각형**을 그리는 C++ 예제 프로젝트다.

## 포함된 것

- GLFW 창 생성
- Vulkan instance / surface / device 생성
- swapchain 생성
- render pass / graphics pipeline 생성
- command buffer 기록
- 정점 버퍼 없이 `gl_VertexIndex` 기반으로 컬러 육각형 그리기

## 필요 패키지

Ubuntu 기준:

```bash
sudo apt install build-essential cmake libglfw3-dev libvulkan-dev glslang-tools
```

## 빌드 방법

먼저 셰이더를 SPIR-V로 컴파일:

```bash
glslangValidator -V shaders/triangle.vert -o shaders/vert.spv
glslangValidator -V shaders/triangle.frag -o shaders/frag.spv
```

그 다음 빌드:

```bash
mkdir -p build
cd build
cmake ..
cmake --build .
./vulkan_triangle
```

## 참고

- 현재는 창 리사이즈 재생성 처리는 안 넣음
- validation layer 체크는 최소화 상태
- 중심점 + 삼각형 팬 방식으로 육각형을 구성함
