//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class CoreThemeDocument;

@interface TDHistorian : NSObject
{
    CoreThemeDocument *document;
}

- (id)initWithDocument:(id)arg1;
- (id)keySpecsForRenditionsRemovedSinceDate:(id)arg1;
- (id)facetDefinitionsChangedSinceDate:(id)arg1;
- (id)namedElementsChangedSinceDate:(id)arg1;
- (id)fontSizesChangedSinceDate:(id)arg1;
- (id)fontsChangedSinceDate:(id)arg1;
- (id)colorsChangedSinceDate:(id)arg1;
- (id)productionsChangedSinceDate:(id)arg1 uuidNeedsReset:(_Bool *)arg2;
- (id)productionsWithModifiedAssets;
- (_Bool)foundDataChangesSinceDate:(id)arg1;
- (void)updateEntriesForManagedObjects:(id)arg1;
- (void)_updateEntryForManagedObject:(id)arg1;
- (id)_updateRecordsWithName:(id)arg1 sinceDate:(id)arg2;

@end

