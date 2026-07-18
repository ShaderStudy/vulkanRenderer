# Vulkan Renderer

GLFW 湲곕컲 Vulkan ?뚮뜑???덉젣?낅땲?? Vulkan, DX11, DX12 諛깆뿏??援ъ“瑜?吏?먰빀?덈떎.

## Visual Studio ?붾（???앹꽦

```powershell
cmake -S . -B build-vs -G "Visual Studio 17 2022" -A x64
```

?앹꽦??`build-vs/VulkanTriangle.sln`??Visual Studio?먯꽌 ?????덉뒿?덈떎. Vulkan SDK? GLFW媛 ?꾩슂?⑸땲??

## 鍮뚮뱶 諛??뚮뜑???좏깮

```powershell
cmake --build build-vs --config Debug
.\build-vs\bin\Debug\vulkan_triangle.exe --renderer vulkan
.\build-vs\bin\Debug\vulkan_triangle.exe --renderer dx11
.\\build-vs\bin\Debug\vulkan_triangle.exe --renderer dx12
```

?몄옄瑜??앸왂?섎㈃ Vulkan??湲곕낯 ?뚮뜑?щ줈 ?ъ슜?⑸땲??
