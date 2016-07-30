//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iWorkImport/TSPFileDataStorage.h>

@class NSURL;
@protocol TSPCryptoInfo;

__attribute__((visibility("hidden")))
@interface TSPTemporaryDataStorage : TSPFileDataStorage
{
    NSURL *_URL;
    id <TSPCryptoInfo> _decryptionInfo;
    _Bool _isMissingData;
    _Bool _gilligan_isRemote;
    _Bool _isMissingOriginalData;
}

@property(readonly, nonatomic) _Bool isMissingOriginalData; // @synthesize isMissingOriginalData=_isMissingOriginalData;
- (void)setGilligan_isRemote:(_Bool)arg1;
- (_Bool)gilligan_isRemote;
@property(readonly, nonatomic) _Bool isMissingData; // @synthesize isMissingData=_isMissingData;
- (void).cxx_destruct;
- (id)writeData:(id)arg1 toPackageWriter:(id)arg2 infoMessage:(struct DataInfo *)arg3 preferredFilename:(id)arg4;
- (void)performIOChannelReadWithAccessor:(CDUnknownBlockType)arg1;
- (void)performReadWithAccessor:(CDUnknownBlockType)arg1;
- (id)decryptionInfo;
- (unsigned long long)length;
- (void)dealloc;
- (id)init;
- (id)initWithURL:(id)arg1 decryptionInfo:(id)arg2;
- (id)initWithURL:(id)arg1 decryptionInfo:(id)arg2 isMissingOriginalData:(_Bool)arg3 isMissingData:(_Bool)arg4 gilligan_isRemote:(_Bool)arg5;
- (id)initWithURL:(id)arg1 decryptionInfo:(id)arg2 isMissingOriginalData:(_Bool)arg3 isMissingData:(_Bool)arg4;

@end

