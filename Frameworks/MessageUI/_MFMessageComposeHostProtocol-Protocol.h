//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MessageUI/NSObject-Protocol.h>

@class MFMessagePayload, _MFMessageMediaPayload;

@protocol _MFMessageComposeHostProtocol <NSObject>
- (void)_stageMediaItem:(_MFMessageMediaPayload *)arg1 completionHandler:(void (^)(NSError *))arg2;
- (void)_stageAppItem:(MFMessagePayload *)arg1 completionHandler:(void (^)(NSError *))arg2;
@end

