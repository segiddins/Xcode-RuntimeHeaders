//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEInterfaceBuilderKit/IBRefactoringOperation.h>

@class NSString;

@interface IBOutletRenameRefactoringOperation : IBRefactoringOperation
{
    NSString *oldOutletName;
    NSString *newOutletName;
    NSString *className;
}

- (void).cxx_destruct;
- (BOOL)refactorObject:(id)arg1 inDocument:(id)arg2 error:(id *)arg3;
- (id)className;
- (id)newOutletName;
- (id)oldOutletName;
- (id)initWithClassName:(id)arg1 oldOutletName:(id)arg2 newOutletName:(id)arg3;

@end
