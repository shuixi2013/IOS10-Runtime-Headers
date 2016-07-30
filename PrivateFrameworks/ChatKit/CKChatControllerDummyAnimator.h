//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <ChatKit/CKImpactEffectAnimationProvider-Protocol.h>

@class CAEmitterLayer, CKImpactEffectHapticsGenerator;
@protocol CKSendAnimationManager;

@interface CKChatControllerDummyAnimator : NSObject <CKImpactEffectAnimationProvider>
{
    id <CKSendAnimationManager> _animationDelegate;
    CAEmitterLayer *_dustEmitter;
    CKImpactEffectHapticsGenerator *_hapticsGenerator;
}

@property(retain, nonatomic) CKImpactEffectHapticsGenerator *hapticsGenerator; // @synthesize hapticsGenerator=_hapticsGenerator;
@property(retain, nonatomic) CAEmitterLayer *dustEmitter; // @synthesize dustEmitter=_dustEmitter;
@property(nonatomic) __weak id <CKSendAnimationManager> animationDelegate; // @synthesize animationDelegate=_animationDelegate;
- (void).cxx_destruct;
- (void)_beginGentleAnimationWithContext:(id)arg1;
- (void)_beginFocusAnimationWithContext:(id)arg1;
- (void)_beginLoudAnimationsWithContext:(id)arg1;
- (void)_beginImpactAnimationWithContext:(id)arg1;
- (void)_beginThrowAnimationWithContext:(id)arg1;
- (void)beginAnimationWithSendAnimationContext:(id)arg1;
- (void)stopAnimationWithSendAnimationContext:(id)arg1;
- (id)init;

@end

