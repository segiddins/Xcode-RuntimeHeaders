//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DVTFoundation/DVTInvalidation_NSObject.h>

#import <IDEKit/IDEBatchFindQueryDelegate-Protocol.h>

@interface _TtCC6IDEKit29IDEFindResultExplorableSourceP33_397AFEB4126BD23E6A2591F95127F3A211Accumulator : DVTInvalidation_NSObject <IDEBatchFindQueryDelegate>
{
    // Error parsing type: , name: query
    // Error parsing type: , name: treeNodes
    // Error parsing type: , name: source
}

- (void).cxx_destruct;
- (id)init;
- (void)findNavigatorQuery:(id)arg1 didFinishGeneratingLazyChildrenOfResult:(id)arg2;
- (void)findNavigatorQuery:(id)arg1 didGenerateResults:(id)arg2;
- (void)findNavigatorQueryDidComplete:(id)arg1;
- (void)findNavigatorQuery:(id)arg1 isStalledOnFilePaths:(id)arg2;
- (void)findNavigatorQuery:(id)arg1 progressUpdate:(long long)arg2;
- (void)primitiveInvalidate;

@end

