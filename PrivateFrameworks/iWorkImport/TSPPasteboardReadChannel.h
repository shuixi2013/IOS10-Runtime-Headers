//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <iWorkImport/TSUStreamReadChannel-Protocol.h>

@class NSString, TSPPasteboard;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface TSPPasteboardReadChannel : NSObject <TSUStreamReadChannel>
{
    NSObject<OS_dispatch_queue> *_readQueue;
    TSPPasteboard *_pasteboard;
    NSString *_pasteboardType;
}

- (void).cxx_destruct;
- (void)_close;
- (void)close;
- (void)readWithHandler:(CDUnknownBlockType)arg1;
- (id)init;
- (id)initWithPasteboard:(id)arg1 pasteboardType:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

