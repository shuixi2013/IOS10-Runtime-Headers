//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Photos/PHFaceCollection.h>

#import <PhotosUICore/PXFaceCollection-Protocol.h>

@class NSString;

@interface PHFaceCollection (PXFaceCollection) <PXFaceCollection>
- (unsigned long long)numberOfAssets;
- (void)requestFaceTileImageWithTargetSize:(struct CGSize)arg1 cropFactor:(unsigned long long)arg2 round:(_Bool)arg3 cacheResult:(_Bool)arg4 completionBlock:(CDUnknownBlockType)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

