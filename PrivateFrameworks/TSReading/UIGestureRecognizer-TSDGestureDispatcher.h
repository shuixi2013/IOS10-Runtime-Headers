//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIGestureRecognizer.h>

#import <TSReading/TSDGesture-Protocol.h>

@class NSString, TSDRep;
@protocol TSDGestureDelegate, TSDGestureTarget;

@interface UIGestureRecognizer (TSDGestureDispatcher) <TSDGesture>
- (_Bool)isDone;
@property(readonly, nonatomic) int gestureState;
@property(nonatomic) id <TSDGestureDelegate> gestureDelegate;
- (struct CGPoint)naturalLocationForRep:(id)arg1;
- (struct CGPoint)boundsLocationForICC:(id)arg1;
- (struct CGPoint)unscaledLocationForICC:(id)arg1;
@property(retain, nonatomic) TSDRep *targetRep;
@property(retain, nonatomic) id <TSDGestureTarget> cachedGestureTarget;
@property(retain, nonatomic) NSString *gestureKind;
- (id)initWithGestureDispatcher:(id)arg1 gestureKind:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

