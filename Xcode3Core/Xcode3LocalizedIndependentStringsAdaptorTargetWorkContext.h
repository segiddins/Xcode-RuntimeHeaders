//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <IDEFoundation/IDELocalizationWorkContext.h>

#import <Xcode3Core/IDELocalizationWorkProvider-Protocol.h>

@class NSArray, NSString, Xcode3Target;

@interface Xcode3LocalizedIndependentStringsAdaptorTargetWorkContext : IDELocalizationWorkContext <IDELocalizationWorkProvider>
{
    Xcode3Target *_target;
    NSArray *_sourcePaths;
    NSArray *_tableNames;
    NSString *_tempPath;
}

@property(retain) NSString *tempPath; // @synthesize tempPath=_tempPath;
@property(retain) NSArray *tableNames; // @synthesize tableNames=_tableNames;
@property(retain) NSArray *sourcePaths; // @synthesize sourcePaths=_sourcePaths;
@property(retain) Xcode3Target *target; // @synthesize target=_target;
- (void).cxx_destruct;
- (id)work;
- (void)primitiveInvalidate;

@end

