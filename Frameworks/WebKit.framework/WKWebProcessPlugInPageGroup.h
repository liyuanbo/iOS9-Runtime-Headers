/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/WebKit.framework/WebKit
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class NSString;

@interface WKWebProcessPlugInPageGroup : NSObject <WKObject> {
    struct ObjectStorage<WebKit::WebPageGroupProxy> { 
        struct type { 
            unsigned char __lx[80]; 
        } data; 
    } _bundlePageGroup;
}

@property(readonly) NSString * identifier;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;
@property(readonly) struct Object { int (**x1)(); id x2; }* _apiObject;


- (struct Object { int (**x1)(); id x2; }*)_apiObject;
- (id)identifier;
- (void)dealloc;
- (id).cxx_construct;

@end