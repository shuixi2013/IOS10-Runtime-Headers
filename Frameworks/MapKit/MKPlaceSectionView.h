//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MapKit/_MKStackView.h>

@class MKPlaceSectionItemView, NSArray;
@protocol MKPlaceSectionViewDelegate;

__attribute__((visibility("hidden")))
@interface MKPlaceSectionView : _MKStackView
{
    unsigned long long _trackingSelectForRow;
    _Bool _highlightsTouches;
    id <MKPlaceSectionViewDelegate> _delegate;
    MKPlaceSectionItemView *_headerView;
    NSArray *_rowViews;
    MKPlaceSectionItemView *_footerView;
}

@property(retain, nonatomic) MKPlaceSectionItemView *footerView; // @synthesize footerView=_footerView;
@property(nonatomic) _Bool highlightsTouches; // @synthesize highlightsTouches=_highlightsTouches;
@property(copy, nonatomic) NSArray *rowViews; // @synthesize rowViews=_rowViews;
@property(retain, nonatomic) MKPlaceSectionItemView *headerView; // @synthesize headerView=_headerView;
@property(nonatomic) __weak id <MKPlaceSectionViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_updateViewsAnimated:(_Bool)arg1;
- (void)setFooterView:(id)arg1 animated:(_Bool)arg2;
- (void)setRowViews:(id)arg1 animated:(_Bool)arg2;
- (void)setHeaderView:(id)arg1 animated:(_Bool)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)_touchesCancelledForRow:(id)arg1 at:(unsigned long long)arg2;
- (void)_touchesBeganForRow:(id)arg1 at:(unsigned long long)arg2;
- (void)_tappedRow:(id)arg1 at:(unsigned long long)arg2;
- (id)rowAt:(struct CGPoint)arg1;
- (unsigned long long)indexOfRowAt:(struct CGPoint)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

