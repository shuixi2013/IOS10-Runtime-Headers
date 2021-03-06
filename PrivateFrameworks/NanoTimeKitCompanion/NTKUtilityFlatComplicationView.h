//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NanoTimeKitCompanion/NTKUtilityComplicationView.h>

@class NTKColoringLabel, UIView;
@protocol NTKComplicationImageView;

@interface NTKUtilityFlatComplicationView : NTKUtilityComplicationView
{
    UIView<NTKComplicationImageView> *_imageView;
    NTKColoringLabel *_label;
}

+ (_Bool)handlesComplicationTemplate:(id)arg1;
+ (void)load;
- (void).cxx_destruct;
- (void)_enumerateColoringStackedImagesViewsWithBlock:(CDUnknownBlockType)arg1;
- (void)_enumerateColoringViewsWithBlock:(CDUnknownBlockType)arg1;
- (void)layoutSubviews;
- (void)_updateForTemplateChange;
- (double)_widthThatFits;
- (void)_updateLabelMaxWidth;
- (_Bool)_shouldLayoutWithImageView;
- (void)_updateContentForMaxSizeChange;
- (id)initWithFrame:(struct CGRect)arg1;

@end

