//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SiriUI/NSObject-Protocol.h>

@class UIView;
@protocol SiriUISiriStatusViewDelegate;

@protocol SiriUISiriStatusViewProtocol <NSObject>
@property(nonatomic) _Bool flamesViewDeferred;
@property(readonly, nonatomic) UIView *flamesContainerView;
@property(nonatomic) __weak id <SiriUISiriStatusViewDelegate> delegate;
@property(nonatomic) double disabledMicOpacity;
@property(nonatomic) double flamesViewWidth;
@property(nonatomic) long long mode;
- (void)forceMicVisible:(_Bool)arg1;
@end

