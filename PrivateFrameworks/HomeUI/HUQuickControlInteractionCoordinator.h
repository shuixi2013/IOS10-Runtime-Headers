//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class UIView;
@protocol HUQuickControlControllableView, HUQuickControlInteractionCoordinatorDelegate, HUQuickControlInteractionHost;

@interface HUQuickControlInteractionCoordinator : NSObject
{
    _Bool _userInteractionEnabled;
    UIView<HUQuickControlControllableView> *_controlView;
    id <HUQuickControlInteractionCoordinatorDelegate> _delegate;
    id <HUQuickControlInteractionHost> _interactionHost;
}

@property(nonatomic) __weak id <HUQuickControlInteractionHost> interactionHost; // @synthesize interactionHost=_interactionHost;
@property(nonatomic) __weak id <HUQuickControlInteractionCoordinatorDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) UIView<HUQuickControlControllableView> *controlView; // @synthesize controlView=_controlView;
@property(nonatomic, getter=isUserInteractionEnabled) _Bool userInteractionEnabled; // @synthesize userInteractionEnabled=_userInteractionEnabled;
- (void).cxx_destruct;
@property(readonly, nonatomic, getter=isUserInteractionActive) _Bool userInteractionActive;
- (void)beginUserInteractionWithFirstTouchGestureRecognizer:(id)arg1;
- (id)initWithControlView:(id)arg1 delegate:(id)arg2;

// Remaining properties
@property(retain, nonatomic) id value; // @dynamic value;

@end

