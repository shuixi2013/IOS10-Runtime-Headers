//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <UIKit/_UILayoutEngineSuspending-Protocol.h>

@class CALayer, NSString;

__attribute__((visibility("hidden")))
@interface UITableViewCellContentView : UIView <_UILayoutEngineSuspending>
{
    _Bool _isLayoutEngineSuspended;
    CALayer *_mask;
}

+ (id)classFallbacksForKeyedArchiver;
@property(retain, nonatomic) CALayer *mask; // @synthesize mask=_mask;
@property(nonatomic, getter=_isLayoutEngineSuspended, setter=_setLayoutEngineSuspended:) _Bool _layoutEngineSuspended; // @synthesize _layoutEngineSuspended=_isLayoutEngineSuspended;
- (void).cxx_destruct;
- (void)setBounds:(struct CGRect)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (id)_cell;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;
- (void)_tableViewCellContentViewCommonSetup;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

