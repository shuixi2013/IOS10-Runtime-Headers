//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray, NSMutableDictionary;
@protocol SCNRenderContext;

__attribute__((visibility("hidden")))
@interface SCNRenderTargetRegistry : NSObject
{
    id <SCNRenderContext> _renderContext;
    NSMutableDictionary *_renderTargets;
    NSMutableDictionary *_nameToRenderTarget;
    NSMutableArray *_purgeArray;
    long long _frameStamp;
}

- (void)cleanup;
- (void)viewportDidResize;
- (void)finalizeFrame;
- (void)purge;
- (void)purgeRenderTargetsMatchingFrameBuffer;
- (void)_purgeWithReason:(int)arg1;
- (void)bumpTimeStamp;
- (void)releaseTextureWithName:(id)arg1 retainCount:(long long)arg2;
- (void)retainTextureWithName:(id)arg1 retainCount:(long long)arg2;
- (void)releaseRenderTargetNamed:(id)arg1;
- (id)renderTargetWithName:(id)arg1;
- (void)releaseRenderTarget:(id)arg1;
- (id)renderTargetWithDescription:(CDStruct_fd8065c6)arg1 size:(id)arg2 name:(long long)arg3 useCount: /* Error: Ran out of types for this method. */;
- (void)dealloc;
- (id)initWithRenderContext:(id)arg1;
@property(readonly, nonatomic) long long numberOfRenderTargets;

@end

