//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosUICore/PXUIWidgetBar.h>

#import <PhotosUICore/PXUIWidgetHeaderViewDelegate-Protocol.h>

@class NSString;

@interface PXUIWidgetHeaderBar : PXUIWidgetBar <PXUIWidgetHeaderViewDelegate>
{
}

- (void)widgetHeaderView:(id)arg1 didSelectCaption:(id)arg2;
- (void)widgetHeaderView:(id)arg1 didSelectSubtitle:(id)arg2;
- (void)setSpec:(id)arg1;
- (void)setDisclosureTitle:(id)arg1;
- (void)setCaption:(id)arg1;
- (void)setSubtitle:(id)arg1;
- (void)setTitle:(id)arg1;
- (double)viewHeight;
- (void)updateView;
- (id)createView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
