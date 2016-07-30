//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FuseUI/MusicLibraryAdaptiveViewConfiguration.h>

@class MusicLibraryRecentlyAddedPlaylistsCollectionViewConfiguration;

@interface MusicLibraryRecentlyAddedPlaylistsViewConfiguration : MusicLibraryAdaptiveViewConfiguration
{
    MusicLibraryRecentlyAddedPlaylistsCollectionViewConfiguration *_collectionViewConfiguration;
    _Bool _shouldForwardBasePropertyValues;
}

+ (unsigned long long)defaultEntityLimit;
- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned long long entityLimit;
- (id)loadRegularWidthConfiguration;
- (id)loadCompactWidthConfiguration;
- (void)setUserActivityItemTypes:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setIconName:(id)arg1;
- (long long)handleSelectionOfEntityValueContext:(id)arg1 fromViewController:(id)arg2;
- (id)entityViewDescriptor;
- (id)initWithEntityLimit:(unsigned long long)arg1;
- (id)init;

@end

