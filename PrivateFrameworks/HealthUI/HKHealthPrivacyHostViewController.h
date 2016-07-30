//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/_UIRemoteViewController.h>

#import <HealthUI/HKHealthPrivacyHostRemoteViewController-Protocol.h>

@protocol HKHealthPrivacyHostViewControllerDelegate;

@interface HKHealthPrivacyHostViewController : _UIRemoteViewController <HKHealthPrivacyHostRemoteViewController>
{
    id <HKHealthPrivacyHostViewControllerDelegate> _delegate;
}

+ (id)exportedInterface;
+ (id)serviceViewControllerInterface;
+ (_Bool)shouldPropagateAppearanceCustomizations;
+ (id)requestRemoteViewControllerWithConnectionHandler:(CDUnknownBlockType)arg1;
@property(nonatomic) __weak id <HKHealthPrivacyHostViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)viewServiceDidTerminateWithError:(id)arg1;
- (id)_healthPrivacyServiceViewControllerProxy;
- (void)didFinishWithError:(id)arg1;
- (void)setPromptSession:(id)arg1;
- (void)setRequestRecord:(id)arg1 updateDescription:(id)arg2 shareDescription:(id)arg3;

@end

