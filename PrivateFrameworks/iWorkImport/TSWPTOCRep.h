//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iWorkImport/TSWPShapeRep.h>

__attribute__((visibility("hidden")))
@interface TSWPTOCRep : TSWPShapeRep
{
}

- (unsigned long long)i_indexOfHitTOCEntryAtPoint:(struct CGPoint)arg1;
- (id)i_paragraphStyleAtPoint:(struct CGPoint)arg1;
- (void)showTableOfContentsEditingCollaborationHUDAtPoint:(struct CGPoint)arg1;
- (_Bool)canMakePathEditable;
- (_Bool)shouldShowKnobs;
- (_Bool)shouldCreateKnobs;
- (id)hitRep:(struct CGPoint)arg1;
- (id)paragraphStylesBetweenCharIndex:(unsigned long long)arg1 andCharIndex:(unsigned long long)arg2;
- (unsigned long long)charIndexAtPoint:(struct CGPoint)arg1;
- (id)tocInfo;

@end

