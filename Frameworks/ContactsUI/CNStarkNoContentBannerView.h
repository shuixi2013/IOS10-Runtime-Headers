//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, UILabel;

__attribute__((visibility("hidden")))
@interface CNStarkNoContentBannerView : UIView
{
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
}

@property(retain) UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(retain) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *subtitleString;
@property(retain, nonatomic) NSString *titleString;
- (id)initWithFrame:(struct CGRect)arg1;

@end

