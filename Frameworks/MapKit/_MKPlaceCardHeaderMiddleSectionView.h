//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSDictionary;

__attribute__((visibility("hidden")))
@interface _MKPlaceCardHeaderMiddleSectionView : UIView
{
    NSDictionary *_attributes;
    CDUnknownBlockType _colorProvider;
}

@property(copy, nonatomic) CDUnknownBlockType colorProvider; // @synthesize colorProvider=_colorProvider;
@property(copy, nonatomic) NSDictionary *attributes; // @synthesize attributes=_attributes;
- (void).cxx_destruct;
- (id)viewForLastBaselineLayout;
- (id)_firstLabel;
- (id)placeCardHeaderViewDot;
- (void)removeSubview:(id)arg1;
- (void)insertSubview:(id)arg1 atIndex:(long long)arg2 addDefaultAttributes:(_Bool)arg3;
- (void)addSubview:(id)arg1 addDefaultAttributes:(_Bool)arg2;
- (id)initWithAttributes:(id)arg1;

@end

