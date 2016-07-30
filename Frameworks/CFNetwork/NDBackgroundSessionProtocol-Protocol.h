//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CFNetwork/NSObject-Protocol.h>

@class NSData, NSDictionary, NSString, NSURL, NSURLRequest;

@protocol NDBackgroundSessionProtocol <NSObject>
- (void)avAssetDownloadTaskWithDownloadToken:(unsigned long long)arg1 URL:(NSURL *)arg2 destinationURL:(NSURL *)arg3 temporaryDestinationURL:(NSURL *)arg4 assetTitle:(NSString *)arg5 assetArtworkData:(NSData *)arg6 options:(NSDictionary *)arg7 identifier:(unsigned long long)arg8 reply:(void (^)(_Bool))arg9;
- (void)setPropertyOnStreamWithIdentifier:(unsigned long long)arg1 propDict:(NSDictionary *)arg2 propKey:(NSString *)arg3 withReply:(void (^)(_Bool))arg4;
- (void)invalidateWithReply:(void (^)(void))arg1;
- (void)resetStorageWithReply:(void (^)(void))arg1;
- (void)setBytesPerSecondLimit:(long long)arg1 forTaskWithIdentifier:(unsigned long long)arg2;
- (void)setLoadingPoolPriority:(double)arg1 forTaskWithIdentifier:(unsigned long long)arg2;
- (void)setPriority:(long long)arg1 forTaskWithIdentifier:(unsigned long long)arg2;
- (void)setDescription:(NSString *)arg1 forTask:(unsigned long long)arg2;
- (void)resumeTaskWithIdentifier:(unsigned long long)arg1;
- (void)suspendTaskWithIdentifier:(unsigned long long)arg1;
- (void)cancelTaskWithIdentifier:(unsigned long long)arg1 byProducingResumeData:(void (^)(NSData *))arg2;
- (void)cancelTaskWithIdentifier:(unsigned long long)arg1;
- (void)downloadTaskWithResumeData:(NSData *)arg1 identifier:(unsigned long long)arg2 reply:(void (^)(_Bool))arg3;
- (void)dataTaskWithRequest:(NSURLRequest *)arg1 originalRequest:(NSURLRequest *)arg2 identifier:(unsigned long long)arg3 reply:(void (^)(_Bool))arg4;
- (void)uploadTaskWithRequest:(NSURLRequest *)arg1 originalRequest:(NSURLRequest *)arg2 fromFile:(NSURL *)arg3 sandboxExtensionData:(NSData *)arg4 identifier:(unsigned long long)arg5 potentialCredentials:(NSDictionary *)arg6 reply:(void (^)(_Bool))arg7;
- (void)downloadTaskWithRequest:(NSURLRequest *)arg1 originalRequest:(NSURLRequest *)arg2 downloadFilePath:(NSString *)arg3 identifier:(unsigned long long)arg4 reply:(void (^)(_Bool))arg5;
@end

