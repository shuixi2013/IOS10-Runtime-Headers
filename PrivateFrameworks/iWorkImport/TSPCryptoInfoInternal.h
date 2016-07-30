//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <iWorkImport/TSPCryptoInfo-Protocol.h>

@class NSArray, NSString, SFUCryptoKey;

__attribute__((visibility("hidden")))
@interface TSPCryptoInfoInternal : NSObject <TSPCryptoInfo>
{
    SFUCryptoKey *_cryptoKey;
    unsigned long long _preferredBlockSize;
    NSArray *_blockInfos;
    unsigned long long _decodedLength;
}

@property(nonatomic) unsigned long long decodedLength; // @synthesize decodedLength=_decodedLength;
@property(retain, nonatomic) NSArray *blockInfos; // @synthesize blockInfos=_blockInfos;
@property(readonly, nonatomic) unsigned long long preferredBlockSize; // @synthesize preferredBlockSize=_preferredBlockSize;
@property(readonly, nonatomic) SFUCryptoKey *cryptoKey; // @synthesize cryptoKey=_cryptoKey;
- (void).cxx_destruct;
- (id)mutableCryptoInfoCopy;
- (id)initWithCryptoInfo:(id)arg1;
- (id)initWithCryptoKey:(id)arg1 preferredBlockSize:(unsigned long long)arg2 blockInfos:(id)arg3 decodedLength:(unsigned long long)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

