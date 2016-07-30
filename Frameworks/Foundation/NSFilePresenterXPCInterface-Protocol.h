//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSFileCoordinationDebugInfoXPCInteface-Protocol.h>

@class NSString, NSURLPromisePair;

@protocol NSFilePresenterXPCInterface <NSFileCoordinationDebugInfoXPCInteface>
- (oneway void)logSuspensionWarning;
- (oneway void)updateLastEventID:(unsigned long long)arg1;
- (oneway void)observeVersionChangeOfKind:(NSString *)arg1 toItemAtURL:(NSURLPromisePair *)arg2 withClientID:(NSString *)arg3 name:(NSString *)arg4;
- (oneway void)observeUbiquityChangeWithSubitemURL:(NSURLPromisePair *)arg1;
- (oneway void)observeReconnection;
- (oneway void)observeDisconnection;
- (oneway void)observeMoveToURL:(NSURLPromisePair *)arg1 withSubitemURL:(NSURLPromisePair *)arg2 byWriterWithPurposeID:(id)arg3;
- (oneway void)observeChangeWithSubitemURL:(NSURLPromisePair *)arg1;
- (void)accommodateDeletionOfSubitemAtURL:(NSURLPromisePair *)arg1 completionHandler:(void (^)(NSError *))arg2;
- (void)saveChangesWithCompletionHandler:(void (^)(NSError *))arg1;
- (void)reacquireFromWritingClaimForID:(id)arg1 completionHandler:(void (^)(void))arg2;
- (void)relinquishToWritingClaimWithID:(id)arg1 options:(unsigned long long)arg2 purposeID:(id)arg3 subitemURL:(NSURLPromisePair *)arg4 completionHandler:(void (^)(NSError *))arg5;
- (oneway void)reacquireFromReadingClaimForID:(id)arg1;
- (void)relinquishToReadingClaimWithID:(id)arg1 options:(unsigned long long)arg2 purposeID:(id)arg3 completionHandler:(void (^)(NSError *))arg4;
@end

