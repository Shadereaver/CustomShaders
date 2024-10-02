#include "Shaders.h"

IMPLEMENT_SHADER_TYPE(, FCombineShaderPS, TEXT("/CustomShadersModule/Shaders.usf"), TEXT("CombineMainPS"), SF_Pixel);
IMPLEMENT_SHADER_TYPE(, FUVMaskShaderPS, TEXT("/CustomShadersModule/Shaders.usf"), TEXT("UVMaskMainPS"), SF_Pixel);