//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <MediaPlayer/MPStoreDownloadManagerObserver-Protocol.h>

@class NSString;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface MPStoreDownloadExpectationController : NSObject <MPStoreDownloadManagerObserver>
{
    NSObject<OS_dispatch_queue> *_accessQueue;
    CDUnknownBlockType _completionHandler;
    NSObject<OS_dispatch_source> *_dispatchSource;
    unsigned long long _downloadManagerMonitorCount;
    CDUnknownBlockType _searchBlock;
    double _timeout;
}

- (void).cxx_destruct;
- (void)_endMonitoringDownloadManager;
- (void)_beginMonitoringDownloadManager;
- (void)_finishWithDownload:(id)arg1 error:(id)arg2;
- (void)_attemptDownloadSearch;
- (void)startWithCompletionHandler:(CDUnknownBlockType)arg1;
@property(nonatomic) double timeout;
@property(copy, nonatomic) CDUnknownBlockType searchBlock;
- (void)downloadManager:(id)arg1 didAddDownloads:(id)arg2 removeDownloads:(id)arg3;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

