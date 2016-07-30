//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ChatKit/CKBalloonView.h>

@class CKBalloonImageView, CKInteractiveBalloonImageView, IMBalloonPluginDataSource, UIView;
@protocol CKTranscriptPluginView;

@interface CKTranscriptPluginBalloonView : CKBalloonView
{
    _Bool _isInteractive;
    _Bool _mayReparentPluginViews;
    _Bool _suppressMask;
    UIView<CKTranscriptPluginView> *_pluginView;
    IMBalloonPluginDataSource *_dataSource;
    CKInteractiveBalloonImageView *_tailMask;
    CKBalloonImageView *_outlineMask;
}

@property(nonatomic) _Bool suppressMask; // @synthesize suppressMask=_suppressMask;
@property(retain, nonatomic) CKBalloonImageView *outlineMask; // @synthesize outlineMask=_outlineMask;
@property(retain, nonatomic) CKInteractiveBalloonImageView *tailMask; // @synthesize tailMask=_tailMask;
@property(nonatomic) _Bool mayReparentPluginViews; // @synthesize mayReparentPluginViews=_mayReparentPluginViews;
@property(nonatomic) _Bool isInteractive; // @synthesize isInteractive=_isInteractive;
@property(retain, nonatomic) IMBalloonPluginDataSource *dataSource; // @synthesize dataSource=_dataSource;
@property(retain, nonatomic) UIView<CKTranscriptPluginView> *pluginView; // @synthesize pluginView=_pluginView;
- (void).cxx_destruct;
- (void)clearFilters;
- (void)addFilter:(id)arg1;
@property(readonly, nonatomic) _Bool shouldMaskWhenOpaque;
@property(readonly, nonatomic) struct CGRect maskFrame;
- (void)invisibleInkEffectViewWasUncovered;
- (id)imageForInvisibleInkEffectView;
- (void)detachInvisibleInkEffectView;
- (void)attachInvisibleInkEffectView;
- (Class)invisibleInkEffectViewClass;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1 textAlignmentInsets:(struct UIEdgeInsets *)arg2;
- (void)setCanUseOpaqueMask:(_Bool)arg1;
- (void)prepareForReuse;
- (void)prepareForDisplay;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)configureForComposition:(id)arg1;
- (void)configureForTranscriptPlugin:(id)arg1;

@end

