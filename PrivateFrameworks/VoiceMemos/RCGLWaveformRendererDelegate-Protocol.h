//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <VoiceMemos/NSObject-Protocol.h>

@class RCGLWaveformRenderer;

@protocol RCGLWaveformRendererDelegate <NSObject>
- (void)waveformRendererDidSynchronizeToDisplayLink:(RCGLWaveformRenderer *)arg1;
- (void)waveformRendererContentDidFinishLoading:(RCGLWaveformRenderer *)arg1;
- (void)waveformRenderer:(RCGLWaveformRenderer *)arg1 contentWidthDidChange:(double)arg2;
@end

