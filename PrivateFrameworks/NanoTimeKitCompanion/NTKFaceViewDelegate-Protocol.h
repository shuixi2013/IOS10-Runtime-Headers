//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NanoTimeKitCompanion/NSObject-Protocol.h>

@class NSDate, NSString;

@protocol NTKFaceViewDelegate <NSObject>
- (void)faceViewUpdatedResourceDirectory:(NSString *)arg1 wantsToTransferOwnership:(_Bool)arg2;
- (_Bool)faceViewComplicationIsEmptyForSlot:(NSString *)arg1;
- (void)faceViewDidHideOrShowComplicationSlot;
- (void)faceViewWantsUnadornedSnapshotViewRemoved;
- (void)faceViewDidReloadSnapshotContentViews;
- (void)faceViewWillUnloadSnapshotContentViews;
- (void)faceViewWillExitTimeTravel;
- (void)faceViewDidScrubToDate:(NSDate *)arg1 forced:(_Bool)arg2;
- (void)faceViewWillEnterTimeTravel;
- (void)faceViewDidLayoutSubviews;
- (void)faceViewWantsStatusBarHidden:(_Bool)arg1 animated:(_Bool)arg2;
- (void)faceViewWantsCustomKeylineFramesReloadedForEditMode:(long long)arg1;
- (void)faceViewWantsComplicationKeylineFramesReloaded;
@end
