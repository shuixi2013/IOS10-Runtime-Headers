//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <VectorKit/VKTileSetBackedTileSource.h>

__attribute__((visibility("hidden")))
@interface VKLabelTileSource : VKTileSetBackedTileSource
{
    shared_ptr_e1d4bd06 _labelManager;
    _Bool _localizeLabels;
    unsigned char _labelScaleFactor;
}

@property(nonatomic) unsigned char labelScaleFactor; // @synthesize labelScaleFactor=_labelScaleFactor;
@property(nonatomic) _Bool localizeLabels; // @synthesize localizeLabels=_localizeLabels;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)tileForData:(id)arg1 downloadKey:(const struct _GEOTileKey *)arg2 sourceKey:(const struct VKTileKey *)arg3;
- (unsigned char)_labelTileType;
- (_Bool)shouldObeyHybridUnavailableRegions;
- (long long)defaultMaximumZoomLevel;
- (_Bool)maximumZoomLevelBoundsCamera;
- (_Bool)minimumZoomLevelBoundsCamera;
- (void)dealloc;
- (id)initWithTileSet:(id)arg1 resourceManifestConfiguration:(id)arg2 locale:(id)arg3 sharedResources:(id)arg4 labelManager:(const shared_ptr_e1d4bd06 *)arg5;

@end

