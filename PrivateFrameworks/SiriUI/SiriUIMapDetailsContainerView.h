//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@interface SiriUIMapDetailsContainerView : UIView
{
    _Bool _autoCenteringDisabled;
    UIView *_detailsView;
    UIView *_mapView;
    struct UIEdgeInsets _backgroundInsets;
}

@property(nonatomic) struct UIEdgeInsets backgroundInsets; // @synthesize backgroundInsets=_backgroundInsets;
@property(nonatomic) _Bool autoCenteringDisabled; // @synthesize autoCenteringDisabled=_autoCenteringDisabled;
@property(retain, nonatomic) UIView *mapView; // @synthesize mapView=_mapView;
@property(retain, nonatomic) UIView *detailsView; // @synthesize detailsView=_detailsView;
- (void).cxx_destruct;
- (void)layoutSubviews;

@end

