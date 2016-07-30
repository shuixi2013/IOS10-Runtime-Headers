//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class ABStyleProvider, ABUIPerson, UIImageView;

@interface ABContactListPhotoView : UIView
{
    UIImageView *_contactImageView;
    ABStyleProvider *_styleProvider;
    ABUIPerson *_person;
}

@property(retain, nonatomic) ABUIPerson *person; // @synthesize person=_person;
@property(retain, nonatomic) ABStyleProvider *styleProvider; // @synthesize styleProvider=_styleProvider;
@property(nonatomic) void *record;
- (id)_framedPhoto;
- (struct CGSize)intrinsicContentSize;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 UIStyle:(int)arg2;
- (id)initWithFrame:(struct CGRect)arg1 styleProvider:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

