//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEKit/IDEInspectorViewController.h>

@class MISSING_TYPE, NSString;

@interface _TtC18IDESourceControlUI34WorkingCopyInspectorViewController : IDEInspectorViewController
{
    MISSING_TYPE *isLoadingAuthor;
    MISSING_TYPE *workingCopy;
    MISSING_TYPE *authorOperation;
    MISSING_TYPE *operationQueue;
    MISSING_TYPE *authorEditable;
    MISSING_TYPE *authorNamePlaceholderText;
    MISSING_TYPE *authorEmailPlaceholderText;
    MISSING_TYPE *_authorEmail;
    MISSING_TYPE *_authorName;
}

- (void).cxx_destruct;
- (void)viewWillUninstall;
@property(nonatomic, copy) NSString *authorEmail;
@property(nonatomic, copy) NSString *authorName;
- (void)didSetInspectedObjects:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
@property(nonatomic, copy) NSString *_authorName;
@property(nonatomic, copy) NSString *_authorEmail;
@property(nonatomic, copy) NSString *authorEmailPlaceholderText;
@property(nonatomic, copy) NSString *authorNamePlaceholderText;
@property(nonatomic) BOOL authorEditable; // @synthesize authorEditable;

@end

