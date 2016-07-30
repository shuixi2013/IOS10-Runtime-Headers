//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableIndexSet, NSString;

@interface FIUITiledLayoutSectionInfo : NSObject
{
    _Bool _configured;
    unsigned long long _tilesPerRow;
    NSString *_title;
    unsigned long long _numberOfTiles;
    NSMutableIndexSet *_indexesToReload;
    struct CGSize _outerTileSize;
    struct CGRect _bounds;
    struct UIEdgeInsets _sectionInsets;
    struct UIEdgeInsets _tileInsets;
}

@property(readonly, nonatomic) NSMutableIndexSet *indexesToReload; // @synthesize indexesToReload=_indexesToReload;
@property(readonly, nonatomic) struct UIEdgeInsets tileInsets; // @synthesize tileInsets=_tileInsets;
@property(readonly, nonatomic) struct UIEdgeInsets sectionInsets; // @synthesize sectionInsets=_sectionInsets;
@property(readonly, nonatomic) struct CGSize outerTileSize; // @synthesize outerTileSize=_outerTileSize;
@property(readonly, nonatomic) unsigned long long numberOfTiles; // @synthesize numberOfTiles=_numberOfTiles;
@property(readonly, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, nonatomic) _Bool configured; // @synthesize configured=_configured;
@property(nonatomic) unsigned long long tilesPerRow; // @synthesize tilesPerRow=_tilesPerRow;
@property(nonatomic) struct CGRect bounds; // @synthesize bounds=_bounds;
- (void).cxx_destruct;
- (struct CGRect)frameForTileAtIndex:(unsigned long long)arg1;
- (void)configureIfNeededWithLayoutView:(id)arg1 sectionNumber:(unsigned long long)arg2;
- (void)resetConfiguration;
- (id)init;

@end

