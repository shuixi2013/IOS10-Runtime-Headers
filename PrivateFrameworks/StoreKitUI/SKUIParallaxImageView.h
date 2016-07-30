//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <StoreKitUI/SKUIImageView.h>

#import <StoreKitUI/SKUIPerspectiveView-Protocol.h>

@class NSString;

@interface SKUIParallaxImageView : SKUIImageView <SKUIPerspectiveView>
{
    struct UIEdgeInsets _imagePadding;
    struct CGSize _imageSize;
    SKUIImageView *_innerImageView;
}

+ (double)maximumPerspectiveHeightForSize:(struct CGSize)arg1;
- (void).cxx_destruct;
- (void)_updateInnerImageView;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)updateForChangedDistanceFromVanishingPoint;
- (void)setVanishingPoint:(struct CGPoint)arg1;
- (void)setPerspectiveTargetView:(id)arg1;
- (void)setImageSize:(struct CGSize)arg1;
- (void)setPlaceholder:(id)arg1;
- (id)placeholder;
- (void)setImage:(id)arg1;
- (struct CGSize)imageSize;
- (id)image;
- (void)setImagePadding:(struct UIEdgeInsets)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

