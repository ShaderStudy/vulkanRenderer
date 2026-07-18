#pragma once
#include <memory>
#include <string>
class Renderer { public: virtual ~Renderer() = default; virtual void run() = 0; };
enum class RendererBackend { Vulkan, Dx11, Dx12 };
RendererBackend parseRendererBackend(const std::string& value);
std::unique_ptr<Renderer> createRenderer(RendererBackend backend);
