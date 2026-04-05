#version 450

vec2 positions[6] = vec2[](
    vec2(0.0, 0.0),
    vec2(0.0, -0.6),
    vec2(0.52, -0.3),
    vec2(0.52, 0.3),
    vec2(0.0, 0.6),
    vec2(-0.52, 0.3)
);

vec3 colors[6] = vec3[](
    vec3(1.0, 0.8, 0.1),
    vec3(1.0, 0.3, 0.2),
    vec3(0.9, 0.2, 0.7),
    vec3(0.3, 0.5, 1.0),
    vec3(0.2, 0.9, 0.8),
    vec3(0.4, 1.0, 0.3)
);

layout(location = 0) out vec3 fragColor;

void main() {
    int indices[12] = int[](0, 1, 2, 0, 2, 3, 0, 3, 4, 0, 4, 5);
    int vertexIndex = indices[gl_VertexIndex];
    gl_Position = vec4(positions[vertexIndex], 0.0, 1.0);
    fragColor = colors[vertexIndex];
}
