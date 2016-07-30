//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <GameplayKit/NSCoding-Protocol.h>
#import <GameplayKit/NSCopying-Protocol.h>

@class NSArray, NSMutableArray;
@protocol GKSceneRootNodeType;

@interface GKScene : NSObject <NSCopying, NSCoding>
{
    NSMutableArray *_entities;
    NSMutableArray *_graphs;
    id <GKSceneRootNodeType> _rootNode;
}

+ (id)sceneWithFileNamed:(id)arg1;
@property(retain, nonatomic) id <GKSceneRootNodeType> rootNode; // @synthesize rootNode=_rootNode;
@property(readonly, nonatomic) NSArray *graphs; // @synthesize graphs=_graphs;
@property(readonly, nonatomic) NSArray *entities; // @synthesize entities=_entities;
- (void).cxx_destruct;
- (void)removeGraph:(id)arg1;
- (void)addGraph:(id)arg1;
- (void)removeEntity:(id)arg1;
- (void)addEntity:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)copy;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

