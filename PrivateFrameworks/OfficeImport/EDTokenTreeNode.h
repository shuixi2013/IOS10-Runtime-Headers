//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface EDTokenTreeNode : NSObject
{
    unsigned int mTokenIndex;
    int mTokenType;
    EDTokenTreeNode *mFirstChild;
    EDTokenTreeNode *mSibling;
}

+ (id)tokenTreeNodeWithIndexAndType:(unsigned int)arg1 type:(int)arg2;
- (id)description;
- (void)setSibling:(id)arg1;
- (id)sibling;
- (void)setFirstChild:(id)arg1;
- (id)firstChild;
- (unsigned int)tokenIndex;
- (void)dealloc;
- (id)initWithIndexAndType:(unsigned int)arg1 type:(int)arg2;
- (id)init;

@end

