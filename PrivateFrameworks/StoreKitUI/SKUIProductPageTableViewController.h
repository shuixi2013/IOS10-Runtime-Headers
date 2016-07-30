//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <StoreKitUI/UITableViewDataSource-Protocol.h>
#import <StoreKitUI/UITableViewDelegate-Protocol.h>

@class NSArray, NSString, SKUIClientContext, SKUIColorScheme, SKUILayoutCache, SKUIProductPageHeaderViewController, SKUIProductPageTableView, UIColor, UITableView;
@protocol SKUIProductPageChildViewController, SKUIProductPageChildViewControllerDelegate;

@interface SKUIProductPageTableViewController : UIViewController <UITableViewDataSource, UITableViewDelegate>
{
    SKUIClientContext *_clientContext;
    SKUIColorScheme *_colorScheme;
    id <SKUIProductPageChildViewControllerDelegate> _delegate;
    id <SKUIProductPageChildViewController> _delegateSender;
    UIColor *_evenColor;
    SKUIProductPageHeaderViewController *_headerViewController;
    UIColor *_color;
    NSArray *_sections;
    SKUIProductPageTableView *_tableView;
    SKUILayoutCache *_textLayoutCache;
}

@property(retain, nonatomic) SKUILayoutCache *textLayoutCache; // @synthesize textLayoutCache=_textLayoutCache;
@property(copy, nonatomic) NSArray *sections; // @synthesize sections=_sections;
@property(retain, nonatomic) SKUIProductPageHeaderViewController *headerViewController; // @synthesize headerViewController=_headerViewController;
@property(nonatomic) __weak id <SKUIProductPageChildViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) SKUIColorScheme *colorScheme; // @synthesize colorScheme=_colorScheme;
@property(nonatomic) __weak id <SKUIProductPageChildViewController> delegateSender; // @synthesize delegateSender=_delegateSender;
@property(retain, nonatomic) SKUIClientContext *clientContext; // @synthesize clientContext=_clientContext;
- (void).cxx_destruct;
- (id)_textLayoutRequestWithText:(id)arg1;
- (id)_tableView;
- (void)_addHeaderView;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)loadView;
@property(readonly, nonatomic) UITableView *tableView;
- (void)scrollToView:(id)arg1 animated:(_Bool)arg2;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithReleaseNotes:(id)arg1 clientContext:(id)arg2;
- (id)initWithInAppPurchases:(id)arg1 clientContext:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

