//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSIndexSet;

@interface IKStylesGroup : NSObject
{
    NSArray *_mediaQueryList;
    NSArray *_orderedStylesOrGroups;
    NSDictionary *_indexedSelectors;
    NSIndexSet *_groupIndexes;
}

+ (id)stylesGroupWithMarkup:(id)arg1 filterBlockedStyles:(_Bool)arg2;
@property(readonly, retain, nonatomic) NSIndexSet *groupIndexes; // @synthesize groupIndexes=_groupIndexes;
@property(readonly, retain, nonatomic) NSDictionary *indexedSelectors; // @synthesize indexedSelectors=_indexedSelectors;
@property(readonly, retain, nonatomic) NSArray *orderedStylesOrGroups; // @synthesize orderedStylesOrGroups=_orderedStylesOrGroups;
@property(readonly, retain, nonatomic) NSArray *mediaQueryList; // @synthesize mediaQueryList=_mediaQueryList;
- (void).cxx_destruct;
- (void)_computeIndexedSelectorsFromStylesOrGroups:(id)arg1;
- (id)initWithMarkup:(id)arg1 parseSubGroups:(_Bool)arg2 mediaQueryList:(id)arg3 filterBlockedStyles:(_Bool)arg4;
- (id)initWithCSSRule:(id)arg1 mediaQueryList:(id)arg2 filterBlockedStyles:(_Bool)arg3;

@end

