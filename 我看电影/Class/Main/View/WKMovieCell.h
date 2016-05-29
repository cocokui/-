//
//  WKMovieCell.h
//  我看电影
//
//  Created by wangkui on 16/5/28.
//  Copyright © 2016年 wangkui. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "WKMovieDataFrame.h"

@interface WKMovieCell : UITableViewCell

@property(nonatomic, strong) WKMovieDataFrame *movieDataFrame;

+ (instancetype)cellWithTableView:(UITableView *)tableView;

@end
