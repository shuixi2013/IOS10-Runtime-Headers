//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CameraKit/CAAnimationDelegate-Protocol.h>

@class NSString;

@interface CMKAnimationDelegate : NSObject <CAAnimationDelegate>
{
    CDUnknownBlockType _completion;
    CDUnknownBlockType _start;
}

@property(copy, nonatomic) CDUnknownBlockType start; // @synthesize start=_start;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
- (void).cxx_destruct;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)animationDidStart:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

