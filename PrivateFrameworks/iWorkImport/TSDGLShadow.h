//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface TSDGLShadow : NSObject
{
}

+ (id)sharedContext;
- (void)createOffscreenRenderBuffer:(struct CGSize)arg1 framebuffer:(id)arg2 requiresDepth:(_Bool)arg3 colorRenderBuffer:(unsigned int *)arg4 depthRenderBuffer:(unsigned int *)arg5;
- (struct CGImage *)newCGImageFromGLBuffer:(char **)arg1;
- (void)setupGLTextureParameters;

@end

