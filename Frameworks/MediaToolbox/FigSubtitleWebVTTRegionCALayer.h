//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MediaToolbox/FigBaseCALayer.h>

@interface FigSubtitleWebVTTRegionCALayer : FigBaseCALayer
{
    struct OpaqueFigSubtitleWebVTTRegionCALayerInternal *layerInternal;
}

- (void)handleNeedsLayoutNotification;
- (void)layoutSublayers;
- (void)setReLayout;
- (void)setNeedsDisplay;
- (void)setViewport:(struct CGRect)arg1;
- (void)setRenderer:(struct OpaqueFigSubtitleRenderer *)arg1;
- (void)setContent:(struct __CFDictionary *)arg1;
- (struct __CFString *)getContentID;
- (void)dealloc;
- (void)finalize;
- (id)init;

@end

