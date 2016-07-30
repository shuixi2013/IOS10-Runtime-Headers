//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iWorkImport/TSPStreamDataStorage.h>

@class NSData;

__attribute__((visibility("hidden")))
@interface TSPReadOnlyMemoryDataStorage : TSPStreamDataStorage
{
    NSData *_NSData;
}

- (void).cxx_destruct;
- (_Bool)readOnly;
- (unsigned long long)encodedLength;
- (_Bool)isReadable;
- (id)writeData:(id)arg1 toPackageWriter:(id)arg2 infoMessage:(struct DataInfo *)arg3 preferredFilename:(id)arg4;
- (void)archiveInfoMessage:(struct DataInfo *)arg1 archiver:(id)arg2;
- (id)NSDataWithOptions:(unsigned long long)arg1;
- (void)performIOChannelReadWithAccessor:(CDUnknownBlockType)arg1;
- (id)initWithNSData:(id)arg1;

@end

