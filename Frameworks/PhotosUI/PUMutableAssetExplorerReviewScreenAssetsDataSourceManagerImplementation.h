//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosUI/PUMutableAssetExplorerReviewScreenAssetsDataSourceManager-Protocol.h>

@class NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface PUMutableAssetExplorerReviewScreenAssetsDataSourceManagerImplementation : NSObject <PUMutableAssetExplorerReviewScreenAssetsDataSourceManager>
{
    NSMutableDictionary *_replacementAssetsByUUID;
}

@property(readonly, nonatomic) NSMutableDictionary *replacementAssetsByUUID; // @synthesize replacementAssetsByUUID=_replacementAssetsByUUID;
- (void).cxx_destruct;
- (void)removeReplacementAssetInDataSourceForUUID:(id)arg1;
- (void)replaceAssetInDataSourceWithAsset:(id)arg1;
- (id)initWithReplacementAssetsByUUID:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

