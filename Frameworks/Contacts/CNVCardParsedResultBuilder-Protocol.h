//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Contacts/NSObject-Protocol.h>

@class NSArray, NSData, NSSet, NSString;

@protocol CNVCardParsedResultBuilder <NSObject>
- (NSSet *)validCountryCodes;
- (void)setUnknownProperties:(NSArray *)arg1;
- (_Bool)setImageData:(NSData *)arg1 forReference:(NSString *)arg2 clipRects:(NSArray *)arg3;
- (id)valueForProperty:(NSString *)arg1;
- (_Bool)setValues:(NSArray *)arg1 labels:(NSArray *)arg2 isPrimaries:(NSArray *)arg3 forProperty:(NSString *)arg4;
- (_Bool)setValue:(id)arg1 forProperty:(NSString *)arg2;
- (_Bool)canSetValueForProperty:(NSString *)arg1;
- (id)build;
@end

