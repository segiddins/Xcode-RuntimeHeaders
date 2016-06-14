//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DebuggerKit/DBGAbstractQuickLookProvider.h>

@class DBGNSDataForDataValueProvider, DVTObservingToken, NSLayoutConstraint, NSTextView;

@interface DBGStringQuickLookProvider : DBGAbstractQuickLookProvider
{
    DBGNSDataForDataValueProvider *_nsDataForDataValueProvider;
    DVTObservingToken *_nsDataForDataValueProviderObserver;
    BOOL _isAttributedString;
    int _loadedState;
    NSTextView *_textView;
    NSLayoutConstraint *_heightConstraint;
}

@property(retain) NSLayoutConstraint *heightConstraint; // @synthesize heightConstraint=_heightConstraint;
@property(retain) NSTextView *textView; // @synthesize textView=_textView;
@property int loadedState; // @synthesize loadedState=_loadedState;
- (void).cxx_destruct;
- (void)writeAtomicallyToTemporaryFile:(id)arg1;
- (id)extensionForTemporaryFile;
- (void)cancelLoading;
- (void)_updateTextViewUsingStringOrAttributedString:(id)arg1;
- (void)_didFinshLoadingWithStringOrAttributedString:(id)arg1;
- (id)initWithDataValue:(id)arg1 options:(id)arg2;

@end

