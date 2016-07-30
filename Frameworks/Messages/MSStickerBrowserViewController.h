//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <Messages/MSStickerBrowserViewDataSource-Protocol.h>

@class MSStickerBrowserView, NSString;

@interface MSStickerBrowserViewController : UIViewController <MSStickerBrowserViewDataSource>
{
    MSStickerBrowserView *_stickerBrowserView;
    long long _stickerSize;
}

@property(readonly, nonatomic) long long stickerSize; // @synthesize stickerSize=_stickerSize;
@property(retain, nonatomic) MSStickerBrowserView *stickerBrowserView; // @synthesize stickerBrowserView=_stickerBrowserView;
- (void).cxx_destruct;
- (id)stickerBrowserView:(id)arg1 stickerAtIndex:(long long)arg2;
- (long long)numberOfStickersInStickerBrowserView:(id)arg1;
- (void)didReceiveMemoryWarning;
- (void)loadView;
- (id)initWithStickerSize:(long long)arg1;
- (id)initWithStickerSizeClass:(long long)arg1;
- (id)initWithLayout:(long long)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
