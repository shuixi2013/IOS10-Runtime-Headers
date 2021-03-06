//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsCore/NSCopying-Protocol.h>

@class NSOrderedSet, NSString;
@protocol NSCopying><NSCoding;

@interface FCTableViewDataSourceSection : NSObject <NSCopying>
{
    NSObject<NSCopying><NSCoding> *_identifier;
    NSString *_headerTitle;
    NSOrderedSet *_rowData;
}

@property(copy, nonatomic) NSOrderedSet *rowData; // @synthesize rowData=_rowData;
@property(copy, nonatomic) NSString *headerTitle; // @synthesize headerTitle=_headerTitle;
@property(copy, nonatomic) NSObject<NSCopying><NSCoding> *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)initWithIdentifier:(id)arg1 headerTitle:(id)arg2 rowData:(id)arg3;
- (id)init;

@end

