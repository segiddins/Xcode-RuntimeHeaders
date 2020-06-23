//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface _TtC13IDEFoundation22IDETemplateMacroEngine : NSObject
{
    MISSING_TYPE *instanceOverrides;
    MISSING_TYPE *dataStoreMacros;
    MISSING_TYPE *compatibilityMacros;
    MISSING_TYPE *standardMacros;
    MISSING_TYPE *customDataStores;
    MISSING_TYPE *modifierMap;
    MISSING_TYPE *uuidTable;
    MISSING_TYPE *specialMacrosMap;
}

+ (id)defaultToolchainSwiftVersionMacro;
+ (id)runningDarwinVersionMacro;
+ (id)runningMacOSVersionMacro;
+ (id)fileBaseNameAsIdentifierMacro;
+ (id)fileBaseNameMacro;
+ (id)fileNameMacro;
+ (id)productNameMacro;
+ (id)targetNameMacro;
+ (id)packageNameAsIdentifierMacro;
+ (id)packageNamePreviewContentMacro;
+ (id)packageNameMacro;
+ (id)projectNameMacro;
+ (id)workspaceNameMacro;
+ (id)uuidMacro;
+ (id)yearMacro;
+ (id)timeMacro;
+ (id)dateMacro;
+ (id)fileHeaderMacro;
+ (id)humanReadableCopyrightPlistMacro;
+ (id)copyrightCommentMacro;
+ (id)copyrightMacro;
+ (id)organizationNameMacro;
+ (id)fullUserNameMacro;
+ (id)userNameMacro;
+ (id)templateMacroDefinitionsFilename;
- (void).cxx_destruct;
- (void)resetStandardMacrosWithWorkspaceName:(id)arg1 projectName:(id)arg2 packageName:(id)arg3 targetName:(id)arg4 productName:(id)arg5 fileName:(id)arg6 organizationName:(id)arg7;
- (id)objectForKeyedSubscript:(id)arg1;
- (BOOL)createFileAt:(id)arg1 substitutingMacrosInFileAt:(id)arg2 leavingUnknownMacros:(BOOL)arg3 error:(id *)arg4;
- (id)substituteMacrosIn:(id)arg1 leavingUnknownMacros:(BOOL)arg2 error:(id *)arg3;
- (void)addExpansionsFrom:(id)arg1;
- (void)setExpansion:(id)arg1 forMacro:(id)arg2;
- (id)initWithWorkspaceName:(id)arg1 projectName:(id)arg2 packageName:(id)arg3 targetName:(id)arg4 productName:(id)arg5 fileName:(id)arg6 organizationName:(id)arg7 customDataStores:(id)arg8;
- (id)init;

@end

