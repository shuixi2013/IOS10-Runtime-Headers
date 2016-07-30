//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <VectorKit/VKVectorMapModel.h>

#import <VectorKit/VKStyleManagerObserver-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface VKRoadMapModel : VKVectorMapModel <VKStyleManagerObserver>
{
    int _sourceTileZtoStencilOffset;
    int _extraStencil;
    struct ClearItem *_clearItem;
    struct unique_ptr<md::RoadSharedResources, std::__1::default_delete<md::RoadSharedResources>> _roadSharedResources;
    struct unique_ptr<md::PatternedSharedResources, std::__1::default_delete<md::PatternedSharedResources>> _patternedSharedResources;
    _Bool _trafficEnabled;
    double _layoutTimestamp;
    unsigned long long _mapLayerPosition;
}

@property(nonatomic) _Bool trafficEnabled; // @synthesize trafficEnabled=_trafficEnabled;
@property(readonly, nonatomic) double layoutTimestamp; // @synthesize layoutTimestamp=_layoutTimestamp;
@property(nonatomic) unsigned long long mapLayerPosition; // @synthesize mapLayerPosition=_mapLayerPosition;
- (id).cxx_construct;
- (void).cxx_destruct;
- (shared_ptr_430519ce)featureMarkerInTile:(id)arg1 atPoint:(Matrix_6e1d3589 *)arg2;
- (void)didReceiveMemoryWarning:(_Bool)arg1;
- (void)stylesheetDidChange;
- (void)dealloc;
- (id)initWithTarget:(id)arg1 sharedResources:(id)arg2;
- (unsigned char)commandBufferId;
- (void)reserveStencilRangeForScene:(id)arg1 withContext:(struct LayoutContext *)arg2 renderQueue:(struct RenderQueue *)arg3;
- (void)gglLayoutScene:(id)arg1 withContext:(struct LayoutContext *)arg2 renderQueue:(struct RenderQueue *)arg3;
- (void)_setupTrafficColorsWithRoadLayoutContext:(struct RoadLayoutContext *)arg1 trafficStyleAttributes:(const struct FeatureAttributeSet *)arg2 styleZ:(float)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) shared_ptr_a3c46825 styleManager;
@property(readonly) Class superclass;

@end

