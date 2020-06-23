//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEFoundation/IDEContainerItemCore.h>

#import <IDEFoundation/IDEGroupCore-Protocol.h>

@class NSArray, NSString;
@protocol IDEContainerCore, IDEGroupCore;

@interface IDEGroupCore : IDEContainerItemCore <IDEGroupCore>
{
    id <IDEContainerCore> _parentContainer;
    NSString *_name;
    NSArray *_subitems;
}

- (void).cxx_destruct;
@property(copy) NSArray *subitems; // @synthesize subitems=_subitems;
@property(copy) NSString *name; // @synthesize name=_name;
@property(retain) id <IDEContainerCore> parentContainer; // @synthesize parentContainer=_parentContainer;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(retain) id <IDEGroupCore> parentGroup;
@property(copy) NSString *path;
@property(readonly) Class superclass;

@end

