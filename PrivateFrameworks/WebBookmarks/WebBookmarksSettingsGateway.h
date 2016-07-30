//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class WebBookmarksXPCConnection;

@interface WebBookmarksSettingsGateway : NSObject
{
    WebBookmarksXPCConnection *_connection;
}

- (void).cxx_destruct;
- (void)getCurrentlySelectedSearchEngineWithCompletion:(CDUnknownBlockType)arg1;
- (void)clearAllSafariHistory;
- (void)getSafariDataUsageByteCountWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)deleteSafariPersistentURLCacheStorage;
- (void)deleteSafariWebsiteDataRecord:(id)arg1;
- (void)deleteAllSafariSecurityOrigins;
- (void)getSafariWebDataUsageWithCompletion:(CDUnknownBlockType)arg1;
- (id)init;

@end

