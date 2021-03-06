//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DVTFoundation/DVTCoverageDataContainer.h>

@class NSArray, NSNumber, NSString;

@interface IDESchemeActionCodeCoverageTarget : DVTCoverageDataContainer
{
    NSNumber *_functionCoverage;
    NSString *_buildableIdentifier;
    NSArray *_sourceFiles;
    NSString *_productPath;
    NSString *_fullDescription;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *fullDescription; // @synthesize fullDescription=_fullDescription;
@property(readonly, nonatomic) NSString *productPath; // @synthesize productPath=_productPath;
@property(readonly, nonatomic) NSArray *sourceFiles; // @synthesize sourceFiles=_sourceFiles;
@property(retain, nonatomic) NSString *buildableIdentifier; // @synthesize buildableIdentifier=_buildableIdentifier;
- (id)description;
@property(readonly, nonatomic) NSNumber *functionCoverage;
- (id)functions;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithBuildableIdentifier:(id)arg1 name:(id)arg2 productPath:(id)arg3 sourceFiles:(id)arg4;
- (id)makeCopyWithChildren:(id)arg1;
- (id)diffableChildren;
- (id)diffIdentifier;
- (unsigned long long)diffType;

@end

