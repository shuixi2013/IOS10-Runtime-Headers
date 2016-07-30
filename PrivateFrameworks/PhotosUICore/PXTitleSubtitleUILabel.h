//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <PhotosUICore/PXChangeObserver-Protocol.h>

@class CALayer, NSString, PXTitleSubtitleCALayerPromise, PXTitleSubtitleLabelSpec;

@interface PXTitleSubtitleUILabel : UIView <PXChangeObserver>
{
    _Bool _needsUpdateLayerPromise;
    _Bool _rendersTextAsynchronously;
    NSString *_titleText;
    NSString *_subtitleText;
    PXTitleSubtitleLabelSpec *_spec;
    PXTitleSubtitleCALayerPromise *__layerPromise;
    CALayer *__contentLayer;
}

@property(retain, nonatomic, setter=_setContentLayer:) CALayer *_contentLayer; // @synthesize _contentLayer=__contentLayer;
@property(retain, nonatomic, setter=_setLayerPromise:) PXTitleSubtitleCALayerPromise *_layerPromise; // @synthesize _layerPromise=__layerPromise;
@property(nonatomic) _Bool rendersTextAsynchronously; // @synthesize rendersTextAsynchronously=_rendersTextAsynchronously;
@property(retain, nonatomic) PXTitleSubtitleLabelSpec *spec; // @synthesize spec=_spec;
@property(copy, nonatomic) NSString *subtitleText; // @synthesize subtitleText=_subtitleText;
@property(copy, nonatomic) NSString *titleText; // @synthesize titleText=_titleText;
- (void).cxx_destruct;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;
- (void)_updateContentLayer;
- (void)_updateLayerPromiseIfNeeded;
- (void)_invalidateLayerPromise;
- (void)layoutSubviews;
@property(readonly, nonatomic) double lastBaseline;
- (void)_handleChangeFromBounds:(struct CGRect)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)setBounds:(struct CGRect)arg1;
- (void)_PXTitleSubtitleUILabelCommonInitialization;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

