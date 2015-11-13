//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <DVTKit/DVTViewController.h>

#import <IDEKit/IDELocalizationController-Protocol.h>

@class IDELocalizationExportContext, IDELocalizationExporter, NSArrayController;

@interface IDELocalizationExportController : DVTViewController <IDELocalizationController>
{
    BOOL _complete;
    NSArrayController *_includeLanguagesController;
    NSArrayController *_targetLanguagesController;
    long long _selectedOptionIndex;
    IDELocalizationExportContext *_context;
    IDELocalizationExporter *_worker;
}

+ (id)keyPathsForValuesAffectingTargetLanguagesEnabled;
@property BOOL complete; // @synthesize complete=_complete;
@property(retain) IDELocalizationExporter *worker; // @synthesize worker=_worker;
@property(retain, nonatomic) IDELocalizationExportContext *context; // @synthesize context=_context;
@property long long selectedOptionIndex; // @synthesize selectedOptionIndex=_selectedOptionIndex;
@property(retain) NSArrayController *targetLanguagesController; // @synthesize targetLanguagesController=_targetLanguagesController;
@property(retain) NSArrayController *includeLanguagesController; // @synthesize includeLanguagesController=_includeLanguagesController;
- (void).cxx_destruct;
- (id)description;
- (void)cancel;
- (void)start;
- (BOOL)tableView:(id)arg1 shouldSelectRow:(long long)arg2;
- (BOOL)targetLanguagesEnabled;
- (id)_configuredSavePanel;
- (void)primitiveInvalidate;

@end

