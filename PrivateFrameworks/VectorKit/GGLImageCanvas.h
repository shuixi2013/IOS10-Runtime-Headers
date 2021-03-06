//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <VectorKit/MDRenderTarget-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface GGLImageCanvas : NSObject <MDRenderTarget>
{
    struct RenderTargetFormat _resolvedRenderTargetFormat;
    struct CGSize _size;
    double _contentScale;
    struct Device {
        int;
        shared_ptr_807ec9ac;
        struct unique_ptr<md::SharedDeviceResources, std::__1::default_delete<md::SharedDeviceResources>>;
    } *_device;
    _Bool _canMakeImage;
    _Bool _recreateRenderTarget;
    _Bool _allowAlpha;
    struct RenderTargetFormat _format;
    struct unique_ptr<ggl::RenderTarget, std::__1::default_delete<ggl::RenderTarget>> _renderTarget;
    struct unique_ptr<ggl::Texture, std::__1::default_delete<ggl::Texture>> _colorBuffer;
    struct unique_ptr<ggl::RenderBuffer, std::__1::default_delete<ggl::RenderBuffer>> _depthStencilBuffer;
    _Bool _useMultisampling;
    struct unique_ptr<ggl::Texture, std::__1::default_delete<ggl::Texture>> _msaaResolveBuffer;
}

@property(readonly, nonatomic) struct RenderTargetFormat resolvedRenderTargetFormat; // @synthesize resolvedRenderTargetFormat=_resolvedRenderTargetFormat;
@property(nonatomic) _Bool allowAlpha; // @synthesize allowAlpha=_allowAlpha;
@property(readonly, nonatomic) _Bool multiSample; // @synthesize multiSample=_useMultisampling;
@property(nonatomic) struct CGSize size; // @synthesize size=_size;
@property(nonatomic) double contentScale; // @synthesize contentScale=_contentScale;
- (id).cxx_construct;
- (void).cxx_destruct;
- (struct CGImage *)newImageWithRenderer:(struct Renderer *)arg1;
- (shared_ptr_edb96180)bitmapDataWithRenderer:(struct Renderer *)arg1;
- (void)didDrawView;
- (void)willDrawView;
- (void)_destroyRenderTarget;
- (void)_createRenderTarget;
@property(readonly, nonatomic) struct Texture2D *imageTexture;
@property(readonly, nonatomic) _Bool shouldRasterize;
@property(readonly, nonatomic) struct Device *device;
- (id)initWithSize:(struct CGSize)arg1 device:(struct Device *)arg2 scale:(double)arg3 useMultisampling:(_Bool)arg4;
@property(readonly, nonatomic) struct CGSize sizeInPixels;
- (struct Texture *)finalSurface;
@property(readonly, nonatomic) struct RenderTarget *finalRenderTarget;
@property(readonly, nonatomic) struct RenderTarget *renderTarget;
@property(readonly, nonatomic) const struct RenderTargetFormat *format;

// Remaining properties
@property(readonly, nonatomic) float averageFPS;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

