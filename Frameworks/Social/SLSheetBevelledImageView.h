//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Social/SLSheetImagePreviewView.h>

@class UIImageView, UIView;

__attribute__((visibility("hidden")))
@interface SLSheetBevelledImageView : SLSheetImagePreviewView
{
    UIView *_placeholderPreviewView;
    UIImageView *_placeholderGlyphView;
    _Bool _needsURLPlaceholderImage;
}

@property(nonatomic) _Bool needsURLPlaceholderImage; // @synthesize needsURLPlaceholderImage=_needsURLPlaceholderImage;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (_Bool)generatePreviewImageFromAttachments;
- (void)setImage:(id)arg1;
- (void)ensurePlaceholderPreviewImage;
- (struct CGSize)intrinsicContentSize;
- (id)init;

@end

