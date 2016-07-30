//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SceneKit/SCNTextureOffscreenRenderingSource.h>

__attribute__((visibility("hidden")))
@interface SCNTextureDelegateSource : SCNTextureOffscreenRenderingSource
{
    id _delegate;
    double _lastUpdate;
    double _nextUpdateDate;
}

@property(retain, nonatomic) id delegate; // @synthesize delegate=_delegate;
- (struct __C3DTexture *)textureWithEngineContext:(struct __C3DEngineContext *)arg1 textureSampler:(struct __C3DTextureSampler *)arg2 nextFrameTime:(double *)arg3;
- (void)cleanup:(struct __C3DRendererContext *)arg1;
- (void)__updateTextureWithDelegate:(id)arg1 engineContext:(struct __C3DEngineContext *)arg2;
- (void)renderWithEngineContext:(struct __C3DEngineContext *)arg1 nextFrameTime:(double *)arg2;
- (void)dealloc;

@end

