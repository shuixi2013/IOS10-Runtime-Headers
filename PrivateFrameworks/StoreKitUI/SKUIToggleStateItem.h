//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <StoreKitUI/NSCopying-Protocol.h>

@class NSString;

@interface SKUIToggleStateItem : NSObject <NSCopying>
{
    BOOL _toggled;
    long long _count;
    NSString *_itemIdentifier;
    NSString *_nonToggledString;
    NSString *_toggledString;
}

@property(copy, nonatomic) NSString *toggledString; // @synthesize toggledString=_toggledString;
@property(nonatomic) BOOL toggled; // @synthesize toggled=_toggled;
@property(copy, nonatomic) NSString *nonToggleString; // @synthesize nonToggleString=_nonToggledString;
@property(copy, nonatomic) NSString *itemIdentifier; // @synthesize itemIdentifier=_itemIdentifier;
@property(nonatomic) long long count; // @synthesize count=_count;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

