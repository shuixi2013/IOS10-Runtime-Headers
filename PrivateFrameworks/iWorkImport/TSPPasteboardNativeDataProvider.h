//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <iWorkImport/TSPDecoder-Protocol.h>
#import <iWorkImport/TSPPasteboardWriting-Protocol.h>

@class NSMutableDictionary, NSString, TSPPasteboard;

__attribute__((visibility("hidden")))
@interface TSPPasteboardNativeDataProvider : NSObject <TSPDecoder, TSPPasteboardWriting>
{
    TSPPasteboard *_pasteboard;
    NSMutableDictionary *_nativeData;
    NSMutableDictionary *_tspData;
}

- (void).cxx_destruct;
- (id)pasteboardPropertyListForType:(id)arg1;
- (id)writableTypesForPasteboard:(id)arg1;
- (id)newReadChannelForDataWithIdentifier:(long long)arg1 info:(id)arg2;
- (id)newReadChannelForRootObjectComponent;
- (id)newReadChannelForMetadata;
- (id)dataForIdentifier:(long long)arg1;
- (void)loadNativeData;
@property(readonly, copy) NSString *debugDescription;
- (id)initWithPasteboard:(id)arg1 nativeData:(id)arg2 tspData:(id)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

