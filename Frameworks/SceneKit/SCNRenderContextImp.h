//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <SceneKit/SCNRenderContext-Protocol.h>

@class NSString, SCNRenderTargetRegistry;
@protocol SCNResourceManager;

__attribute__((visibility("hidden")))
@interface SCNRenderContextImp : NSObject <SCNRenderContext>
{
    struct C3DColor4 _backgroundColor;
    long long _currentFrameIndex;
    struct __C3DEngineStats *__engineStats;
    SCNRenderTargetRegistry *_renderTargetRegistry;
    _Bool enablesDeferredShading;
    _Bool wantsWideGamut;
    double contentScaleFactor;
    long long sampleCount;
}

@property(readonly, nonatomic) SCNRenderTargetRegistry *renderTargetRegistry; // @synthesize renderTargetRegistry=_renderTargetRegistry;
@property(nonatomic) _Bool wantsWideGamut; // @synthesize wantsWideGamut;
@property(nonatomic) long long sampleCount; // @synthesize sampleCount;
@property(nonatomic) _Bool enablesDeferredShading; // @synthesize enablesDeferredShading;
@property(nonatomic) double contentScaleFactor; // @synthesize contentScaleFactor;
- (void)endDeferredLighting;
-     // Error parsing type: v36@0:8^{__C3DNode=}16i24^{__C3DLightRuntimeData=If(C3DMatrix4x4=[16f][4])^v^{__C3DTextureSampler}^v^{__C3DTextureSampler}}28, name: renderLight:lightType:lightData:
- (void)beginDeferredLighting;
- (struct __C3DMeshElement *)createVolatileMeshElementOfType:(BOOL)arg1 primitiveCount:(long long)arg2 bytesPerIndex:(long long)arg3;
- (void)unmapVolatileMesh:(struct __C3DMesh *)arg1;
- (_Bool)mapVolatileMesh:(struct __C3DMesh *)arg1 verticesCount:(long long)arg2;
- (void)renderBackground:(struct __C3DEffectSlot *)arg1 engineContext:(struct __C3DEngineContext *)arg2;
- (void)drawFullScreenQuadForPass:(struct __C3DFXPass *)arg1;
-     // Error parsing type: v148@0:8^{__C3DMesh=}16^{__C3DMeshElement=}24^{__C3DFXProgram={__C3DEntity={__CFRuntimeBase=Q[4C]I}^v^{__CFString}^{__CFString}^{__CFDictionary}qq}ib1b1^{__C3DFXProgramDelegate}}32^{__C3DEngineContext=}40(C3DMatrix4x4=[16f][4])48r^{C3DColor4=(?=[4f]{?=ffff})}112^{__C3DRasterizerStates=}120^{__C3DBlendStates=}128^{__C3DImage=}136B144, name: renderMesh:meshElement:withProgram:engineContext:transform:color:rasterizerStates:blendState:texture:depthBias:
- (void)drawRenderElement:(struct __C3DRendererElement *)arg1 withPass:(struct __C3DFXPass *)arg2;
- (void)processRendererElement:(struct __C3DRendererElement *)arg1 engineIterationContext:(CDStruct_256c7a3c *)arg2;
- (void)stopProcessingRendererElements;
- (void)processRendererElement:(struct __C3DRendererElement *)arg1;
- (void)startProcessingRendererElementsWithEngineIterationContext:(CDStruct_256c7a3c *)arg1;
- (id)newRenderTargetWithDescription:(CDStruct_fd8065c6 *)arg1 size: /* Error: Ran out of types for this method. */;
- (void)popDebugGroup;
- (void)pushDebugGroup:(id)arg1;
- (id)textureForEffectSlot:(struct __C3DEffectSlot *)arg1;
@property(nonatomic) _Bool showsAuthoringEnvironment;
@property(readonly, nonatomic) id <SCNResourceManager> resourceManager;
- (struct __C3DEngineStats *)stats;
@property(readonly, nonatomic) long long currentFrameIndex;
- (void)setBackgroundColor:(struct C3DColor4)arg1;
- (void)endRenderPass;
- (_Bool)beginRenderPass:(struct __C3DFXPass *)arg1 cubemapFaceIndex:(unsigned long long)arg2 isFinalTechnique:(_Bool)arg3;
- (void)endFrameWaitingUntilCompleted:(_Bool)arg1;
- (void)beginFrame:(id)arg1;
@property(readonly, nonatomic) int profile;
@property(readonly, nonatomic) unsigned int features;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

