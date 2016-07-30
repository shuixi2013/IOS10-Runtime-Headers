//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotoLibraryServices/PLCloudService.h>

@class NSObject, PLCloudPhotoLibraryManager, PLPhotoLibrary;
@protocol OS_dispatch_queue;

@interface PLCloudMetadataService : PLCloudService
{
    unsigned long long _version;
    NSObject<OS_dispatch_queue> *_agentQueue;
    PLPhotoLibrary *_localLibrary;
    PLCloudPhotoLibraryManager *_remoteLibrary;
}

- (void)systemStarted:(id)arg1;
- (void)metadataStable:(id)arg1;
- (void)resetSync;
- (void)metadataChanged:(id)arg1;
- (void)activate;
- (_Bool)agentRunning;
- (void)dealloc;
- (id)init;

@end

