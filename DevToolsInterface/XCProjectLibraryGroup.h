//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "XCLibraryGroupProtocol.h"

@class NSArray, PBXTarget;

@interface XCProjectLibraryGroup : NSObject <XCLibraryGroupProtocol>
{
    NSArray *_libraries;
    PBXTarget *_target;
}

- (id)librariesForType:(id)arg1;
- (id)objectfiles;
- (id)dylibs;
- (id)frameworks;
- (id)libraries;
- (void)setLibraries:(id)arg1;
- (int)libraryCount;
- (BOOL)isLinked;
- (id)project;
- (id)target;
- (id)path;
- (id)displayName;
- (void)dealloc;
- (id)initWithTarget:(id)arg1;
- (BOOL)isLeaf;

@end

