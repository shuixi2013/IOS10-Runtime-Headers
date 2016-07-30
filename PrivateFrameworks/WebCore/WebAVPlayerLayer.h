//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QuartzCore/CALayer.h>

@class AVPlayerController, NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface WebAVPlayerLayer : CALayer
{
    struct RefPtr<WebCore::WebVideoFullscreenInterfaceAVKit> _fullscreenInterface;
    struct RetainPtr<WebAVPlayerController> _avPlayerController;
    struct RetainPtr<CALayer> _videoSublayer;
    struct RetainPtr<NSString> _videoGravity;
    _Bool _readyForDisplay;
    NSDictionary *_pixelBufferAttributes;
    struct CGSize _videoDimensions;
    struct CGRect _modelVideoLayerFrame;
}

+ (id)keyPathsForValuesAffectingVideoRect;
@property struct CGRect modelVideoLayerFrame; // @synthesize modelVideoLayerFrame=_modelVideoLayerFrame;
@property struct CGSize videoDimensions; // @synthesize videoDimensions=_videoDimensions;
@property(copy, nonatomic) NSDictionary *pixelBufferAttributes; // @synthesize pixelBufferAttributes=_pixelBufferAttributes;
@property(nonatomic, getter=isReadyForDisplay) _Bool readyForDisplay; // @synthesize readyForDisplay=_readyForDisplay;
- (id).cxx_construct;
- (void).cxx_destruct;
- (struct CGRect)videoRect;
@property(retain, nonatomic) NSString *videoGravity;
- (void)resolveBounds;
- (void)layoutSublayers;
@property(retain, nonatomic) CALayer *videoSublayer;
@property(retain, nonatomic) AVPlayerController *playerController;
@property(nonatomic) struct WebVideoFullscreenInterfaceAVKit *fullscreenInterface;
- (void)dealloc;
- (id)init;

@end

