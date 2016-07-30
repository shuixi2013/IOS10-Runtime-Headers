//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIInterfaceAction.h>

#import <UIKit/UIAlertActionMutablePropertyObservering-Protocol.h>

@class NSString, UIAlertAction, _UIAlertControllerActionView;

__attribute__((visibility("hidden")))
@interface _UIAlertControllerActionViewInterfaceAction : UIInterfaceAction <UIAlertActionMutablePropertyObservering>
{
    UIAlertAction *_underlyingAlertAction;
}

+ (id)actionWithAlertControllerActionView:(id)arg1;
@property(readonly, nonatomic) UIAlertAction *underlyingAlertAction; // @synthesize underlyingAlertAction=_underlyingAlertAction;
- (void).cxx_destruct;
- (void)_action:(id)arg1 updatedTitleTextColor:(id)arg2;
- (void)_action:(id)arg1 updatedImageTintColor:(id)arg2;
- (void)_action:(id)arg1 changedToBePreferred:(_Bool)arg2;
- (void)_action:(id)arg1 changedToChecked:(_Bool)arg2;
- (void)_action:(id)arg1 changedToEnabled:(_Bool)arg2;
- (void)_action:(id)arg1 changedToTitleTextAlignment:(long long)arg2;
- (void)_action:(id)arg1 changedToTitle:(id)arg2;
- (long long)type;
- (long long)_typeForDeterminingViewRepresentation;
@property(readonly, nonatomic) _UIAlertControllerActionView *alertControllerActionView; // @dynamic alertControllerActionView;
- (id)leadingImage;
- (id)classificationTitle;
- (void)dealloc;
- (void)_initializeStateFromUnderlyingAlertAction;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

