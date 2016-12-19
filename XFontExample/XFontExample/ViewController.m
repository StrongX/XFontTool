//
//  ViewController.m
//  XFontExample
//
//  Created by xlx on 16/12/19.
//  Copyright © 2016年 xlx. All rights reserved.
//

#import "ViewController.h"
#import <CoreText/CoreText.h>
#import "XFontTool.h"
@interface ViewController ()
@property (weak, nonatomic) IBOutlet UILabel *exampleLabel;

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    
    NSString *fontName = @"HiraginoSansGB-W3";
    if ([XFontTool isDownloadFont:fontName]) {
        _exampleLabel.font = [UIFont fontWithName:fontName size:40];
        return;
    }
    
    [XFontTool downLoadFontWithFontName:fontName progress:^(CGFloat pro) {
        NSLog(@"progress:%f%%",pro);
    } complete:^{
        _exampleLabel.font = [UIFont fontWithName:fontName size:40];
    } errorMsg:^(NSString *message) {
        NSLog(@"errorMessage:%@",message);
    }];
  
}


@end
