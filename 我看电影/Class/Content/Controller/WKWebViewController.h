//
//  WKWebViewController.h
//  我看电影
//
//  Created by wangkui on 16/5/28.
//  Copyright © 2016年 wangkui. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface WKWebViewController : UIViewController

@property(nonatomic, strong) NSURL *contentURL;
@property(nonatomic, copy) NSString *topTitle;

@end
