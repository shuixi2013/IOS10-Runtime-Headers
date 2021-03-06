//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <BulletinBoard/NSObject-Protocol.h>

@class BBDataProviderIdentity, BBParentSectionDataProviderFactory, NSString;
@protocol BBRemoteDataProviderClientProxy;

@protocol BBDataProviderConnectionServerProxy <NSObject>
- (void)clientIsReady:(void (^)(void))arg1;
- (void)addParentSectionFactory:(BBParentSectionDataProviderFactory *)arg1;
- (void)removeDataProviderWithSectionID:(NSString *)arg1;
- (void)addDataProviderWithSectionID:(NSString *)arg1 clientProxy:(id <BBRemoteDataProviderClientProxy>)arg2 identity:(BBDataProviderIdentity *)arg3 completion:(void (^)(id <BBRemoteDataProviderServerProxy>))arg4;
@end

