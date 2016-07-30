//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SFSearchResult, SearchUITableViewCell, UIView;

@interface SearchUIAccessoryViewController : NSObject
{
    UIView *_view;
    SearchUITableViewCell *_cell;
    SFSearchResult *_result;
}

+ (_Bool)supportsResult:(id)arg1;
+ (Class)accessoryViewClassForResult:(id)arg1;
@property(retain) SFSearchResult *result; // @synthesize result=_result;
@property(retain) SearchUITableViewCell *cell; // @synthesize cell=_cell;
@property(retain) UIView *view; // @synthesize view=_view;
- (void).cxx_destruct;
- (void)updateWithResult:(id)arg1;
- (id)viewControllerForPresenting;
- (_Bool)shouldSimulateRowPressOnEngage;
- (void)didEngage;
- (id)setupViewWithStyle:(unsigned long long)arg1;
- (id)initWithUIStyle:(unsigned long long)arg1 cell:(id)arg2;
- (_Bool)shouldVerticallyCenter;

@end

