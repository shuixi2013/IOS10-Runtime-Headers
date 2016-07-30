//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Preferences/PSEditingPane.h>

#import <InternalPreferences/MFMailComposeViewControllerDelegate-Protocol.h>

@class MFMailComposeViewController, NSLock, NSString, NSTimer, PSRootController, UITextView;

@interface LoggingPane : PSEditingPane <MFMailComposeViewControllerDelegate>
{
    UITextView *_textView;
    _Bool _threadRunning;
    _Bool _timeout;
    _Bool _fileError;
    _Bool _dontScroll;
    NSLock *_lock;
    NSTimer *_timer;
    NSString *_output;
    PSRootController *_rootController;
    MFMailComposeViewController *_mailComposeController;
    int _sendingEmailCount;
}

+ (id)systemVersionDescription;
- (void).cxx_destruct;
- (void)mailComposeController:(id)arg1 didFinishWithResult:(long long)arg2 error:(id)arg3;
- (void)emailButtonClicked;
- (void)_finished:(id)arg1;
- (void)_pipeThread:(id)arg1;
- (void)_aslQuery:(id)arg1;
- (void)_run;
- (void)_updateText:(id)arg1;
- (void)_showAlertForFailedCommand:(id)arg1;
- (void)saveLogFile;
- (void)setPreferenceSpecifier:(id)arg1;
- (id)textView;
- (void)startTimer;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)stopTimer;
- (void)dealloc;
- (_Bool)handlesDoneButton;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

