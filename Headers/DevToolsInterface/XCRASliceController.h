//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSAttributedString, NSObjectController, NSString, XCRAAttributedStringGenerator, XCRAQuery;

@interface XCRASliceController : NSObject
{
    NSObjectController *_objectController;
    NSAttributedString *_tokenName;
    NSAttributedString *_tokenScope;
    NSString *_tokenType;
    NSAttributedString *_parentName;
    NSAttributedString *_declaredInHeader;
    NSAttributedString *_declaration;
    NSAttributedString *_abstract;
    NSAttributedString *_deprecation;
    NSAttributedString *_sliceStatus;
    NSAttributedString *_relatedAPI;
    NSAttributedString *_relatedAPISliceStatus;
    NSAttributedString *_relatedDocuments;
    NSAttributedString *_relatedDocumentsSliceStatus;
    NSAttributedString *_relatedSampleCode;
    NSAttributedString *_relatedSampleCodeSliceStatus;
    NSAttributedString *_availabilitySliceStatus;
    NSAttributedString *_returnValueDescription;
    NSAttributedString *_parameters;
    XCRAQuery *_currentQuery;
    XCRAAttributedStringGenerator *m_stringGenerator;
}

+ (void)initialize;
@property(copy) NSAttributedString *parameters; // @synthesize parameters=_parameters;
@property(copy) NSAttributedString *returnValueDescription; // @synthesize returnValueDescription=_returnValueDescription;
@property(retain) XCRAAttributedStringGenerator *stringGenerator; // @synthesize stringGenerator=m_stringGenerator;
@property(retain) XCRAQuery *currentQuery; // @synthesize currentQuery=_currentQuery;
@property(copy) NSAttributedString *availabilitySliceStatus; // @synthesize availabilitySliceStatus=_availabilitySliceStatus;
@property(copy) NSAttributedString *relatedSampleCodeSliceStatus; // @synthesize relatedSampleCodeSliceStatus=_relatedSampleCodeSliceStatus;
@property(copy) NSAttributedString *relatedSampleCode; // @synthesize relatedSampleCode=_relatedSampleCode;
@property(copy) NSAttributedString *relatedDocumentsSliceStatus; // @synthesize relatedDocumentsSliceStatus=_relatedDocumentsSliceStatus;
@property(copy) NSAttributedString *relatedDocuments; // @synthesize relatedDocuments=_relatedDocuments;
@property(copy) NSAttributedString *relatedAPISliceStatus; // @synthesize relatedAPISliceStatus=_relatedAPISliceStatus;
@property(copy) NSAttributedString *relatedAPI; // @synthesize relatedAPI=_relatedAPI;
@property(copy) NSAttributedString *sliceStatus; // @synthesize sliceStatus=_sliceStatus;
@property(copy) NSAttributedString *deprecation; // @synthesize deprecation=_deprecation;
@property(copy) NSAttributedString *abstract; // @synthesize abstract=_abstract;
@property(copy) NSAttributedString *declaration; // @synthesize declaration=_declaration;
@property(copy) NSAttributedString *declaredInHeader; // @synthesize declaredInHeader=_declaredInHeader;
@property(copy) NSAttributedString *parentName; // @synthesize parentName=_parentName;
@property(copy) NSString *tokenType; // @synthesize tokenType=_tokenType;
@property(copy) NSAttributedString *tokenScope; // @synthesize tokenScope=_tokenScope;
@property(copy) NSAttributedString *tokenName; // @synthesize tokenName=_tokenName;
- (void)updateSliceStatusValuesWithQuery:(id)arg1;
- (void)_updateRelatedSampleCodeSlice;
- (void)_updateRelatedDocumentsSlice;
- (void)_updateRelatedAPISlice;
- (void)_updateDeprecationSlice;
- (id)_paraStyleForAvailabilitySlice;
- (void)_updateParametersSlice;
- (void)_updateReturnValueSlice;
- (void)_updateAvailabilitySlice;
- (void)_updateAbstractSlice;
- (void)_updateDeclarationSlice;
- (void)_updateDeclaredInSlice;
- (void)_updateParentNameSlice;
- (void)_updateTokenScopeSlice;
- (void)_updateTokenNameSlice;
- (void)_updateTokenType;
- (void)dealloc;
- (id)init;

@end
