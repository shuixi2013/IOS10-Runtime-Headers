//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MapKit/MKPlaceSectionRowView.h>

@class NSLayoutConstraint, NSString, _MKUILabel;

__attribute__((visibility("hidden")))
@interface MKPlaceHoursTodayRow : MKPlaceSectionRowView
{
    _MKUILabel *_label;
    NSLayoutConstraint *_baselineToTop;
    NSLayoutConstraint *_baselineToBottom;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *text;
- (void)_contentSizeDidChange;
- (id)initWithFrame:(struct CGRect)arg1;

@end

