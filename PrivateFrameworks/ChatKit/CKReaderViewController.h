//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <ChatKit/UIWebViewDelegate-Protocol.h>

@class NSAttributedString, NSString, UITextView;
@protocol CKReaderViewControllerDelegate;

@interface CKReaderViewController : UIViewController <UIWebViewDelegate>
{
    id <CKReaderViewControllerDelegate> _delegate;
    NSString *_messageGUID;
    UITextView *_textView;
}

+ (id)readerScrollPositionCache;
+ (id)readerViewControllerForChatItem:(id)arg1;
@property(retain, nonatomic) UITextView *textView; // @synthesize textView=_textView;
@property(copy, nonatomic) NSString *messageGUID; // @synthesize messageGUID=_messageGUID;
@property(nonatomic) __weak id <CKReaderViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
@property(nonatomic) struct _NSRange visibleRange; // @dynamic visibleRange;
@property(copy, nonatomic) NSAttributedString *text; // @dynamic text;
- (void)contentSizeCategoryDidChange:(id)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotate;
- (void)loadView;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

