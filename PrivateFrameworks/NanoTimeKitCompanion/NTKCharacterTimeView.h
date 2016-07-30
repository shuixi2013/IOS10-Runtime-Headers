//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <NanoTimeKitCompanion/NTKTimeView-Protocol.h>

@class CADisplayLink, EAGLContext, NSDate, NSMutableDictionary, NSString, NTKCharacterFrameBuffer, NTKCharacterRenderer, NTKCharacterResourceLoader;

@interface NTKCharacterTimeView : UIView <NTKTimeView>
{
    CADisplayLink *_displayLink;
    long long _animationFrameInterval;
    NSDate *_overrideDate;
    CDUnknownBlockType _cleanupOnAnimationStop;
    _Bool _stopAfterNextRender;
    unsigned long long _character;
    NTKCharacterFrameBuffer *_framebuffer;
    NSMutableDictionary *_renderers;
    NTKCharacterResourceLoader *_loader;
    _Bool _animating;
    NTKCharacterRenderer *_renderer;
    EAGLContext *_context;
    long long _dataMode;
}

+ (Class)layerClass;
@property(nonatomic) long long dataMode; // @synthesize dataMode=_dataMode;
@property(readonly, nonatomic, getter=isAnimating) _Bool animating; // @synthesize animating=_animating;
@property(retain, nonatomic) EAGLContext *context; // @synthesize context=_context;
@property(readonly, nonatomic) NTKCharacterRenderer *renderer; // @synthesize renderer=_renderer;
- (void).cxx_destruct;
- (void)endScrubbingAnimated:(_Bool)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)scrubToDate:(id)arg1;
- (void)startScrubbingAnimated:(_Bool)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)speakTime;
- (void)drawView:(id)arg1;
- (void)layoutSubviews;
- (void)renderOneFrame;
- (void)applyCharacterTransition:(double)arg1 fromCharacter:(unsigned long long)arg2 toCharacter:(unsigned long long)arg3;
- (void)_configureForTransitionFraction:(double)arg1 fromEditMode:(long long)arg2 toEditMode:(long long)arg3;
- (void)_configureForEditMode:(long long)arg1;
- (void)setClothingColor:(id)arg1 andDesaturation:(double)arg2;
- (void)setCharacter:(unsigned long long)arg1;
- (id)getRenderer:(unsigned long long)arg1;
- (id)createRenderer:(unsigned long long)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)cleanupAfterZoom;
- (void)setZoomFraction:(double)arg1 diameter:(double)arg2;
- (void)prepareToZoom;
- (void)_stopAnimation;
- (void)_startAnimation;
- (void)willMoveToWindow:(id)arg1;
- (void)setFrozen:(_Bool)arg1;
- (void)renderSynchronouslyWithImageQueueDiscard:(_Bool)arg1;
- (void)dealloc;
- (void)setTimeOffset:(double)arg1;
- (void)enumarateRenderers:(CDUnknownBlockType)arg1;
- (void)setOverrideDate:(id)arg1 duration:(double)arg2;
@property(nonatomic) long long animationFrameInterval; // @dynamic animationFrameInterval;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

