//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <DebuggerFoundation/NSCopying-Protocol.h>
#import <DebuggerFoundation/NSFastEnumeration-Protocol.h>

@class DBGViewWindow, NSArray;

@interface DBGLayoutConstraintSet : NSObject <NSFastEnumeration, NSCopying>
{
    DBGViewWindow *_parentWindow;
    NSArray *_constraints;
}

+ (id)_createConstraintsFromPlistArray:(id)arg1 parentWindow:(id)arg2;
@property(readonly) NSArray *constraints; // @synthesize constraints=_constraints;
@property(readonly) __weak DBGViewWindow *parentWindow; // @synthesize parentWindow=_parentWindow;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqualToSet:(id)arg1;
- (BOOL)containsConstraint:(id)arg1;
- (id)constraintSetWithContraintSet:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (id)constraintModelWithAddress:(id)arg1;
- (id)subsetContainingConstraintsPassingTest:(CDUnknownBlockType)arg1;
- (id)constraintsOrderedByComparator:(CDUnknownBlockType)arg1;
- (id)constraintsPassingTest:(CDUnknownBlockType)arg1;
- (id)initWithPlistArray:(id)arg1 parentWindow:(id)arg2;
- (id)_initWithConstraintModels:(id)arg1 parentWindow:(id)arg2;

@end

