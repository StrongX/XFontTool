# XFontTool

# install
download the XFontExample;
drag the folder XFontExample->XFontTool to your project

# Usage
```
#import "XFontTool.h”
```
there are just two method 
```
+(BOOL)isDownloadFont:(NSString *)fontName;
+(void)downLoadFontWithFontName:(NSString *)fontName progress:(void(^)(CGFloat pro))progress complete:(void(^)(void))complete errorMsg:(void(^)(NSString *message))errorMsg;
```
# Example Code
```
    NSString *fontName = XChineseFont_YuppySC_Regular;   
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
```
# Attention
whenever you use the font you should check the font whether you had downloaded;
```
[XFontTool isDownloadFont:fontName]
```
