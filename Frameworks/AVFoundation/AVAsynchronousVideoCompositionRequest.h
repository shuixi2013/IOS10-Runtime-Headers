//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <AVFoundation/NSCopying-Protocol.h>

@class AVAsynchronousVideoCompositionRequestInternal, AVVideoCompositionRenderContext, NSArray;
@protocol AVVideoCompositionInstruction;

@interface AVAsynchronousVideoCompositionRequest : NSObject <NSCopying>
{
    AVAsynchronousVideoCompositionRequestInternal *_internal;
}

- (void)finishCancelledRequest;
- (void)finishWithError:(id)arg1;
- (void)finishWithComposedVideoFrame:(struct __CVBuffer *)arg1;
- (struct __CVBuffer *)sourceFrameByTrackID:(int)arg1;
@property(readonly, nonatomic) id <AVVideoCompositionInstruction> videoCompositionInstruction;
@property(readonly, nonatomic) NSArray *sourceTrackIDs;
@property(readonly, nonatomic) CDStruct_1b6d18a9 compositionTime;
@property(readonly, nonatomic) AVVideoCompositionRenderContext *renderContext;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (void)finalize;
- (void)_willDeallocOrFinalize;
- (struct OpaqueFigVideoCompositorFrame *)compositionFrame;
- (id)initUsingSession:(id)arg1 withRenderContext:(id)arg2 compositionFrame:(struct OpaqueFigVideoCompositorFrame *)arg3 atTime:(CDStruct_1b6d18a9)arg4 usingSources:(id)arg5 instruction:(id)arg6;

@end

