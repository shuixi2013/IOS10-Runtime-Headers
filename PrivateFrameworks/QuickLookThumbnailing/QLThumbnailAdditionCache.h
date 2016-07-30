//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSCache;

__attribute__((visibility("hidden")))
@interface QLThumbnailAdditionCache : NSObject
{
    NSCache *_additionsCache;
}

+ (id)sharedInstance;
- (void)cacheAddition:(id)arg1 forDocumentID:(id)arg2;
- (void)purgeCachedAdditionForItemAtURL:(id)arg1;
- (id)thumbnailAdditionForItemAtURL:(id)arg1 error:(id *)arg2;
- (id)init;

@end

