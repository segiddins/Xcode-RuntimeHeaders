//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSSet;

@interface DYMetalLibraryFunctionBuildInfo : NSObject
{
    NSArray *_recipes;
    NSSet *_dependentFilePaths;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSSet *dependentFilePaths; // @synthesize dependentFilePaths=_dependentFilePaths;
@property(readonly, nonatomic) NSArray *recipes; // @synthesize recipes=_recipes;
- (id)initWithRecipes:(id)arg1 dependentFilePaths:(id)arg2;

@end

