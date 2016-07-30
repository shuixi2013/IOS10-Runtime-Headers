//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <VectorKit/NSObject-Protocol.h>

@protocol MDRenderTarget <NSObject>
@property(readonly, nonatomic) struct CGSize sizeInPixels;
@property(readonly, nonatomic) _Bool shouldRasterize;
@property(readonly, nonatomic) double contentScale;
@property(readonly, nonatomic) struct CGSize size;
@property(readonly, nonatomic) const struct RenderTargetFormat *format;
@property(readonly, nonatomic) _Bool multiSample;
@property(readonly, nonatomic) struct Device *device;

@optional
@property(readonly, nonatomic) float averageFPS;
- (void)didDrawView;
- (void)willDrawView;
@end

