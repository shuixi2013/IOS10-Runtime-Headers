//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iWorkImport/NSObject-Protocol.h>

@class NSData, NSObject, NSString, SFUCryptoKey;
@protocol OS_dispatch_queue;

@protocol TSPPassphraseConsumer <NSObject>
@property(readonly, nonatomic) NSString *lastPasswordAttempted;
- (_Bool)setPassphrase:(NSString *)arg1;

@optional
@property(readonly, nonatomic) NSString *service;
@property(readonly, nonatomic) NSData *keychainGenericItem;
@property(readonly, nonatomic) NSString *passphraseHint;
- (void)cancel;
- (void)setPassphrase:(NSString *)arg1 completionQueue:(NSObject<OS_dispatch_queue> *)arg2 completion:(void (^)(_Bool, NSError *))arg3;
- (_Bool)setDecryptionKey:(SFUCryptoKey *)arg1;
@end

