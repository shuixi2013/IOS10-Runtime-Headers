//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class IDSDataChannelLinkContext, NSArray, _IDSDatagramChannel;

@interface IDSDatagramChannel : NSObject
{
    _IDSDatagramChannel *_internal;
}

- (void)setChannelPreferences:(id)arg1;
- (void)sendMetadata;
- (void)readyToRead;
- (void)setReadHandler:(CDUnknownBlockType)arg1;
- (void)setEventHandler:(CDUnknownBlockType)arg1;
- (void)writeDatagram:(const void *)arg1 datagramSize:(unsigned int)arg2 flags:(CDStruct_ec0e349a)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)writeDatagrams:(const void **)arg1 datagramSizes:(unsigned int *)arg2 datagramInfo:(CDStruct_ec0e349a)arg3 datagramCount:(int)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)start;
- (void)invalidate;
- (void)close;
- (void)readDatagramWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)processMetadataForDatagram:(char *)arg1 size:(unsigned long long)arg2 datagramInfo:(CDStruct_ec0e349a *)arg3;
- (void)selectDefaultLink:(BOOL)arg1;
- (void)addNewIDSDataChannelLinkWithAttributes:(char *)arg1;
- (void)removeIDSDataChannelLinkContext:(BOOL)arg1;
- (void)sendEventConnectedWithDummyLinkInfo;
- (int)underlyingFileDescriptor;
- (id)description;
- (void)dealloc;
- (id)initWithDestination:(id)arg1;
- (id)initWithSocketDescriptor:(int)arg1;
@property(readonly) IDSDataChannelLinkContext *defaultLink;
@property(readonly) NSArray *connectedLinks;

@end

