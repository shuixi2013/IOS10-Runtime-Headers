//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iWorkImport/TSCH3DRenderPipeline.h>

@class NSNumber, TSCH3DCamera, TSCH3DGLFramebuffer, TSCH3DScene, TSCH3DSceneRenderSetup;

__attribute__((visibility("hidden")))
@interface TSCH3DSceneRenderPipeline : TSCH3DRenderPipeline
{
    TSCH3DSceneRenderPipeline *mOriginal;
    TSCH3DScene *mScene;
    TSCH3DGLFramebuffer *mFramebuffer;
    TSCH3DSceneRenderSetup *mSetup;
    TSCH3DCamera *mCamera;
    NSNumber *mScale;
    NSNumber *mSamples;
    NSNumber *mSuperSamples;
    NSNumber *mPreserveFramebufferContent;
}

+ (id)pipelineWithProcessor:(id)arg1 session:(id)arg2 scene:(id)arg3;
@property(retain, nonatomic) TSCH3DSceneRenderPipeline *original; // @synthesize original=mOriginal;
- (_Bool)run;
- (_Bool)render;
- (_Bool)renderWithFramebuffer:(id)arg1;
- (void)setupCamera:(id)arg1;
- (void)setupRendering;
- (_Bool)activateFramebuffer:(id)arg1;
- (void)clearFramebuffer;
- (tvec4_ac57c72d)backgroundClearColor;
- (void)renderSelector:(SEL)arg1;
@property(readonly, nonatomic) TSCH3DCamera *camera;
- (void)clearCamera;
- (id)concreteSetup;
@property(nonatomic) _Bool preserveFramebufferContent;
@property(readonly, nonatomic) float renderScale;
- (void)setObjectRenderMode:(int)arg1;
@property(nonatomic) float superSamples;
@property(nonatomic) float samples;
@property(nonatomic) float scale;
@property(retain, nonatomic) TSCH3DSceneRenderSetup *setup;
@property(retain, nonatomic) TSCH3DGLFramebuffer *framebuffer;
@property(retain, nonatomic) TSCH3DScene *scene;
- (id)session;
- (id)processor;
- (id)cloneWithRetargetProcessor:(id)arg1 scene:(id)arg2;
- (id)baseRecloneWithRetargetProcessor:(id)arg1 scene:(id)arg2;
- (id)recloneWithPipelineClass:(Class)arg1 retargetProcessor:(id)arg2 scene:(id)arg3;
- (id)cloneWithProcessor:(id)arg1 scene:(id)arg2;
- (id)baseRecloneWithProcessor:(id)arg1 scene:(id)arg2;
- (id)recloneWithPipelineClass:(Class)arg1 processor:(id)arg2 scene:(id)arg3;
- (void)dealloc;
- (id)initWithProcessor:(id)arg1 session:(id)arg2 scene:(id)arg3;
- (_Bool)shouldSkipLabelsIfHidden;
- (id)labelsMeshRendererForLabelsRenderer:(id)arg1;
- (Class)labelsMeshRendererClassForLabelsRenderer:(id)arg1;

@end

