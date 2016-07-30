//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <EventKitUI/EKEventDetailAttendeesList-Protocol.h>

@class NSArray, NSMutableArray, NSString, UIColor, UIViewController;

__attribute__((visibility("hidden")))
@interface EKEventDetailAttendeesAvatarListView : UIView <EKEventDetailAttendeesList>
{
    NSMutableArray *_avatarViews;
    _Bool _highlighted;
    _Bool _groupsNames;
    NSArray *_accepted;
    NSArray *_maybe;
    NSArray *_declined;
    NSArray *_noReply;
    NSArray *_ungrouped;
    UIColor *_textColor;
    UIColor *_highlightedTextColor;
    UIViewController *_viewController;
}

@property(nonatomic) __weak UIViewController *viewController; // @synthesize viewController=_viewController;
@property(nonatomic) _Bool groupsNames; // @synthesize groupsNames=_groupsNames;
@property(nonatomic, getter=isHighlighted) _Bool highlighted; // @synthesize highlighted=_highlighted;
@property(retain, nonatomic) UIColor *highlightedTextColor; // @synthesize highlightedTextColor=_highlightedTextColor;
@property(retain, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
@property(retain, nonatomic) NSArray *ungrouped; // @synthesize ungrouped=_ungrouped;
@property(retain, nonatomic) NSArray *noReply; // @synthesize noReply=_noReply;
@property(retain, nonatomic) NSArray *declined; // @synthesize declined=_declined;
@property(retain, nonatomic) NSArray *maybe; // @synthesize maybe=_maybe;
@property(retain, nonatomic) NSArray *accepted; // @synthesize accepted=_accepted;
- (void).cxx_destruct;
- (id)rowOfFaces:(id)arg1 withStatus:(id)arg2;
- (void)setup;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

