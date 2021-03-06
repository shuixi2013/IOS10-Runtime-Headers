//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <MapKit/CAAnimationDelegate-Protocol.h>

@class NSMutableDictionary, NSString, UIActivityIndicatorView, UIButton, UIImageView;
@protocol MKUserTrackingButtonTarget, MKUserTrackingView;

__attribute__((visibility("hidden")))
@interface _MKUserTrackingButtonController : NSObject <CAAnimationDelegate>
{
    id <MKUserTrackingButtonTarget> _target;
    id <MKUserTrackingView> _userTrackingView;
    long long _state;
    UIImageView *_imageView;
    UIButton *_button;
    UIActivityIndicatorView *_activityIndicatorView;
    NSMutableDictionary *_skipModeDictionary;
}

@property(retain, nonatomic) NSMutableDictionary *skipModeDictionary; // @synthesize skipModeDictionary=_skipModeDictionary;
@property(readonly, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(nonatomic) long long state; // @synthesize state=_state;
@property(retain, nonatomic) id <MKUserTrackingView> userTrackingView; // @synthesize userTrackingView=_userTrackingView;
- (void).cxx_destruct;
- (void)_updateLoading;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (id)_contentAnimation;
- (id)_expandAnimation;
- (id)_shrinkAnimation;
- (void)_goToNextMode:(id)arg1;
- (void)_updateState;
- (void)_reloadState;
- (id)_imageForState:(long long)arg1 controlState:(unsigned long long)arg2;
- (_Bool)_shouldAnimateFromState:(long long)arg1 toState:(long long)arg2;
- (void)_authorizationStatusChanged:(id)arg1;
- (id)_activityIndicatorView;
- (void)dealloc;
- (id)initWithTarget:(id)arg1 userTrackingView:(id)arg2 imageView:(id)arg3 button:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

