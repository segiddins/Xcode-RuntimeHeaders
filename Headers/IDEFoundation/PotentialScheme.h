//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;
@protocol IDEBuildable;

@interface PotentialScheme : NSObject
{
    id <IDEBuildable> _mainBuildable;
    NSString *_name;
    NSMutableArray *_buildables;
}

- (void).cxx_destruct;
@property(retain) NSMutableArray *buildables; // @synthesize buildables=_buildables;
@property(retain) NSString *name; // @synthesize name=_name;
@property(retain) id <IDEBuildable> mainBuildable; // @synthesize mainBuildable=_mainBuildable;
- (id)initWithBuildable:(id)arg1;
- (id)initWithBuildable:(id)arg1 name:(id)arg2;

@end
