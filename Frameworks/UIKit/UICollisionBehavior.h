//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIDynamicBehavior.h>

@class NSArray, NSMutableDictionary, PKExtendedPhysicsBody;
@protocol UICollisionBehaviorDelegate;

@interface UICollisionBehavior : UIDynamicBehavior
{
    _Bool _usesImplicitBounds;
    struct UIEdgeInsets _implicitBoundsInsets;
    PKExtendedPhysicsBody *_implicitBoundsBody;
    NSMutableDictionary *_boundaryBodies;
    NSMutableDictionary *_boundaryPaths;
    unsigned long long _collisionMode;
    id <UICollisionBehaviorDelegate> _collisionDelegate;
    unsigned int _groupVID;
    unsigned int _groupBID;
    struct {
        unsigned int delegateBeganWithItem:1;
        unsigned int delegateEndedWithItem:1;
        unsigned int delegateBeganWithBoundary:1;
        unsigned int delegateEndedWithBoundary:1;
    } _collisionBehaviorFlags;
}

+ (_Bool)_isPrimitiveBehavior;
- (void).cxx_destruct;
- (id)description;
- (void)_removeExplicitBoundaryPaths;
- (void)_removeExplicitBoundaryBodies;
- (void)_setupExplicitBoundaries;
- (void)removeAllBoundaries;
@property(readonly, copy, nonatomic) NSArray *boundaryIdentifiers;
- (void)removeBoundaryWithIdentifier:(id)arg1;
- (id)boundaryWithIdentifier:(id)arg1;
- (void)_registerBodyForIdentifier:(id)arg1 path:(id)arg2;
- (void)_registerBoundaryForIdentifier:(id)arg1 path:(id)arg2;
- (void)addBoundaryWithIdentifier:(id)arg1 fromPoint:(struct CGPoint)arg2 toPoint:(struct CGPoint)arg3;
- (void)addBoundaryWithIdentifier:(id)arg1 forPath:(id)arg2;
- (void)_setupImplicitBoundaries;
- (void)_removeImplicitBoundaries;
@property(nonatomic) _Bool translatesReferenceBoundsIntoBoundary;
- (void)_setTranslatesReferenceItemBounds:(_Bool)arg1 intoBoundaryWithInsets:(struct UIEdgeInsets)arg2;
- (void)setTranslatesReferenceBoundsIntoBoundaryWithInsets:(struct UIEdgeInsets)arg1;
- (void)_dissociate;
- (void)_associate;
- (void)_reevaluate:(unsigned long long)arg1;
- (void)_didEndContact:(id)arg1;
@property(nonatomic) __weak id <UICollisionBehaviorDelegate> collisionDelegate;
- (void)_didBeginContact:(id)arg1;
- (void)_setCollisions:(_Bool)arg1 forBody:(id)arg2 isEdge:(_Bool)arg3;
@property(nonatomic) unsigned long long collisionMode;
- (void)_applySettings;
- (void)removeItem:(id)arg1;
- (void)addItem:(id)arg1;
- (void)_addCollisionItem:(id)arg1;
@property(readonly, copy, nonatomic) NSArray *items;
- (id)initWithItems:(id)arg1;
- (id)init;

@end

