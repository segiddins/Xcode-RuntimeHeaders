//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class IDEDistributionContext, IDEDistributionExportOptions, NSString;

@interface IDEDistributionDriver : NSObject
{
    NSString *_successMessage;
    IDEDistributionContext *_initialContext;
    IDEDistributionExportOptions *_exportOptions;
}

+ (id)distributionDriverWithDistributable:(id)arg1 exportOptions:(id)arg2;
@property(readonly, copy) IDEDistributionExportOptions *exportOptions; // @synthesize exportOptions=_exportOptions;
@property(retain) IDEDistributionContext *initialContext; // @synthesize initialContext=_initialContext;
@property(copy) NSString *successMessage; // @synthesize successMessage=_successMessage;
- (void).cxx_destruct;
- (BOOL)runWithDestinationPath:(id)arg1 error:(id *)arg2;

@end

