//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSStringPredicateOperator.h>

__attribute__((visibility("hidden")))
@interface NSMatchingPredicateOperator : NSStringPredicateOperator
{
    int _contextLock;
    CDStruct_c69bce23 *_regexContext;
}

- (_Bool)performPrimitiveOperationUsingObject:(id)arg1 andObject:(id)arg2;
- (_Bool)_shouldEscapeForLike;
- (SEL)selector;
- (id)symbol;
- (void)dealloc;
- (void)_clearContext;
- (id)initWithOperatorType:(unsigned long long)arg1 modifier:(unsigned long long)arg2 variant:(unsigned long long)arg3;

@end

