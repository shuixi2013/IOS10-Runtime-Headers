//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class _MKUILabel;

__attribute__((visibility("hidden")))
@interface MKAttributionLabel : UIView
{
    _MKUILabel *_strokeLabel;
    _MKUILabel *_innerLabel;
    unsigned long long _mapType;
    _Bool _useDarkText;
}

@property(nonatomic) unsigned long long mapType; // @synthesize mapType=_mapType;
- (void).cxx_destruct;
- (void)sizeToFit;
- (void)_prepareLabel;
- (id)_attributesWithStroke:(_Bool)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
