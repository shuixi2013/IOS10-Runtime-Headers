//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIAlertController.h>

@class SBAlertItem;
@protocol _SBAlertControllerDelegate;

@interface _SBAlertController : UIAlertController
{
    SBAlertItem *_alertItem;
    id <_SBAlertControllerDelegate> _alertControllerDelegate;
}

@property(nonatomic) __weak id <_SBAlertControllerDelegate> alertControllerDelegate; // @synthesize alertControllerDelegate=_alertControllerDelegate;
@property(nonatomic) __weak SBAlertItem *alertItem; // @synthesize alertItem=_alertItem;
- (void).cxx_destruct;
- (void)viewDidDisappear:(_Bool)arg1;

@end

