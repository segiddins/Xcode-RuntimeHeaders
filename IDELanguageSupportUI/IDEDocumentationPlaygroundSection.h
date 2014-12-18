//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <IDELanguageSupportUI/IDEPlaygroundSection.h>

@class NSString, NSURL;

@interface IDEDocumentationPlaygroundSection : IDEPlaygroundSection
{
    NSURL *_documentationURL;
    NSString *_documentationRelativePath;
}

+ (id)contentPathsToPreserveOnSave;
+ (id)xmlElementName;
@property(copy, nonatomic) NSString *documentationRelativePath; // @synthesize documentationRelativePath=_documentationRelativePath;
@property(copy) NSURL *documentationURL; // @synthesize documentationURL=_documentationURL;
- (void).cxx_destruct;
- (id)xmlElementConstructingFileWrapper:(id)arg1;
- (id)viewControllerForDisplayingPlaygroundSectionInEditor:(id)arg1;
- (void)_updateDocumentationURL;
- (id)initWithXMLElement:(id)arg1 enclosingFileWrapper:(id)arg2 inPlaygroundDocument:(id)arg3;
- (id)initWithRelativePathToDocumentation:(id)arg1 identifier:(id)arg2 inPlaygroundDocument:(id)arg3;

@end

