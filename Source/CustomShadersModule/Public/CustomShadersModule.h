﻿#pragma once

#include "CoreMinimal.h"
#include "Modules/ModuleManager.h"

class FCustomShadersModule : public IModuleInterface
{
public:
    virtual void StartupModule() override;
};
