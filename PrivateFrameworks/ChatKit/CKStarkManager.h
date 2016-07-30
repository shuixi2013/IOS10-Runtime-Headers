//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class UIScreen, UIViewController, UIWindow;

@interface CKStarkManager : NSObject
{
    _Bool _isStarkConnected;
    UIViewController *_starkRootViewController;
    UIWindow *_starkWindow;
    UIScreen *_starkScreen;
}

+ (id)sharedInstance;
@property(retain, nonatomic) UIScreen *starkScreen; // @synthesize starkScreen=_starkScreen;
@property(retain, nonatomic) UIWindow *starkWindow; // @synthesize starkWindow=_starkWindow;
@property(retain, nonatomic) UIViewController *starkRootViewController; // @synthesize starkRootViewController=_starkRootViewController;
- (void).cxx_destruct;
- (void)activateForRecipient:(id)arg1;
- (void)activateForConversation:(id)arg1;
- (void)detachStarkScreen:(id)arg1;
- (void)attachStarkToScreen:(id)arg1;
- (void)screenDidDisconnectNotification:(id)arg1;
- (void)screenDidConnectNotification:(id)arg1;
- (void)startListeningForScreenNotifications;
@property(readonly, nonatomic) _Bool isStarkConnected; // @synthesize isStarkConnected=_isStarkConnected;
- (void)dealloc;
- (id)init;

@end

