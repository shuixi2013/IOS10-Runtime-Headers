//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Preferences/PSViewController.h>

@class PSEditingPane;

@interface PSDetailController : PSViewController
{
    PSEditingPane *_pane;
}

- (void).cxx_destruct;
- (void)statusBarWillAnimateByHeight:(double)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)suspend;
- (void)saveChanges;
- (id)title;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)loadPane;
@property(nonatomic) __weak PSEditingPane *pane;
- (void)viewDidLayoutSubviews;
- (void)didRotateFromInterfaceOrientation:(long long)arg1;
- (void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (struct CGRect)paneFrame;
- (void)dealloc;
- (void)viewDidUnload;
- (void)loadView;

@end

