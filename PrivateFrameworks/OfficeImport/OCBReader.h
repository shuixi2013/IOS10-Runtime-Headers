//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <OfficeImport/OCDEncryptedReader.h>

__attribute__((visibility("hidden")))
@interface OCBReader : OCDEncryptedReader
{
    struct OcBinaryReader *mBinaryReader;
    struct __sFILE *mFile;
}

@property(nonatomic) struct __sFILE *file; // @synthesize file=mFile;
@property(nonatomic) struct OcBinaryReader *binaryReader; // @synthesize binaryReader=mBinaryReader;
- (id)read;
- (_Bool)start;
- (void)restartReaderToUseDecryptedDocument;
- (_Bool)retainDecryptorWithErrorCode:(int *)arg1;
- (id)allocDecryptorWithCryptoKey:(struct OCCCryptoKey *)arg1 baseOutputFilename:(id)arg2;
- (struct OCCBinaryStreamer *)allocBinaryStreamerWithCryptoKey:(struct OCCCryptoKey *)arg1 baseOutputFilenameInUTF8:(const char *)arg2;
- (_Bool)isBinaryReader;
@property(readonly, nonatomic) struct OCCEncryptionInfoReader *encryptionInfoReader;
- (void)closeFile;
- (void)dealloc;
- (id)initWithCancelDelegate:(id)arg1 tracing:(id)arg2;

@end

