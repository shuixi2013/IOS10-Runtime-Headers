//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <VectorKit/VKTileSource.h>

@class GEOActiveTileSet, VKTilePool, VKTimer, _VKTileSetBackedTileSourceTimerTarget;

__attribute__((visibility("hidden")))
@interface VKTileSetBackedTileSource : VKTileSource
{
    GEOActiveTileSet *_tileSet;
    struct _GEOTileKey _downloadTemplate;
    unsigned int _minimumDownloadZoomLevel;
    unsigned int _maximumDownloadZoomLevel;
    VKTimer *_expirationTimer;
    VKTilePool *_expiredTilePool;
    struct ZoomRange _zoomLevelRange;
    _VKTileSetBackedTileSourceTimerTarget *_timerTarget;
}

@property(retain, nonatomic) GEOActiveTileSet *tileSet; // @synthesize tileSet=_tileSet;
- (long long)maximumZoomLevel;
- (long long)minimumZoomLevel;
- (long long)defaultMaximumZoomLevel;
- (long long)defaultMinimumZoomLevel;
- (unsigned long long)mapLayerForZoomLevelRange;
- (void)setStyleManager:(shared_ptr_a3c46825)arg1;
- (void)populateVisibleTileSets:(id)arg1 withTiles:(id)arg2;
- (void)_expireTiles;
- (void)_scheduleTileExpirationTimer:(double)arg1 forceUpdate:(_Bool)arg2;
- (void)fetchedTile:(id)arg1 forKey:(const struct VKTileKey *)arg2;
- (id)tileForKey:(const struct VKTileKey *)arg1;
- (id)tileForData:(id)arg1 downloadKey:(const struct _GEOTileKey *)arg2 sourceKey:(const struct VKTileKey *)arg3;
- (struct VKTileKey)sourceKeyForRenderKey:(const struct VKTileKey *)arg1;
- (_Bool)canFetchTileForKey:(const struct VKTileKey *)arg1;
- (struct _GEOTileKey)downloadKeyAtX:(unsigned int)arg1 y:(unsigned int)arg2 z:(unsigned int)arg3;
- (_Bool)shouldObeyHybridUnavailableRegions;
- (unsigned int)maximumDownloadZoomLevel;
- (unsigned int)minimumDownloadZoomLevel;
- (long long)tileSize;
- (double)_nextTileExpirationDate;
- (double)_expirationInterval;
- (_Bool)expires;
- (void)setClient:(id)arg1;
- (void)clearCaches;
- (void)dealloc;
- (id)initWithTileSet:(id)arg1 resourceManifestConfiguration:(id)arg2 locale:(id)arg3 sharedResources:(id)arg4;

@end

