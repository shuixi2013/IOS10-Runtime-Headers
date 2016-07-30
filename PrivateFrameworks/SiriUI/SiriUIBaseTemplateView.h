//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <SiriUI/SiriUITemplateView-Protocol.h>

@class NSString;
@protocol SiriUITemplateModel, SiriUITemplatedView;

@interface SiriUIBaseTemplateView : UIView <SiriUITemplateView>
{
    id <SiriUITemplatedView> _templatedSuperview;
    id <SiriUITemplateModel> _dataSource;
}

@property(nonatomic) __weak id <SiriUITemplateModel> dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) __weak id <SiriUITemplatedView> templatedSuperview; // @synthesize templatedSuperview=_templatedSuperview;
- (void).cxx_destruct;
- (void)removeFromTemplatedSuperview;
- (double)desiredHeight;
- (void)reloadData;
- (id)initWithDataSource:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

