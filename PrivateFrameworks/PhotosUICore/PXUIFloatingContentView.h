//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/_UIFloatingContentView.h>

#import <PhotosUICore/PXAdjustableContentsView-Protocol.h>

@class NSString;

@interface PXUIFloatingContentView : _UIFloatingContentView <PXAdjustableContentsView>
{
    struct CGRect _contentsRect;
}

@property(nonatomic) struct CGRect contentsRect; // @synthesize contentsRect=_contentsRect;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (_Bool)canBecomeFocused;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

