//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DevToolsCore/XCSwiftPackageReference.h>

@class IDESourcePackageRequirement, NSString;

@interface XCRemoteSwiftPackageReference : XCSwiftPackageReference
{
    NSString *_repositoryURL;
    IDESourcePackageRequirement *_requirement;
}

+ (id)archivableAttributes;
+ (id)keyPathsForValuesAffectingDisplayVersionRules;
+ (id)keyPathsForValuesAffectingDisplayLocation;
+ (id)keyPathsForValuesAffectingDisplayName;
- (void).cxx_destruct;
@property(copy, nonatomic) IDESourcePackageRequirement *requirement; // @synthesize requirement=_requirement;
@property(copy, nonatomic) NSString *repositoryURL; // @synthesize repositoryURL=_repositoryURL;
- (void)awakeFromPListUnarchiver:(id)arg1;
- (id)gidCommentForArchive;
- (void)_setRequirement:(id)arg1;
- (id)_requirement;
- (void)findFeaturesInUseAndAddToSet:(id)arg1 usingPathPrefix:(id)arg2;
- (id)displayVersionRules;
- (id)displayLocation;
- (id)displayName;
- (id)detailedName;

@end

