//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CKConversation, MFComposeRecipientTextView, UIButton, _UIBackdropView;

@interface CKTranscriptGroupHeaderView : UIView
{
    CKConversation *_conversation;
    MFComposeRecipientTextView *_textView;
    UIView *_separator;
    UIButton *_actionButton;
    _UIBackdropView *_backdropView;
}

@property(retain, nonatomic) _UIBackdropView *backdropView; // @synthesize backdropView=_backdropView;
@property(retain, nonatomic) UIButton *actionButton; // @synthesize actionButton=_actionButton;
@property(retain, nonatomic) UIView *separator; // @synthesize separator=_separator;
@property(retain, nonatomic) MFComposeRecipientTextView *textView; // @synthesize textView=_textView;
@property(retain, nonatomic) CKConversation *conversation; // @synthesize conversation=_conversation;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 conversation:(id)arg2;
- (void)dealloc;

@end

