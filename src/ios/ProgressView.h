/****************************************
 *
 *  ProgressView.h
 *  Cordova ProgressView
 *
 *  Created by Sidney Bofah on 2014-11-20.
 *
 ****************************************/

#import <Cordova/CDV.h>
#import <M13Progress/M13Progress.h>


@interface ProgressView: CDVPlugin {
    M13ProgressHUD *_progressView;
    BOOL _isVisible;
    NSString* _labelDefault;
    CGFloat _progressDefault;
}

- (void)show:(CDVInvokedUrlCommand*)command;
- (void)setProgress:(CDVInvokedUrlCommand*)command;
- (void)setLabel:(CDVInvokedUrlCommand*)command;
- (void)hide:(CDVInvokedUrlCommand*)command;

/*
 以下方法为自定义添加，用于内部类调用
 */
- (void)showViewEx:(UIWebView *)webview;
- (void)hideEx;
- (void)updateLabel:(NSString *)viewLabel;
- (void)updateProgressEx;

@end