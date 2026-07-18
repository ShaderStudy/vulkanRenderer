#include "renderer.h"
#include "dx11_renderer.h"
#include "dx12_renderer.h"
#include <stdexcept>
RendererBackend parseRendererBackend(const std::string& value) {
    if (value == "vulkan") return RendererBackend::Vulkan;
    if (value == "dx11") return RendererBackend::Dx11;
    if (value == "dx12") return RendererBackend::Dx12;
    throw std::invalid_argument("unknown renderer: " + value);
}
std::unique_ptr<Renderer> createRenderer(RendererBackend backend) {
    if (backend == RendererBackend::Dx11) return std::make_unique<Dx11Renderer>();
    if (backend == RendererBackend::Dx12) return std::make_unique<Dx12Renderer>();
    throw std::logic_error("Vulkan renderer is created by main.cpp");
}
