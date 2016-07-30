//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <LinkPresentation/LPMetadataProviderSpecialization.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface LPiCloudSharingMetadataProviderSpecialization : LPMetadataProviderSpecialization
{
    NSString *_application;
    NSString *_title;
    _Bool _canceled;
}

+ (id)applicationMap;
+ (id)specializedMetadataProviderForURL:(id)arg1;
+ (id)extractTitleFromURL:(id)arg1;
+ (id)extractApplicationFromURL:(id)arg1;
- (void).cxx_destruct;
- (void)cancel;
- (void)start;
- (id)icon;
- (id)applicationBundleIdentifier;
- (id)application;
- (id)initWithApplication:(id)arg1 title:(id)arg2 forURL:(id)arg3;

@end

