//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosUICore/PXSettings.h>

@interface PXPhotosDataSourceSettings : PXSettings
{
    _Bool _slowBackgroundFetch;
    double _delayChanges;
}

+ (id)sharedInstance;
+ (id)settingsControllerModule;
@property(nonatomic) double delayChanges; // @synthesize delayChanges=_delayChanges;
@property(nonatomic) _Bool slowBackgroundFetch; // @synthesize slowBackgroundFetch=_slowBackgroundFetch;
- (void)setDefaultValues;

@end

