//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UpNextWidget/_TtC12UpNextWidget14GutterizedView.h>

@class NSAttributedString, NSDateInterval, NSString, UILayoutGuide, UIView;

@interface _TtC12UpNextWidget27GutterizedEventTrailingView : _TtC12UpNextWidget14GutterizedView
{
    // Error parsing type: , name: textualFieldsLayoutGuide
    // Error parsing type: , name: title
    // Error parsing type: , name: location
    // Error parsing type: , name: dateInterval
    // Error parsing type: , name: travelAdvisoryText
    // Error parsing type: , name: titleLabel
    // Error parsing type: , name: locationLabel
    // Error parsing type: , name: timeLabel
    // Error parsing type: , name: travelAdvisoryLabel
    // Error parsing type: , name: persistentConstraints
    // Error parsing type: , name: topBaselineDistance
    // Error parsing type: , name: intraBaselineDistance
}

- (CDUnknownBlockType).cxx_destruct;
- (void)updateConstraints;
- (id)viewForLastBaselineLayout;
- (id)viewForFirstBaselineLayout;
@property(nonatomic, retain) NSAttributedString *travelAdvisoryText; // @synthesize travelAdvisoryText;
@property(nonatomic, retain) NSDateInterval *dateInterval; // @synthesize dateInterval;
@property(nonatomic, copy) NSString *location; // @synthesize location;
@property(nonatomic, copy) NSString *title; // @synthesize title;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;
- (double)capHeightOffsetFromTop;
@property(nonatomic, readonly) UILayoutGuide *textualFieldsLayoutGuide; // @synthesize textualFieldsLayoutGuide;

// Remaining properties
@property(nonatomic, readonly) UIView *forFirstBaselineLayout;
@property(nonatomic, readonly) UIView *forLastBaselineLayout;

@end

