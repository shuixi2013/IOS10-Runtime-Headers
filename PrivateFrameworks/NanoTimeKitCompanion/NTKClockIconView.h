//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@interface NTKClockIconView : UIView
{
    _Bool _paused;
    double _fullDiameter;
}

@property(nonatomic) _Bool paused; // @synthesize paused=_paused;
@property(nonatomic) double fullDiameter; // @synthesize fullDiameter=_fullDiameter;
- (void)restoreBorrowedViews;
- (id)borrowTimeView;
- (id)borrowCircleView;

@end

