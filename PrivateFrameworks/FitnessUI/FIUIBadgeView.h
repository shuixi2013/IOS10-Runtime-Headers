//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HealthKitUI/HKGLView.h>

#import <FitnessUI/UIGestureRecognizerDelegate-Protocol.h>

@class EAGLContext, FIUIBadge, GLKTextureInfo, NSAttributedString, NSDictionary, NSString, UIImage, UIPanGestureRecognizer, UITapGestureRecognizer;
@protocol FIUIBadgeViewDelegate;

@interface FIUIBadgeView : HKGLView <UIGestureRecognizerDelegate>
{
    FIUIBadge *_badge;
    EAGLContext *_context;
    _Bool _contextPushed;
    union _GLKMatrix4 _viewProjectionMatrix;
    GLKTextureInfo *_colorTexture;
    GLKTextureInfo *_envTexture;
    GLKTextureInfo *_backTexture;
    NSString *_badgeModelPath;
    NSString *_badgeTexturePath;
    NSString *_badgePlistPath;
    unsigned long long _shape;
    UIImage *_backAppleLogo;
    NSAttributedString *_backsideAttributedString;
    _Bool _backTextureNeedsRegeneration;
    unsigned int _program;
    unsigned int _faceProgram;
    unsigned int _vertexBuffer;
    unsigned int _indexBuffer;
    int _numGroups;
    int *_groupTriangleCounts;
    int *_materialIndices;
    struct __UniformBindings _uniformBindings;
    struct __UniformBindings _faceUniformBindings;
    NSDictionary *_tweakableUniforms;
    union _GLKMatrix4 _modelTransform;
    double _spinRate;
    UIPanGestureRecognizer *_spinRecognizer;
    UITapGestureRecognizer *_tapRecognizer;
    _Bool _magnetsEngaged;
    union _GLKVector3 _modelBaseColor;
    union _GLKVector3 _modelEnamelColor;
    _Bool _modelUsesFullColorEnamel;
    _Bool _verticalPanningDisabled;
    CDUnknownBlockType _shortenedBadgeBacksideStringProvider;
    id <FIUIBadgeViewDelegate> _badgeDelegate;
}

+ (double)badgeAspectRatio;
@property(nonatomic) __weak id <FIUIBadgeViewDelegate> badgeDelegate; // @synthesize badgeDelegate=_badgeDelegate;
@property(copy, nonatomic) CDUnknownBlockType shortenedBadgeBacksideStringProvider; // @synthesize shortenedBadgeBacksideStringProvider=_shortenedBadgeBacksideStringProvider;
@property(nonatomic) _Bool verticalPanningDisabled; // @synthesize verticalPanningDisabled=_verticalPanningDisabled;
- (void).cxx_destruct;
- (void)render360RotationPNGSequenceWithNumberOfFrames:(unsigned long long)arg1;
- (void)setFixedBadgeAngle:(double)arg1;
- (double)playFlipOutAnimation;
- (double)playFlipInAnimation;
- (void)playRevealAnimationWithDuration:(double)arg1;
- (_Bool)shouldAutorotate;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (long long)preferredStatusBarStyle;
- (void)dealloc;
- (void)_context_destroyBuffers;
- (void)_context_drawInRect:(struct CGRect)arg1;
- (unsigned int)drawInRect:(struct CGRect)arg1;
- (void)_disengageMagnets;
- (void)_engageMagnets;
- (void)update;
- (float)_normalizeAngle:(float)arg1;
- (id)_valueForTweak:(id)arg1;
- (void)resizeBadgeForCurrentViewSize;
- (void)_context_loadUniformsAndAttributes;
- (void)_generateBackTexture;
- (void)_setBackTextureNeedsRegeneration;
- (void)setBadgeBacksideIcon:(id)arg1;
- (void)setBadgeBacksideAttributedString:(id)arg1;
- (void)_context_loadBadgeModel;
- (union _GLKVector3)_colorVectorFromString:(id)arg1;
- (void)_context_loadShaders;
- (void)_context_setupScene;
- (void)_context_createBuffers;
- (void)_context_setup;
- (void)_applyImpulse:(double)arg1;
- (void)_tapped:(id)arg1;
- (void)_panned:(id)arg1;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)_forEachProgram:(CDUnknownBlockType)arg1;
- (void)_withContext:(CDUnknownBlockType)arg1;
- (id)_defaultTweaks;
- (void)setBadgeModelPath:(id)arg1 texturePath:(id)arg2 plistPath:(id)arg3;
- (id)init;
- (id)_attributedStringForUserName:(id)arg1 achievement:(id)arg2 usingSmallVariant:(_Bool)arg3 smallDateVariant:(_Bool)arg4;
- (void)configureForAchievement:(id)arg1 userName:(id)arg2 usingSmallVariant:(_Bool)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

