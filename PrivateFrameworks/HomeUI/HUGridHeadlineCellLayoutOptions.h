//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HomeUI/HUGridCellLayoutOptions.h>

@protocol UILayoutSupport;

@interface HUGridHeadlineCellLayoutOptions : HUGridCellLayoutOptions
{
    id <UILayoutSupport> _topLayoutGuide;
    double _topOfScreenToHeadlineBaselinePercentage;
    double _minimumFontSize;
    struct CGSize _viewSize;
}

+ (id)defaultOptionsForCellSizeSubclass:(long long)arg1 viewSizeSubclass:(long long)arg2;
+ (id)defaultOptionsForCellSizeSubclass:(long long)arg1;
@property(nonatomic) double minimumFontSize; // @synthesize minimumFontSize=_minimumFontSize;
@property(nonatomic) struct CGSize viewSize; // @synthesize viewSize=_viewSize;
@property(nonatomic) double topOfScreenToHeadlineBaselinePercentage; // @synthesize topOfScreenToHeadlineBaselinePercentage=_topOfScreenToHeadlineBaselinePercentage;
@property(retain, nonatomic) id <UILayoutSupport> topLayoutGuide; // @synthesize topLayoutGuide=_topLayoutGuide;
- (void).cxx_destruct;
@property(readonly, nonatomic) double topOfScreenToHeadlineBaselineDistance;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

