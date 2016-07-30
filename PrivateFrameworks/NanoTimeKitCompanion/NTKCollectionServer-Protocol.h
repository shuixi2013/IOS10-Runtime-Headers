//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NanoTimeKitCompanion/NSObject-Protocol.h>

@class NSArray, NSNumber, NSString, NSUUID, NTKFace, NTKFaceConfiguration;

@protocol NTKCollectionServer <NSObject>
- (void)flushUpdatesWithIdentifier:(NSString *)arg1;
- (void)resetCollection;
- (void)removeFaceForUUID:(NSUUID *)arg1;
- (void)addFace:(NTKFace *)arg1 forUUID:(NSUUID *)arg2;
- (void)updateFaceForUUID:(NSUUID *)arg1 withResourceDirectory:(NSString *)arg2;
- (void)updateFaceForUUID:(NSUUID *)arg1 withConfiguration:(NTKFaceConfiguration *)arg2;
- (void)setOrderedFaceUUIDs:(NSArray *)arg1;
- (void)setSelectedFaceUUID:(NSUUID *)arg1;
- (void)registerForCollectionIdentifier:(NSString *)arg1 deviceUUID:(NSUUID *)arg2 withSeqId:(NSNumber *)arg3;
@end

