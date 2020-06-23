//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;
@protocol DYFunctionTracerDelegate;

@interface DYFunctionTracer : NSObject
{
    NSMutableDictionary *urlIndices;
    id <DYFunctionTracerDelegate> _delegate;
    unsigned int array_counter;
    unsigned int buffer_counter;
    BOOL _emitHiddenReceiverArgument;
    BOOL _prependReceiverArgument;
    BOOL _emitFunctionComments;
    BOOL _useHexadecimalFloatFormat;
    BOOL _compactFloats;
    BOOL _compact;
    BOOL _emitDataIndices;
    BOOL _emitTypeSuffixes;
    BOOL _emitAssociatedFunctions;
    BOOL _emitVariables;
    BOOL _emitErrors;
    BOOL _prependReceiverEffective;
    unsigned long long _currentReceiverID;
    BOOL _compilable;
    BOOL _compactEffective;
    NSString *_nilString;
}

+ (void)initialize;
@property(readonly, retain, nonatomic) NSMutableDictionary *urlIndices; // @synthesize urlIndices;
@property(readonly, nonatomic) NSString *nilString; // @synthesize nilString=_nilString;
@property(nonatomic) __weak id <DYFunctionTracerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) BOOL emitErrors; // @synthesize emitErrors=_emitErrors;
@property(nonatomic) BOOL emitVariables; // @synthesize emitVariables=_emitVariables;
@property(nonatomic) BOOL emitAssociatedFunctions; // @synthesize emitAssociatedFunctions=_emitAssociatedFunctions;
@property(nonatomic) BOOL emitTypeSuffixes; // @synthesize emitTypeSuffixes=_emitTypeSuffixes;
@property(nonatomic) BOOL emitDataIndices; // @synthesize emitDataIndices=_emitDataIndices;
@property(nonatomic) BOOL compact; // @synthesize compact=_compact;
@property(nonatomic) BOOL compactFloats; // @synthesize compactFloats=_compactFloats;
@property(nonatomic) BOOL useHexadecimalFloatFormat; // @synthesize useHexadecimalFloatFormat=_useHexadecimalFloatFormat;
@property(nonatomic) BOOL prependReceiverArgument; // @synthesize prependReceiverArgument=_prependReceiverArgument;
@property(nonatomic) BOOL emitHiddenReceiverArgument; // @synthesize emitHiddenReceiverArgument=_emitHiddenReceiverArgument;
@property(nonatomic) BOOL emitFunctionComments; // @synthesize emitFunctionComments=_emitFunctionComments;
@property(nonatomic) BOOL compilable; // @synthesize compilable=_compilable;
- (id)variableForReceiverIDNumber:(id)arg1;
- (id)variableForReceiverID:(unsigned long long)arg1;
- (unsigned int)_objectNameFromVariable:(const char *)arg1;
- (void)_emitErrors:(id)arg1 function:(const struct Function *)arg2;
- (void)_appendTraceLine:(id)arg1 withFunction:(const struct Function *)arg2 iterArgument:(array_iterator_bff672d3)arg3 argumentStrings:(id)arg4 returnVariable:(id)arg5;
- (void)_appendReturnValueToTraceLine:(id)arg1 withFunction:(const struct Function *)arg2 iterArgument:(array_iterator_bff672d3)arg3 argumentStrings:(id)arg4 returnVariable:(id)arg5;
- (BOOL)_skipFirstArgumentForFunction:(const struct Function *)arg1;
- (void)_prependReceiver:(id)arg1 function:(const struct Function *)arg2;
- (void)_setCurrentReceiver:(const struct Function *)arg1;
- (id)getIndexFromURL:(id)arg1;
- (id)nextArrayVariable;
- (id)rewriteArgument:(const struct Argument *)arg1;
- (id)getCastForArgument:(const struct Argument *)arg1 inFunction:(const struct Function *)arg2;
- (id)createArgument:(const struct Argument *)arg1 forFunction:(const struct Function *)arg2 withValue:(id)arg3;
- (id)rewriteReceiver:(unsigned long long)arg1;
- (id)rewriteURL:(const char *)arg1;
- (id)rewriteVariable:(const char *)arg1;
- (id)unloadStringForURL:(id)arg1;
- (id)loadStringForURL:(id)arg1 variableName:(id)arg2 bufferType:(id)arg3;
- (id)traceFunctionAsLines:(const struct Function *)arg1 returnVariable:(id)arg2 error:(id *)arg3;
- (id)traceFunction:(const struct Function *)arg1 returnVariable:(id)arg2 error:(id *)arg3;
- (id)traceFunction:(const struct Function *)arg1 error:(id *)arg2;
- (id)valueForArgument:(const struct Argument *)arg1;
- (id)valueStringForArgument:(const struct Argument *)arg1;
- (id)typeStringForArgument:(const struct Argument *)arg1;
- (id)_stringForScalarArgument:(const struct Argument *)arg1;
- (id)_newNumberForScalarArgument:(const struct Argument *)arg1;
- (id)_stringForScalar1DArrayArgument:(const struct Argument *)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)_enumerateScalar1DArrayArgumentValues:(const struct Argument *)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (id)_stringWithNumber:(id)arg1 argument:(const struct Argument *)arg2;
- (id)_stringWithIntegerNumber:(id)arg1 coreType:(unsigned int)arg2;
- (void)dealloc;
- (id)init;

@end

