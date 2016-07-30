//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <TextureIO/TXRDataSourceProvider-Protocol.h>

@class NSString, TXRTextureInfo;
@protocol OS_dispatch_queue, OS_dispatch_semaphore, TXRBufferAllocator, TXRParser;

@interface TXRFileDataSourceProvider : NSObject <TXRDataSourceProvider>
{
    id <TXRBufferAllocator> _bufferAllocator;
    NSObject<OS_dispatch_queue> *_fileIOQueue;
    NSObject<OS_dispatch_semaphore> *_infoLoaded;
    id <TXRParser> _parser;
    TXRTextureInfo *_textureInfo;
}

- (void).cxx_destruct;
- (id)provideTextureInfo;
- (id)provideImageInfoAtLevel:(unsigned long long)arg1 element:(unsigned long long)arg2 face:(unsigned long long)arg3;
- (void)_parseData:(id)arg1 bufferAllocator:(id)arg2 options:(id)arg3 error:(id *)arg4;
- (unsigned long long)_determineFileType:(id)arg1;
- (id)initWithData:(id)arg1 bufferAllocator:(id)arg2 options:(id)arg3 error:(id *)arg4;
- (id)initWithURL:(id)arg1 bufferAllocator:(id)arg2 options:(id)arg3 error:(id *)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

