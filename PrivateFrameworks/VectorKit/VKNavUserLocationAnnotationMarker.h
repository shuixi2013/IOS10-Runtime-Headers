//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <VectorKit/VKAnnotationMarker.h>

@class VKTimedAnimation;

@interface VKNavUserLocationAnnotationMarker : VKAnnotationMarker
{
    float _scale;
    _Bool _shouldShowCourse;
    _Bool _puckFlipped;
    double _presentationCourse;
    double _sizePoints;
    double _puckOffset;
    _Bool _stale;
    VKTimedAnimation *_puckStyleAnimation;
    int _puckStyle;
    float _greyPuckAlphaScale;
    int _style;
    Matrix_5173352a _arrowColor;
    Matrix_5173352a _arrowColorStale;
    float _circleBrightness;
    float _arrowBrightness;
    shared_ptr_479d1306 _textureArrow;
    shared_ptr_479d1306 _textureCircle;
    struct shared_ptr<ggl::RenderState> _gglPuckRenderState;
    struct shared_ptr<ggl::TextureWithBrightness::MeshPipelineSetup> _circlePipelineSetup;
    struct shared_ptr<ggl::TextureAlphaMask::MeshPipelineSetup> _arrowPipelineSetup;
    struct shared_ptr<ggl::RenderItem> _arrowRenderItem;
    struct shared_ptr<ggl::RenderItem> _circleRenderItem;
    _Bool _needsTextureUpdate;
}

@property(nonatomic) int style; // @synthesize style=_style;
@property(nonatomic) _Bool shouldShowCourse; // @synthesize shouldShowCourse=_shouldShowCourse;
@property(nonatomic, getter=isStale) _Bool stale; // @synthesize stale=_stale;
@property(nonatomic) float scale; // @synthesize scale=_scale;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)updateWithStyleQuery:(const shared_ptr_c5d816ee *)arg1 AtZ:(double)arg2;
- (void)setModel:(id)arg1;
- (void)_updatePuckStyle;
- (void)appendCommandsToBuffer:(struct CommandBuffer *)arg1 inContext:(struct LayoutContext *)arg2;
- (void)willLayoutWithContext:(struct LayoutContext *)arg1;
- (void)dealloc;
- (id)initWithAnnotation:(id)arg1 style:(int)arg2;
- (void)_updateTexturesIfNeeded;
@property(nonatomic) double presentationCourse;
@property(nonatomic) CDStruct_818bb265 innerColor;

@end

