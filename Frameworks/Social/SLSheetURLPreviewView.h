//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Social/SLSheetImagePreviewView.h>

@class SLURLPreviewGenerator, UIImage, UIImageView, UIView;

__attribute__((visibility("hidden")))
@interface SLSheetURLPreviewView : SLSheetImagePreviewView
{
    UIImage *_shadowImage;
    SLURLPreviewGenerator *_webPreviewGenerator;
    UIView *_placeholderPreviewView;
    UIImageView *_placeholderGlyphView;
}

- (void).cxx_destruct;
- (void)_generateAutomaticPreviewForURL:(id)arg1;
- (_Bool)generatePreviewImageFromAttachments;
- (void)setImage:(id)arg1;
- (void)ensurePlaceholderPreviewImage;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

@end

