#include "CustomShadersModule.h"


void FCustomShadersModule::StartupModule()
{
    FString BaseDir = FPaths::Combine(FPaths::GameSourceDir(), TEXT("CustomShadersModule"));
    FString ModuleShaderDir = FPaths::Combine(BaseDir, TEXT("Shaders"));
    AddShaderSourceDirectoryMapping(TEXT("/CustomShadersModule"), ModuleShaderDir);
}

    
IMPLEMENT_MODULE(FCustomShadersModule, CustomShadersModule)
