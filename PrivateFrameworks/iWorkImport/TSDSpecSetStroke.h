//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iWorkImport/TSDSpecStroke.h>

@class TSDStroke;

__attribute__((visibility("hidden")))
@interface TSDSpecSetStroke : TSDSpecStroke
{
    TSDStroke *_stroke;
    _Bool _unset;
}

- (id)description;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)operationPropertyName;
- (id)apply:(id)arg1;
- (_Bool)isUnsetSpec;
- (id)initUnsetSpec;
- (id)initWithCurrentProperty:(id)arg1;

@end

