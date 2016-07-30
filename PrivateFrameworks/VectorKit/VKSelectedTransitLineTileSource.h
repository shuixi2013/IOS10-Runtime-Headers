//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <VectorKit/VKTransitLineTileSource.h>

#import <VectorKit/GEOTileRequesterDelegate-Protocol.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface VKSelectedTransitLineTileSource : VKTransitLineTileSource <GEOTileRequesterDelegate>
{
    unsigned long long _selectedLineIDSequenceCounter;
    unordered_set_6cd805f9 _selectedLineIDs;
    unsigned int _maxZ;
    NSMutableArray *_inProgress;
}

@property(nonatomic) unsigned int maxZ; // @synthesize maxZ=_maxZ;
@property(nonatomic) const unordered_set_6cd805f9 *selectedLineIDs; // @synthesize selectedLineIDs=_selectedLineIDs;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)tileRequesterFinished:(id)arg1;
- (void)tileRequester:(id)arg1 receivedError:(id)arg2;
- (void)tileRequester:(id)arg1 receivedData:(id)arg2 tileEdition:(unsigned int)arg3 tileSet:(unsigned int)arg4 etag:(id)arg5 forKey:(struct _GEOTileKey)arg6 userInfo:(id)arg7;
- (void)performDownload:(const struct _GEOTileKey *)arg1;
- (_Bool)canFetchTileForKey:(const struct VKTileKey *)arg1;
- (_Bool)_shouldUseDecodedTile:(id)arg1 extraInfo:(id)arg2;
- (id)_extraInfoForPendingSourceKey:(const struct VKTileKey *)arg1;
- (unsigned long long)mapLayerForZoomLevelRange;
- (void)dealloc;
- (id)initWithTileSet:(id)arg1 resourceManifestConfiguration:(id)arg2 locale:(id)arg3 sharedResources:(id)arg4 labelExternalObjectsModerator:(struct LabelExternalObjectsModerator *)arg5 transitLineSharedResources:(const shared_ptr_f4e206f4 *)arg6;

@end

