//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NanoTimeKitCompanion/NSObject-Protocol.h>

@class NTKFace;

@protocol NTKFaceObserver <NSObject>

@optional
- (void)face:(NTKFace *)arg1 didChangeOptionsForEditMode:(long long)arg2;
- (void)faceResourceDirectoryDidChange:(NTKFace *)arg1;
- (void)faceConfigurationDidChange:(NTKFace *)arg1;
@end

