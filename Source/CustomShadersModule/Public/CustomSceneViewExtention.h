#pragma once

#include "SceneViewExtension.h"

class CUSTOMSHADERSMODULE_API FCustomViewExtension : public FSceneViewExtensionBase
{
	FLinearColor HighlightColour;
public:
	FCustomViewExtension(const FAutoRegister& AutoRegister, FLinearColor CustomColour);

	virtual void SetupViewFamily(FSceneViewFamily& InViewFamily) override {};
	virtual void SetupView(FSceneViewFamily& InViewFamily, FSceneView& InView) override {};
	virtual void BeginRenderViewFamily(FSceneViewFamily& InViewFamily) override {};
	virtual void PreRenderViewFamily_RenderThread(FRDGBuilder& GraphBuilder, FSceneViewFamily& InViewFamily) override {};
	virtual void PreRenderView_RenderThread(FRDGBuilder& GraphBuilder, FSceneView& InView) override {};
	virtual void PostRenderBasePass_RenderThread(FRHICommandListImmediate& RHICmdList, FSceneView& InView) override{};
	virtual void PrePostProcessPass_RenderThread(FRDGBuilder& GraphBuilder, const FSceneView& View,
		const FPostProcessingInputs& Inputs) override;
};