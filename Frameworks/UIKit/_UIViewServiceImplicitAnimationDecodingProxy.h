//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/_UITargetedProxy.h>

#import <UIKit/_UIViewServiceImplicitAnimationDecodingProxy_EncodingProxyInterface-Protocol.h>

@class NSString, _UIViewAnimationAttributes;

__attribute__((visibility("hidden")))
@interface _UIViewServiceImplicitAnimationDecodingProxy : _UITargetedProxy <_UIViewServiceImplicitAnimationDecodingProxy_EncodingProxyInterface>
{
    SEL _implicitAnimationSelector;
    _UIViewAnimationAttributes *_animationAttributes;
}

+ (id)proxyDecodingAnimationsForTarget:(id)arg1;
- (void).cxx_destruct;
- (void)__animateNextInvocationOfSelector:(id)arg1 withAnimationAttributes:(id)arg2;
- (void)forwardInvocation:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

