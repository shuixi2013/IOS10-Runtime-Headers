//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIControl.h>

@class NSArray, NSMutableOrderedSet;

@interface AKSegmentedControl : UIControl
{
    unsigned long long _selectionType;
    unsigned long long _selectedSegment;
    NSArray *_images;
    NSArray *_buttons;
    NSMutableOrderedSet *_selectionStack;
}

@property(retain, nonatomic) NSMutableOrderedSet *selectionStack; // @synthesize selectionStack=_selectionStack;
@property(retain, nonatomic) NSArray *buttons; // @synthesize buttons=_buttons;
@property(retain, nonatomic) NSArray *images; // @synthesize images=_images;
@property(nonatomic) unsigned long long selectedSegment; // @synthesize selectedSegment=_selectedSegment;
@property(nonatomic) unsigned long long selectionType; // @synthesize selectionType=_selectionType;
- (void).cxx_destruct;
- (unsigned long long)segmentCount;
- (id)segmentForTag:(long long)arg1;
- (long long)tagForSegment:(unsigned long long)arg1;
- (void)setTag:(long long)arg1 forSegment:(unsigned long long)arg2;
- (id)segmentAtIndex:(unsigned long long)arg1;
- (_Bool)isEnabledForSegment:(unsigned long long)arg1;
- (void)setEnabled:(_Bool)arg1 forSegment:(unsigned long long)arg2;
- (void)deselectAllSegments;
- (void)selectSegmentWithTag:(long long)arg1;
- (_Bool)isSelectedForSegment:(unsigned long long)arg1;
- (void)setSelected:(_Bool)arg1 forSegment:(unsigned long long)arg2;
- (void)_setSelected:(_Bool)arg1 forSegment:(unsigned long long)arg2;
- (void)_buttonTapped:(id)arg1;
- (void)_configureForNewImages;
- (void)_commonInit;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithImages:(id)arg1;

@end

