//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray, NSMutableDictionary, NSMutableSet;

__attribute__((visibility("hidden")))
@interface OCXContentTypes : NSObject
{
    NSMutableArray *mContentTypes;
    NSMutableSet *mDefaultTypes;
    NSMutableDictionary *mContentTypeObjectMap;
    NSMutableDictionary *mContentTypeCountMap;
}

+ (id)relativePathForPath:(id)arg1 currentPath:(id)arg2;
- (void)writeContentTypesToStream:(id)arg1;
- (_Bool)isLastEntryContentType:(id)arg1;
- (_Bool)containsContentType:(id)arg1 withKey:(id)arg2;
- (_Bool)containsContentType:(id)arg1;
- (id)pathForMainDocument;
- (id)pathForContentType:(id)arg1;
- (id)pathForKey:(id)arg1;
- (id)addContentTypeForKey:(id)arg1 contentType:(id)arg2 path:(id)arg3;
- (void)dealloc;
- (id)init;
- (id)uniquePathForPath:(id)arg1;
- (void)addContentTypeForContentType:(id)arg1 extension:(id)arg2;
- (void)populateCommonExtensions;

@end

