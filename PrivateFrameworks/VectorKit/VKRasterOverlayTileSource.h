//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <VectorKit/VKTileSource.h>

@class NSArray, NSMutableArray, NSMutableSet, NSObject;
@protocol OS_dispatch_group, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface VKRasterOverlayTileSource : VKTileSource
{
    NSMutableArray *_overlays;
    NSObject<OS_dispatch_group> *_renderGroup;
    NSObject<OS_dispatch_queue> *_homeQ;
    _Bool _overrideMaxZoomLevel;
    NSMutableSet *_worldSizedOverlays;
}

@property(nonatomic) _Bool overrideMaxZoomLevel; // @synthesize overrideMaxZoomLevel=_overrideMaxZoomLevel;
@property(readonly, nonatomic) NSArray *overlays;
- (void)insertOverlay:(id)arg1 belowOverlay:(id)arg2;
- (void)insertOverlay:(id)arg1 aboveOverlay:(id)arg2;
- (void)exchangeOverlayAtIndex:(unsigned long long)arg1 withOverlayAtIndex:(unsigned long long)arg2;
- (void)insertOverlay:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)removeOverlay:(id)arg1;
- (void)addOverlay:(id)arg1;
- (void)invalidate;
- (void)_flush;
- (void)invalidateRect:(const Box_3d7e3c2c *)arg1 level:(long long)arg2;
- (void)_queueDraw:(const struct VKTileKey *)arg1;
- (_Bool)cancelFetchForKey:(const struct VKTileKey *)arg1;
- (void)fetchTileForKey:(const struct VKTileKey *)arg1 sourceKey:(const struct VKTileKey *)arg2;
- (_Bool)maximumZoomLevelBoundsCamera;
- (_Bool)minimumZoomLevelBoundsCamera;
- (unsigned int)maximumDownloadZoomLevel;
- (unsigned int)minimumDownloadZoomLevel;
- (long long)tileSize;
- (_Bool)canFetchTileForKey:(const struct VKTileKey *)arg1;
- (void)dealloc;
- (id)init;

@end

