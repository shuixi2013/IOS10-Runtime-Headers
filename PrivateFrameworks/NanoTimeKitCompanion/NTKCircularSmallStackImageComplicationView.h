//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NanoTimeKitCompanion/NTKCircularComplicationView.h>

@class NTKColoringLabel, UIView;
@protocol NTKComplicationImageView;

@interface NTKCircularSmallStackImageComplicationView : NTKCircularComplicationView
{
    NTKColoringLabel *_label;
    UIView<NTKComplicationImageView> *_imageView;
}

+ (double)_imageScaleForTemplate:(id)arg1;
+ (_Bool)supportsComplicationFamily:(long long)arg1;
+ (_Bool)handlesComplicationTemplate:(id)arg1;
+ (void)load;
- (void).cxx_destruct;
- (void)_enumerateForegroundColoringViewsWithBlock:(CDUnknownBlockType)arg1;
- (void)_updateLabelsForFontChange;
- (void)_updateForTemplateChange;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

