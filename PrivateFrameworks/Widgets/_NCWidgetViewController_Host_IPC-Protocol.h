//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSUUID;

@protocol _NCWidgetViewController_Host_IPC
- (void)__closeTransactionForAppearanceCallWithState:(int)arg1 withIdentifier:(NSUUID *)arg2;
- (void)__requestPreferredViewHeight:(double)arg1 usingAutolayout:(_Bool)arg2 requestIdentifier:(NSUUID *)arg3;

@optional
- (void)__setLargestAvailableDisplayMode:(long long)arg1;
- (void)__closeTransactionForActiveDisplayModeChangeWithIdentifier:(NSUUID *)arg1;
@end

