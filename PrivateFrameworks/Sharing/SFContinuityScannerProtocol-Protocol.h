//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Sharing/NSObject-Protocol.h>

@class NSData, NSString;

@protocol SFContinuityScannerProtocol <NSObject>
- (void)activityPayloadFromDeviceUniqueID:(NSString *)arg1 forAdvertisementPayload:(NSData *)arg2 command:(NSString *)arg3 withCompletionHandler:(void (^)(NSData *, NSError *))arg4;
- (void)setForceScanningEnabled:(_Bool)arg1;
@end

