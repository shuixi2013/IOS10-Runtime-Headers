//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <VectorKit/VKGestureCameraBehavior.h>

__attribute__((visibility("hidden")))
@interface VKGlobeGestureCameraController : VKGestureCameraBehavior
{
    struct GlobeView {
        CDUnknownFunctionPointerType *;
        struct AnchorManagerPrivate *;
        struct Scene *;
        struct Context *;
        struct DtmCacheNode *;
        struct DtmRequestManager *;
        struct FreezeViewNode *;
        struct Projection;
        struct FrameLatLon;
        _Bool;
        basic_string_805fe43b;
        basic_string_805fe43b;
        struct vector<altitude::TileBound, std::__1::allocator<altitude::TileBound>>;
        struct vector<altitude::SimpleTileKey, std::__1::allocator<altitude::SimpleTileKey>>;
        _Bool;
        unsigned int;
        unsigned int;
        unsigned int;
        unsigned int;
        struct VKClassicGlobeCanvas *;
        _Bool;
        _Bool;
        int;
        struct AnimationManager;
        struct Timer;
        double;
        _Bool;
        double;
        double;
        double;
        struct FrameLatLon;
        struct C3mmRequestManager *;
        struct RenderableGroup *;
        unsigned int;
        double;
        _Bool;
        _Bool;
        struct LabelDataManagerPrivate *;
        _Bool;
        _Bool;
        _Bool;
        _Bool;
        struct RouteLineManager *;
        struct GlobeCleanupLoader *;
        struct CompleteGlobeTileSetCullingGraph *;
        struct CompleteGlobeTileSetLoader *;
        struct TileSetNode *;
        struct GlobeTileRenderManager *;
        struct CullingNode *;
        struct EarthAdjustedViewNode *;
        struct UserViewNode *;
        struct View *;
        struct BasicViewNode *;
        struct GlobeMainViewNode *;
        struct C3bRequestManager *;
        float;
        _Bool;
        struct shared_ptr<bool>;
        struct HeightRequestManager *;
        struct map<gm::Matrix<int, 2, 1>, std::__1::pair<bool, altitude::Position3d>, altitude::GlobeView::LessVector2i, std::__1::allocator<std::__1::pair<const gm::Matrix<int, 2, 1>, std::__1::pair<bool, altitude::Position3d>>>>;
        struct Mutex;
        struct shared_ptr<altitude::Stylesheet>;
        struct FlyoverTour *;
        _Bool;
        struct TriggerManager *;
        struct Viewport;
        struct AnimationReferenceTimer;
        _Bool;
        struct set<altitude::ManifestListener *, std::__1::less<altitude::ManifestListener *>, std::__1::allocator<altitude::ManifestListener *>>;
        struct GeoServicesLoader *;
        struct ManifestManager *;
        struct GlobeDispatch *;
    } *_globeView;
    struct CameraManager *_cameraManager;
    double _beganDoublePanPitch;
    double _currentDoublePanPitch;
    _Bool _isPitchIncreasing;
}

- (_Bool)isPitchIncreasing;
- (void)endPitch:(struct CGPoint)arg1;
- (void)updatePitch:(struct CGPoint)arg1 translation:(double)arg2;
- (void)beginPitch:(struct CGPoint)arg1;
- (void)endRotate:(struct CGPoint)arg1;
- (void)updateRotate:(double)arg1 atScreenPoint:(struct CGPoint)arg2;
- (void)beginRotate:(struct CGPoint)arg1;
- (void)endPan:(struct CGPoint)arg1;
- (void)updatePan:(struct CGPoint)arg1 lastScreenPoint:(struct CGPoint)arg2;
- (void)beginPan:(struct CGPoint)arg1;
- (void)endZoom:(struct CGPoint)arg1;
- (void)updateZoom:(struct CGPoint)arg1 oldFactor:(double)arg2 newFactor:(double)arg3;
- (void)beginZoom:(struct CGPoint)arg1;
- (void)setCameraManager:(struct CameraManager *)arg1;
- (void)setGlobeView:(struct GlobeView *)arg1;

@end

