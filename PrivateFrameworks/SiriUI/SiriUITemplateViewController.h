//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class UIView;
@protocol SiriUITemplateModel, SiriUITemplateModelPrivate, SiriUITemplateView, SiriUITemplateViewControllerDelegate;

@interface SiriUITemplateViewController : UIViewController
{
    _Bool _active;
    _Bool _compressed;
    id <SiriUITemplateModel> _templateModel;
    id <SiriUITemplateViewControllerDelegate> _delegate;
}

+ (id)templateViewControllerForTemplateModel:(id)arg1;
@property(nonatomic, getter=isCompressed) _Bool compressed; // @synthesize compressed=_compressed;
@property(nonatomic, getter=isActive) _Bool active; // @synthesize active=_active;
@property(nonatomic) __weak id <SiriUITemplateViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) id <SiriUITemplateModel> templateModel; // @synthesize templateModel=_templateModel;
- (void).cxx_destruct;
- (void)prepareForDismissal;
@property(readonly, nonatomic) id <SiriUITemplateModelPrivate> templateModelPrivate;
- (void)loadView;
- (id)_initWithTemplateModel:(id)arg1;

// Remaining properties
@property(retain, nonatomic) UIView<SiriUITemplateView> *view; // @dynamic view;

@end

