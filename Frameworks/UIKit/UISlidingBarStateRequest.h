//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <UIKit/NSCopying-Protocol.h>

@interface UISlidingBarStateRequest : NSObject <NSCopying>
{
    _Bool _userInitiated;
    double _leadingWidth;
    double _trailingWidth;
    double _bounce;
}

@property(nonatomic) _Bool userInitiated; // @synthesize userInitiated=_userInitiated;
@property(nonatomic) double bounce; // @synthesize bounce=_bounce;
@property(nonatomic) double trailingWidth; // @synthesize trailingWidth=_trailingWidth;
@property(nonatomic) double leadingWidth; // @synthesize leadingWidth=_leadingWidth;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

