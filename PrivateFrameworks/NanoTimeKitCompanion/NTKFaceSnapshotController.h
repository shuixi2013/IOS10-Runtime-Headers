//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSXPCConnection;

@interface NTKFaceSnapshotController : NSObject
{
    NSXPCConnection *_connection;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)_updateAllSnapshots;
- (void)faceSnapshotChangedForKey:(id)arg1;
- (void)createFaceForPerformanceTesting:(long long)arg1;
- (void)synchronouslyUpdateAllSnapshots;
- (id)unadornedSnapshotForFace:(id)arg1;
- (id)snapshotForFace:(id)arg1;
- (void)dealloc;
- (void)_setupConnection;
- (id)init;

@end

