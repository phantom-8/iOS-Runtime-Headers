/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSAttributedString;

@interface _UITextUndoOperationReplace : NSUndoTextOperation {
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    NSAttributedString *_attributedString;
    } _replacementRange;
}

- (void)dealloc;
- (id)initWithAffectedRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 inputController:(id)arg2 replacementRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3;
- (void)undoRedo;

@end