//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Home/NSObject-Protocol.h>

@class HMAccessory, HMAccessoryBrowser;

@protocol HMAccessoryBrowserDelegate <NSObject>

@optional
- (void)accessoryBrowser:(HMAccessoryBrowser *)arg1 didRemoveNewAccessory:(HMAccessory *)arg2;
- (void)accessoryBrowser:(HMAccessoryBrowser *)arg1 didFindNewAccessory:(HMAccessory *)arg2;
@end

