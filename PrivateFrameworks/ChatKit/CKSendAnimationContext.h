//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <ChatKit/CKSendAnimationContext-Protocol.h>

@class CABackdropLayer, NSArray, NSString, UIView;

@interface CKSendAnimationContext : NSObject <CKSendAnimationContext>
{
    _Bool _shouldRepeat;
    _Bool _isSender;
    NSArray *_animatableViews;
    NSArray *_animatableTextViews;
    NSString *_impactIdentifier;
    NSArray *_throwBalloonViews;
    UIView *_containerView;
    NSArray *_framesOfAddedChatItems;
    CABackdropLayer *_backdropLayer;
    NSArray *_messages;
    NSArray *_throwBalloonViewAttributesCollection;
}

@property(copy, nonatomic) NSArray *throwBalloonViewAttributesCollection; // @synthesize throwBalloonViewAttributesCollection=_throwBalloonViewAttributesCollection;
@property(retain, nonatomic) NSArray *messages; // @synthesize messages=_messages;
@property(retain, nonatomic) CABackdropLayer *backdropLayer; // @synthesize backdropLayer=_backdropLayer;
@property(copy, nonatomic) NSArray *framesOfAddedChatItems; // @synthesize framesOfAddedChatItems=_framesOfAddedChatItems;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(copy, nonatomic) NSArray *throwBalloonViews; // @synthesize throwBalloonViews=_throwBalloonViews;
@property(nonatomic) _Bool isSender; // @synthesize isSender=_isSender;
@property(nonatomic) _Bool shouldRepeat; // @synthesize shouldRepeat=_shouldRepeat;
@property(retain, nonatomic) NSString *impactIdentifier; // @synthesize impactIdentifier=_impactIdentifier;
@property(copy, nonatomic) NSArray *animatableTextViews; // @synthesize animatableTextViews=_animatableTextViews;
@property(copy, nonatomic) NSArray *animatableViews; // @synthesize animatableViews=_animatableViews;
- (void).cxx_destruct;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

