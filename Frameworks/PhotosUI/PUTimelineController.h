//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosUICore/PXObservable.h>

#import <PhotosUI/PXChangeObserver-Protocol.h>
#import <PhotosUI/_UISettingsKeyObserver-Protocol.h>

@class NSString, PUTimelineModel, PUTimelineScrubberRateCalculator, PUTimelineScrubberView, UIScrollView;
@protocol PUTimelineControllerDelegate;

__attribute__((visibility("hidden")))
@interface PUTimelineController : PXObservable <PXChangeObserver, _UISettingsKeyObserver>
{
    _Bool _scrubbersVisible;
    UIScrollView *_contentScrollView;
    PUTimelineScrubberView *_dateScrubberView;
    PUTimelineScrubberView *_libraryScrubberView;
    PUTimelineModel *_timelineModel;
    id <PUTimelineControllerDelegate> _delegate;
    PUTimelineScrubberRateCalculator *_scrubbingRateCalculator;
}

@property(readonly, nonatomic) PUTimelineScrubberRateCalculator *scrubbingRateCalculator; // @synthesize scrubbingRateCalculator=_scrubbingRateCalculator;
@property(nonatomic) __weak id <PUTimelineControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic, setter=_setScrubbersVisible:) _Bool scrubbersVisible; // @synthesize scrubbersVisible=_scrubbersVisible;
@property(readonly, nonatomic) PUTimelineModel *timelineModel; // @synthesize timelineModel=_timelineModel;
@property(readonly, nonatomic) PUTimelineScrubberView *libraryScrubberView; // @synthesize libraryScrubberView=_libraryScrubberView;
@property(readonly, nonatomic) PUTimelineScrubberView *dateScrubberView; // @synthesize dateScrubberView=_dateScrubberView;
@property(readonly, nonatomic) UIScrollView *contentScrollView; // @synthesize contentScrollView=_contentScrollView;
- (void).cxx_destruct;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;
- (void)_updateDelegateScrubberInstallation;
- (void)updateTimelineModel;
- (void)dealloc;
- (id)initWithContentScrollView:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

