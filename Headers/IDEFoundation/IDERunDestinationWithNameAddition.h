//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEFoundation/IDERunDestinationRepresentedObject-Protocol.h>

@class IDERunDestination, NSString;

@interface IDERunDestinationWithNameAddition : NSObject <IDERunDestinationRepresentedObject>
{
    BOOL _isWatchDestination;
    IDERunDestination *_runDestination;
    NSString *_nameAddition;
}

+ (id)keyPathsForValuesAffectingFullDisplayName;
+ (void)initialize;
@property(readonly) NSString *nameAddition; // @synthesize nameAddition=_nameAddition;
@property(readonly) BOOL isWatchDestination; // @synthesize isWatchDestination=_isWatchDestination;
@property(readonly) IDERunDestination *runDestination; // @synthesize runDestination=_runDestination;
- (void).cxx_destruct;
@property(readonly) NSString *fullDisplayName;
- (id)_baseName;
- (id)_nameWithAddition;
@property(readonly, copy) NSString *description;
- (id)initWithRunDestination:(id)arg1 nameAddition:(id)arg2 isWatchDestination:(BOOL)arg3;
- (id)initWithRunDestination:(id)arg1 nameAddition:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

