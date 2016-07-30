//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreDAV/CoreDAVMultiMoveWithFallbackTaskGroup.h>

@class NSDictionary, NSMutableDictionary;

@interface CalDAVMultiMoveWithFallbackTaskGroup : CoreDAVMultiMoveWithFallbackTaskGroup
{
    NSDictionary *_sourceEntityScheduleTags;
    _Bool _isAutoScheduleSupported;
    NSMutableDictionary *_destinationEntityScheduleTags;
}

@property(retain, nonatomic) NSMutableDictionary *destinationEntityScheduleTags; // @synthesize destinationEntityScheduleTags=_destinationEntityScheduleTags;
@property(nonatomic) _Bool isAutoScheduleSupported; // @synthesize isAutoScheduleSupported=_isAutoScheduleSupported;
@property(retain, nonatomic) NSDictionary *sourceEntityScheduleTags; // @synthesize sourceEntityScheduleTags=_sourceEntityScheduleTags;
- (void).cxx_destruct;
- (void)_completedPropFindTask:(id)arg1 intermediateETag:(id)arg2 intermediateScheduleTag:(id)arg3 destinationFilename:(id)arg4;
- (void)_setTagsForDestinationEntityAtURL:(id)arg1 fromTaskResponseHeaders:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (id)initWithSourceURLs:(id)arg1 destinationURL:(id)arg2 overwrite:(_Bool)arg3 useFallback:(_Bool)arg4 sourceEntityDataPayloads:(id)arg5 sourceEntityDataContentTypes:(id)arg6 sourceEntityETags:(id)arg7 sourceEntityScheduleTags:(id)arg8 accountInfoProvider:(id)arg9 taskManager:(id)arg10 isAutoScheduleSupported:(_Bool)arg11;

@end

