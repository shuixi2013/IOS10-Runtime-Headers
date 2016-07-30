//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/_UIRemoteViewController.h>

#import <WebContentAnalysis/WFPINEntryViewControllerProtocol-Protocol.h>

@class NSObject;
@protocol WFPINEntryViewControllerProtocol;

__attribute__((visibility("hidden")))
@interface WFRemotePINEntryViewController : _UIRemoteViewController <WFPINEntryViewControllerProtocol>
{
    NSObject<WFPINEntryViewControllerProtocol> *_delegate;
}

+ (id)exportedInterface;
+ (id)serviceViewControllerInterface;
@property(nonatomic) NSObject<WFPINEntryViewControllerProtocol> *delegate; // @synthesize delegate=_delegate;
- (_Bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (_Bool)simplePIN;
- (_Bool)isNumericPIN;
- (_Bool)requiresKeyboard;
- (void)userDidCancel;
- (void)userEnteredCorrectPIN;
- (unsigned long long)supportedInterfaceOrientations;
- (void)setPageTitle:(id)arg1;
- (void)setURL:(id)arg1;
- (void)dealloc;
- (void)viewDidLoad;

@end

