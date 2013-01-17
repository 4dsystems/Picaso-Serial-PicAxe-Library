'
' 4D Constants, needs to be inserted into your PicAxe Program, if you want to use them, until such time as PicAxe supports includes
'
' // baud divisor rates for setbaud(n);
symbol MIDI                   = 9
symbol BAUD_110               = 0
symbol BAUD_300               = 1
symbol BAUD_600               = 2
symbol BAUD_1200              = 3
symbol BAUD_2400              = 4
symbol BAUD_4800              = 5
symbol BAUD_9600              = 6
symbol BAUD_14400             = 7
symbol BAUD_19200             = 8
symbol BAUD_31250             = 9
symbol BAUD_38400             = 10
symbol BAUD_56000             = 11
symbol BAUD_57600             = 12
symbol BAUD_115200            = 13
symbol BAUD_128000            = 14
symbol BAUD_256000            = 15
symbol BAUD_300000            = 16
symbol BAUD_375000            = 17
symbol BAUD_500000            = 18
symbol BAUD_600000            = 19

' //------------------------------------------------------------------//
' // CONSTANTS
' //------------------------------------------------------------------//

' // generic constants
symbol ENABLE                 = 1
symbol DISABLE                = 0
symbol HI                     = 1
symbol LO                     = 0
symbol INPUT4D                = 1  ' Renamed to avoid conflict with PicAxe Basic
symbol OUTPUT4D               = 0  ' Renamed to avoid conflict with PicAxe Basic
symbol ON4D                   = 1  ' Renamed to avoid conflict with PicAxe Basic
symbol OFF4D                  = 0  ' Renamed to avoid conflict with PicAxe Basic

' //------------------------------------------------------------------------------
' // Pin related constants
' //------------------------------------------------------------------------------
symbol IO1_PIN                = 1       ' pin 2 J1
symbol IO2_PIN                = 2       ' pin 1 J1
symbol IO3_PIN                = 3       ' pin 3 J1
symbol IO4_PIN                = 4       ' pin 5 J1 (also used for BUS_RD)
symbol IO5_PIN                = 5       ' pin 9 J2 (also used for BUS_WR)
symbol BUS_RD_PIN             = 4       ' pin 5 J1 (alias IO4_PIN)
symbol BUS_WR_PIN             = 5       ' pin 9 J2 (alias IO5_PIN)
symbol BACKLITE               = 6       ' backlite control pin
symbol AUDIO_ENABLE           = 7       ' amplifier chip control pin
symbol BUS_0                  = 8       ' pin 27 of J1
symbol BUS_1                  = 9       ' pin 25 of J1
symbol BUS_2                  = 10      ' pin 23 of J1
symbol BUS_3                  = 11      ' pin 21 of J1
symbol BUS_4                  = 12      ' pin 19 of J1
symbol BUS_5                  = 13      ' pin 17 of J1
symbol BUS_6                  = 14      ' pin 13 of J2
symbol BUS_7                  = 15      ' pin 11 of J2

' //------------------------------------------------------------------------------
' //gfx_Set() related constants
' //------------------------------------------------------------------------------
symbol PEN_SIZE               = 16      ' not necessary to use (legacy mode)
symbol BACKGROUND_COLOUR      = 17
symbol OBJECT_COLOUR          = 18      ' line / circle / rectangle generic colour
symbol CLIPPING               = 19      ' clipping ON / OFF
symbol TRANSPARENT_COLOUR     = 20      ' (only on displays with specific hware feature)
symbol TRANSPARENCY           = 21      ' 0 = OFF, 1 = ON (only on displays with specific hware feature)
symbol FRAME_DELAY            = 22      ' legacy mode, see pokeB(IMAGE_DELAY, n);
symbol SCREEN_MODE            = 23      ' LANDSCAPE, LANDSCAPE_R, PORTRAIT, PORTRAIT_R
symbol OUTLINE_COLOUR         = 24      ' if not BLACK (0) , used for outline around circles,rectangles and filled polygons
symbol CONTRAST               = 25      ' for OLED,cahnge contrast, for LCD on or off only
symbol LINE_PATTERN           = 26      ' used for patterned lines, 16bit value (0 = no pattern, '1's = pattern)
symbol COLOUR_MODE            = 27      ' select 8 or 16 bit colour mode
symbol BEVEL_WIDTH            = 28      ' button bevel width
symbol BEVEL_SHADOW           = 29      ' button bevel shadow depth
symbol X_ORIGIN               = 30      ' display position X offset
symbol Y_ORIGIN               = 31      ' display position X offset


' //gfx_Get() related constants
symbol X_MAX                  = 0       ' current orientations screen maximum X co-ordinate
symbol Y_MAX                  = 1       ' current orientations screen maximum Y co-ordinate
symbol LEFT_POS               = 2       ' last objects left co-ord
symbol TOP_POS                = 3       ' last objects top co-ord
symbol RIGHT_POS              = 4       ' last objects right co-ord
symbol BOTTOM_POS             = 5       ' last objects bottom co-ord
symbol X_ORG                  = 6       ' display position X offset
symbol Y_ORG                  = 7       ' display position X offset




symbol SOLID                  = 0       ' PEN_SIZE
symbol OUTLINE                = 1       ' PEN_SIZE
symbol STYLE1                 = 2
symbol STYLE2                 = 3

symbol LANDSCAPE              = 0       ' SCREEN_MODE (north)
symbol LANDSCAPE_R            = 1       ' SCREEN_MODE (south)
symbol PORTRAIT               = 2       ' SCREEN_MODE (west)
symbol PORTRAIT_R             = 3       ' SCREEN_MODE (east)

symbol COLOUR8                = 1       ' COLOUR_MODE 8 bit colour mode (not supported)
symbol COLOUR16               = 0       ' COLOUR_MODE 16 bit colour mode


symbol DOWN                   = 0
symbol UP                     = 1
symbol HIDE                   = 2
symbol SELECT                 = 3
symbol SELECT_MULTIPLE        = 4


symbol BUTTON_DOWN            = 0
symbol BUTTON_UP              = 1

symbol SLIDER_SUNKEN          = 0
symbol SLIDER_RAISED          = 1
symbol SLIDER_HIDE            = 2

symbol hPROGRESSBAR_RAISED    = $FF     
symbol lPROGRESSBAR_RAISED    = $FF     ' low byte
symbol hPROGRESSBAR_SUNKEN    = $FF     
symbol lPROGRESSBAR_SUNKEN    = $FE     ' low byte
symbol PROGRESSBAR_HIDE       = 2

symbol PANEL_SUNKEN           = 0
symbol PANEL_RAISED           = 1
symbol PANEL_HIDE             = 2


' //------------------------------------------------------------------------------
' //txt_Set() related constants
' //------------------------------------------------------------------------------
symbol TEXT_COLOUR            = 0       ' text foreground colr
symbol TEXT_BACKGROUND        = 1       ' text background colr
symbol TEXT_HIGHLIGHT         = 1       ' text background colr
symbol FONT_ID                = 2       ' default 0, else points to data statement font
symbol FONT_SIZE              = 2       ' compatibility
symbol TEXT_WIDTH             = 3       ' text width multiplier
symbol TEXT_HEIGHT            = 4       ' text height multiplier
symbol TEXT_XGAP              = 5       ' horizontal text gap (default 1)
symbol TEXT_YGAP              = 6       ' vertical text gap (default 1)
symbol TEXT_PRINTDELAY        = 7       ' for 'teletype' like effect when printing
symbol TEXT_OPACITY           = 8       ' text mode flag, TRANSPARENT or OPAQUE
symbol TEXT_BOLD              = 9       ' embolden text (auto reset)
symbol TEXT_ITALIC            = 10      ' italicize text (auto reset)
symbol TEXT_INVERSE           = 11      ' invert text (auto reset)
symbol TEXT_UNDERLINED        = 12      ' underline text (auto reset)
symbol TEXT_ATTRIBUTES        = 13      ' controls BOLD/ITALIC/INVERSE/UNDERLINE simultaneously
symbol TEXT_WRAP              = 14      ' Sets the pixel position where text wrap will occur at RHS




' //------------------------------------------------------------------------------
' //txt_Set() related arguments
' // NB:- FONT4 must be inherited if required,
' // eg #inherit "FONT4.fnt"
' //------------------------------------------------------------------------------
symbol FONT1                  = 0       ' (same as system font)
symbol FONT2                  = 1
symbol FONT3                  = 2

symbol TRANSPARENT            = 0       ' TEXT_OPACITY  transparent  text
symbol OPAQUE                 = 1       ' TEXT_OPACITY  opaque text

symbol BOLD                   = 16      ' TEXT_ATTRIBUTES bold text
symbol ITALIC                 = 32      ' TEXT_ATTRIBUTES italic text
symbol INVERSE                = 64      ' TEXT_ATTRIBUTES inverse text
symbol UNDERLINED             = 128     ' TEXT_ATTRIBUTES underlined



' //touch_Set() related constants
symbol TOUCH_ENABLE           = 0
symbol TOUCH_DISABLE          = 1
symbol TOUCH_REGIONDEFAULT    = 2

' //touch_Get() related constants
symbol TOUCH_STATUS           = 0
symbol TOUCH_GETX             = 1
symbol TOUCH_GETY             = 2
symbol NOTOUCH                = 0
symbol TOUCH_PRESSED          = 1
symbol TOUCH_RELEASED         = 2
symbol TOUCH_MOVING           = 3

' // image control offset related constants
symbol IMG_COUNT              = 0
symbol IMG_ENTRYLEN           = 1
symbol IMG_MODE               = 2
symbol IMG_GCI_FILENAME       = 3
symbol IMG_DAT_FILENAME       = 4
symbol IMG_GCIFILE_HANDLE     = 5

' // image attribute flags
' // for img_SetAttributes(...) and img_ClearAttributes(...)
symbol hI_ENABLED             = $80  ' bit 15,  set for image enabled
symbol lI_ENABLED             = $00  ' low byte
symbol hI_DARKEN              = $40  ' bit 14,  display dimmed
symbol lI_DARKEN              = $00  ' low byte
symbol hI_LIGHTEN             = $20  ' bit 13,  display bright
symbol lI_LIGHTEN             = $00  ' low byte
symbol hI_TOUCHED             = $10  ' bit 12,  touch test result
symbol lI_TOUCHED             = $00  ' low byte
symbol hI_Y_LOCK              = $08  ' bit 11,  stop Y movement
symbol lI_Y_LOCK              = $00  ' low byte
symbol hI_X_LOCK              = $04  ' bit 10,  stop X movement
symbol lI_X_LOCK              = $00  ' low byte
symbol hI_TOPMOST             = $02  ' bit 9,   draw on top of other images next update (auto reset)
symbol lI_TOPMOST             = $00  ' low byte
symbol hI_STAYONTOP           = $01  ' bit 8,   draw on top of other images always
symbol lI_STAYONTOP           = $00  ' low byte
symbol I_MOVIE                = $0080  ' bit 7,   image is a movie
symbol I_NOGROUP              = $0040  ' bit 6,   set to exclude image refresh when using img_Show(hndl, ALL);
symbol I_TOUCH_DISABLE        = $0020  ' bit 5,   set to disable touch for this image, default=1 for movie, 0 for image
symbol I_COLOUR16             = $0010  ' bit 4,   indicates 16 bit colour mode
'     // bits 0-3 reserved


symbol hALL                   = $FF  ' argument for img_xxx functions to update all images
symbol lALL                   = $FF  ' low byte

' // image control entry offsets
symbol IMAGE_LOWORD           = 0       ' WORD image address LO
symbol IMAGE_HIWORD           = 1       ' WORD image address HI
symbol IMAGE_XPOS             = 2       ' WORD image location X
symbol IMAGE_YPOS             = 3       ' WORD image location Y
symbol IMAGE_WIDTH            = 4       ' WORD image width
symbol IMAGE_HEIGHT           = 5       ' WORD image height
symbol IMAGE_FLAGS            = 6       ' WORD image flags
symbol IMAGE_DELAY            = 7       ' WORD inter frame delay
symbol IMAGE_FRAMES           = 8       ' WORD number of frames
symbol IMAGE_INDEX            = 9       ' WORD current frame
symbol IMAGE_CLUSTER          = 10      ' WORD image start cluster  pos (for FAT16 only)
symbol IMAGE_SECTOR           = 11      ' WORD image start sector in cluster pos (for FAT16 only)
symbol IMAGE_TAG              = 12      ' WORD user variable #1
symbol IMAGE_TAG2             = 13      ' WORD user variable #2

' // DISK struct offsets
symbol DISK_FIRST_SECT_LO     = 0       ' DWORD address of the first sector of the FAT partition (LO word)
symbol DISK_FIRST_SECT_HI     = 1       '       address of the first sector of the FAT partition (HI word)
symbol DISK_FAT_LO            = 2       ' DWORD address of FAT (LO word)
symbol DISK_FAT_HI            = 3       '       address of FAT (HI word)
symbol DISK_ROOT_LO           = 4       ' DWORD address of root directory (LO word)
symbol DISK_ROOT_HI           = 5       '       address of root directory (HI word)
symbol DISK_DATA_LO           = 6       ' DWORD address of data area (LO word)
symbol DISK_DATA_HI           = 7       '       address of data area (HI word)
symbol DISK_MAXCLUS_LO        = 8       ' DWORD max number of clusters in partition (LO word)
symbol DISK_MAXCLUS_HI        = 9       '       max number of clusters in partition (HI word)
symbol DISK_MAXROOT           = 10      ' WORD  max entries in root directory
symbol DISK_FATSIZE           = 11      ' WORD  number of sectors in FAT
symbol DISK_FATCOPIES         = 12      ' WORD  number of fat copies
symbol DISK_SECT_PER_CLUS     = 13      ' WORD  number of sectors per cluster
symbol DISK_TYPE              = 14      ' WORD  type of fat
symbol DISK_BUF               = 15      ' WORD  pointer to 512 byte info buffer




' // FILE struct offsets
symbol FILE_FIRST_CLUSTER     = 0       ' WORD  first cluster
symbol FILE_CURR_CLUSTER      = 1       ' WORD  current cluster in file
symbol FILE_CURR_SECTOR       = 2       ' WORD  sector in current cluster
symbol FILE_CURR_SECTOR_POS   = 3       ' WORD  position in current sector
symbol FILE_CURR_SECTOR_TOP   = 4       ' WORD  number bytes in current sector buffer
symbol FILE_SEEK_POS_LO       = 5       ' DWORD position in the file (LO word)
symbol FILE_SEEK_POS_HI       = 6       '       position in the file (HI word)
symbol FILE_SIZE_LO           = 7       ' DWORD file size (LO word)
symbol FILE_SIZE_HI           = 8       '       file size (HI word)
symbol FILE_TIME              = 9       ' WORD  last update time
symbol FILE_DATE              = 10      ' WORD  last update date
symbol FILE_NAME              = 11      ' WORD  12 byte buffer for filename
symbol FILE_MODE              = 17      ' WORD  file mode 'r', 'w', 'a'
symbol FILE_ATTRIBUTES        = 18      ' WORD  files attributes
symbol FILE_PAGEFLAG          = 19      ' WORD  cache check flag
symbol FILE_ENTRY             = 20      ' WORD  entry position in cur directory
symbol FILE_DISK              = 21      ' WORD* pointer to DISK mount media structure
symbol FILE_BUFFER            = 22      ' WORD*  sector buffer



' // timer control  related constants
symbol TIMER0                 = 0
symbol TIMER1                 = 1
symbol TIMER2                 = 2
symbol TIMER3                 = 3
symbol TIMER4                 = 4
symbol TIMER5                 = 5
symbol TIMER6                 = 6
symbol TIMER7                 = 7

' // I2C timing related constants
symbol I2C_SLOW               = 0
symbol I2C_MED                = 1
symbol I2C_FAST               = 2


' // spi_Init(...)  mode arguments
symbol SPI_SLOW               = 2       ' 750khz
symbol SPI_MED                = 1       ' 3mhz
symbol SPI_FAST               = 0       ' 12mhz
symbol RXMODE_0               = 0       ' receive sample pos
symbol RXMODE_1               = 1       ' receive sample pos
symbol CKMODE_0               = 0       ' transmit sample pos
symbol CKMODE_1               = 1       ' transmit sample pos
symbol CKMODE_2               = 2       ' transmit sample pos
symbol CKMODE_3               = 3       ' transmit sample pos

' //------------------------------------------------------------------------------
' // system WORD variables accesible with peekW and pokeW or pointer access
' // Note that the txt_Set variables (0-15) and gfx_set variables (16-31)
' // can also be accessed with peekW and pokeW
' //------------------------------------------------------------------------------

symbol RANDOM_LO              = 32      ' random number generator LO word
symbol RANDOM_HI              = 33      ' random number generator LO word
symbol SYSTEM_TIMER_LO        = 34      ' 1msec 32 bit free running timer LO word
symbol SYSTEM_TIMER_HI        = 35      ' 1msec 32 bit free running timer HI word
symbol TMR0                   = 36      ' user timer0
symbol TMR1                   = 37      ' user timer1
symbol TMR2                   = 38      ' user timer2
symbol TMR3                   = 39      ' user timer3 (10msec resolution)
symbol TMR4                   = 40      ' user timer0
symbol TMR5                   = 41      ' user timer1
symbol TMR6                   = 42      ' user timer2
symbol TMR7                   = 43      ' user timer3 (10msec resolution)
symbol SYS_X_MAX              = 44      ' display hardware X res-1
symbol SYS_Y_MAX              = 45      ' display hardware Y res-1
symbol GFX_XMAX               = 46      ' current display width-1 determined by portrait / landscape swapping
symbol GFX_YMAX               = 47      ' current display width-1 determined by portrait / landscape swapping
symbol GFX_LEFT               = 48      ' virtual left point for most recent object
symbol GFX_TOP                = 49      ' virtual top point for most recent object
symbol GFX_RIGHT              = 50      ' virtual right point for most recent object
symbol GFX_BOTTOM             = 51      ' virtual bottom point for most recent object
symbol GFX_X1                 = 52      ' clipped left point for current object
symbol GFX_Y1                 = 53      ' clipped top point for current object
symbol GFX_X2                 = 54      ' clipped right point for current object
symbol GFX_Y2                 = 55      ' clipped bottom point for current object
symbol GFX_X_ORG              = 56      ' current X origin
symbol GFX_Y_ORG              = 57      ' current Y origin
symbol GFX_HILITE_LINE        = 58      ' current multi line button hilite line
symbol GFX_LINE_COUNT         = 59      ' count of lines in multiline button
symbol GFX_LAST_SELECTION     = 60      ' last selected line
symbol GFX_HILIGHT_BACKGROUND = 61      ' multi button hilite background colour
symbol GFX_HILIGHT_FOREGROUND = 62      ' multi button hilite background colour
symbol GFX_BUTTON_FOREGROUND  = 63      ' store default text colour for hilite line tracker
symbol GFX_BUTTON_BACKGROUND  = 64      ' store default button colour for hilite line tracker
symbol GFX_BUTTON_MODE        = 65      ' store current buttons mode
symbol GFX_TOOLBAR_HEIGHT     = 66      ' height above
symbol GFX_STATUSBAR_HEIGHT   = 67      ' height below
symbol GFX_LEFT_GUTTER_WIDTH  = 68      ' width to left
symbol GFX_RIGHT_GUTTER_WIDTH = 69      ' width to right
symbol GFX_PIXEL_SHIFT        = 70      ' pixel shift for button depress illusion (default 1)
symbol GFX_RECT_X1            = 71      ' gp rect, used by multiline button to hilite required line
symbol GFX_RECT_Y1            = 72
symbol GFX_RECT_X2            = 73
symbol GFX_RECT_Y2            = 74
symbol GFX_THUMB_PERCENT      = 75      ' size of slider thumb as percentage
symbol GFX_THUMB_BORDER_DARK  = 76      ' darker shadow of thumb
symbol GFX_THUMB_BORDER_LIGHT = 77      ' lighter shadow of thumb
symbol TOUCH_XMINCAL          = 78      ' touch calibration value
symbol TOUCH_YMINCAL          = 79      ' touch calibration value
symbol TOUCH_XMAXCAL          = 80      ' touch calibration value
symbol TOUCH_YMAXCAL          = 81      ' touch calibration value
symbol IMG_WIDTH              = 82      ' width of currently loaded image
symbol IMG_HEIGHT             = 83      ' height of currently loaded image
symbol IMG_FRAME_DELAY        = 84      ' 0 if image, else inter frame delay for movie
symbol IMG_FLAGS              = 85      ' bit 4 determines colour mode, other bits reserved
symbol IMG_FRAME_COUNT        = 86      ' count of frames in a movie
symbol IMG_PIXEL_COUNT_LO     = 87      ' count of pixels in the current frame
symbol IMG_PIXEL_COUNT_HI     = 88      ' count of pixels in the current frame
symbol IMG_CURRENT_FRAME      = 89      ' last frame shown
symbol MEDIA_ADDRESS_LO       = 90      ' uSD byte address LO
symbol MEDIA_ADDRESS_HI       = 91      ' uSD byte address HI
symbol MEDIA_SECTOR_LO        = 92      ' uSD sector address LO
symbol MEDIA_SECTOR_HI        = 93      ' uSD sector address HI
symbol MEDIA_SECTOR_COUNT     = 94      ' uSD number of bytes remaining in sector
symbol TEXT_XPOS              = 95      ' text current x pixel position
symbol TEXT_YPOS              = 96      ' text current y pixel position
symbol TEXT_MARGIN            = 97      ' text left pixel pos for carriage return
symbol TXT_FONT_ID            = 98      ' font type, 0 = system font, else pointer to user font
symbol TXT_FONT_MAX           = 99      ' max number of chars in font
symbol TXT_FONT_OFFSET        = 100     ' starting offset (normally 0x20)
symbol TXT_FONT_WIDTH         = 101     ' current font width
symbol TXT_FONT_HEIGHT        = 102     ' current font height
symbol GFX_TOUCH_REGION_X1    = 103     ' touch capture region
symbol GFX_TOUCH_REGION_Y1    = 104
symbol GFX_TOUCH_REGION_X2    = 105
symbol GFX_TOUCH_REGION_Y2    = 106
symbol GFX_CLIP_LEFT_VAL      = 107     ' left clipping point (set with gfx_ClipWindow(...)
symbol GFX_CLIP_TOP_VAL       = 108     ' top clipping point (set with gfx_ClipWindow(...)
symbol GFX_CLIP_RIGHT_VAL     = 109     ' right clipping point (set with gfx_ClipWindow(...)
symbol GFX_CLIP_BOTTOM_VAL    = 110     ' bottom clipping point (set with gfx_ClipWindow(...)
symbol GFX_CLIP_LEFT          = 111     ' current clip value (reads full size if clipping turned off)
symbol GFX_CLIP_TOP           = 112     ' current clip value (reads full size if clipping turned off)
symbol GFX_CLIP_RIGHT         = 113     ' current clip value (reads full size if clipping turned off)
symbol GFX_CLIP_BOTTOM        = 114     ' current clip value (reads full size if clipping turned off)
symbol GRAM_PIXEL_COUNT_LO    = 115     ' LO word of count of pixels in the set GRAM area
symbol GRAM_PIXEL_COUNT_HI    = 116     ' HI word of count of pixels in the set GRAM area
symbol TOUCH_RAW_X            = 117     ' 12 bit raw A2D X value from touch screen
symbol TOUCH_RAW_Y            = 118     ' 12 bit raw A2D Y value from touch screen
symbol GFX_LAST_CHAR_WIDTH    = 119     ' calculated char width from last call to charWidth function
symbol GFX_LAST_CHAR_HEIGHT   = 120     ' calculated height from last call to charHeight function
symbol GFX_LAST_STR_WIDTH     = 121     ' calculated width from last call to strWidth function
symbol GFX_LAST_STR_HEIGHT    = 122     ' calculated height from last call to strHeight function

' //------------------------------------------------------------------------------
' // FILEIO Error Code Constants
' //------------------------------------------------------------------------------
symbol FE_OK                  = 0       ' IDE function succeeded
symbol FE_IDE_ERROR           = 1       ' IDE command execution error
symbol FE_NOT_PRESENT         = 2       ' CARD not present
symbol FE_PARTITION_TYPE      = 3       ' WRONG partition type, not FAT16
symbol FE_INVALID_MBR         = 4       ' MBR sector invalid signature
symbol FE_INVALID_BR          = 5       ' Boot Record invalid signature
symbol FE_DISK_NOT_MNTD       = 6       ' Media not mounted
symbol FE_FILE_NOT_FOUND      = 7       ' File not found in open for read
symbol FE_INVALID_FILE        = 8       ' File not open
symbol FE_FAT_EOF             = 9       ' Fat attempt to read beyond EOF
symbol FE_EOF                 = 10      ' Reached the end of file
symbol FE_INVALID_CLUSTER     = 11      ' Invalid cluster value > maxcls
symbol FE_DIR_FULL            = 12      ' All root dir entry are taken
symbol FE_DISK_FULL           = 13      ' All clusters in partition are taken
symbol FE_FILE_OVERWRITE      = 14      ' A file with same name exist already
symbol FE_CANNOT_INIT         = 15      ' Cannot init the CARD
symbol FE_CANNOT_READ_MBR     = 16      ' Cannot read the MBR
symbol FE_MALLOC_FAILED       = 17      ' Malloc could not allocate the FILE struct
symbol FE_INVALID_MODE        = 18      ' Mode was not r.w.
symbol FE_FIND_ERROR          = 19      ' Failure during FILE search
symbol FE_INVALID_FNAME       = 20      ' bad filename
symbol FE_INVALID_MEDIA       = 21      ' bad media
symbol FE_SECTOR_READ_FAIL    = 22      ' sector read failed
symbol FE_SECTOR_WRITE_FAIL   = 23      ' sector write failed

' /*
'     16 bit RGB (565) Colour Chart
'     Original work by 4D Forum Member: skadoo
' */



symbol hALICEBLUE             = $F7     
symbol lALICEBLUE             = $DF     ' low byte
symbol hANTIQUEWHITE          = $FF     
symbol lANTIQUEWHITE          = $5A     ' low byte
symbol hAQUA                  = $07     
symbol lAQUA                  = $FF     ' low byte
symbol hAQUAMARINE            = $7F     
symbol lAQUAMARINE            = $FA     ' low byte
symbol hAZURE                 = $F7     
symbol lAZURE                 = $FF     ' low byte
symbol hBEIGE                 = $F7     
symbol lBEIGE                 = $BB     ' low byte
symbol hBISQUE                = $FF     
symbol lBISQUE                = $38     ' low byte
symbol hBLACK                 = $00
symbol lBLACK                 = $00     ' low byte
symbol hBLANCHEDALMOND        = $FF     
symbol lBLANCHEDALMOND        = $59     ' low byte
symbol hBLUE                  = $00
symbol lBLUE                  = $1F     ' low byte
symbol hBLUEVIOLET            = $89     
symbol lBLUEVIOLET            = $5C     ' low byte
symbol hBROWN                 = $A1     
symbol lBROWN                 = $45     ' low byte
symbol hBURLYWOOD             = $DD     
symbol lBURLYWOOD             = $D0     ' low byte
symbol hCADETBLUE             = $5C     
symbol lCADETBLUE             = $F4     ' low byte
symbol hCHARTREUSE            = $7F     
symbol lCHARTREUSE            = $E0     ' low byte
symbol hCHOCOLATE             = $D3     
symbol lCHOCOLATE             = $43     ' low byte
symbol hCORAL                 = $FB     
symbol lCORAL                 = $EA     ' low byte
symbol hCORNFLOWERBLUE        = $64     
symbol lCORNFLOWERBLUE        = $BD     ' low byte
symbol hCORNSILK              = $FF     
symbol lCORNSILK              = $DB     ' low byte
symbol hCRIMSON               = $D8     
symbol lCRIMSON               = $A7     ' low byte
symbol hCYAN                  = $07     
symbol lCYAN                  = $FF     ' low byte
symbol hDARKBLUE              = $00
symbol lDARKBLUE              = $11     ' low byte
symbol hDARKCYAN              = $04     
symbol lDARKCYAN              = $51     ' low byte
symbol hDARKGOLDENROD         = $BC     
symbol lDARKGOLDENROD         = $21     ' low byte
symbol hDARKGRAY              = $AD     
symbol lDARKGRAY              = $55     ' low byte
symbol hDARKGREEN             = $03     
symbol lDARKGREEN             = $20     ' low byte
symbol hDARKKHAKI             = $BD     
symbol lDARKKHAKI             = $AD     ' low byte
symbol hDARKMAGENTA           = $88     
symbol lDARKMAGENTA           = $11     ' low byte
symbol hDARKOLIVEGREEN        = $53     
symbol lDARKOLIVEGREEN        = $45     ' low byte
symbol hDARKORANGE            = $FC     
symbol lDARKORANGE            = $60     ' low byte
symbol hDARKORCHID            = $99     
symbol lDARKORCHID            = $99     ' low byte
symbol hDARKRED               = $88     
symbol lDARKRED               = $00     ' low byte
symbol hDARKSALMON            = $EC     
symbol lDARKSALMON            = $AF     ' low byte
symbol hDARKSEAGREEN          = $8D     
symbol lDARKSEAGREEN          = $F1     ' low byte
symbol hDARKSLATEBLUE         = $49     
symbol lDARKSLATEBLUE         = $F1     ' low byte
symbol hDARKSLATEGRAY         = $2A     
symbol lDARKSLATEGRAY         = $69     ' low byte
symbol hDARKTURQUOISE         = $06     
symbol lDARKTURQUOISE         = $7A     ' low byte
symbol hDARKVIOLET            = $90     
symbol lDARKVIOLET            = $1A     ' low byte
symbol hDEEPPINK              = $F8     
symbol lDEEPPINK              = $B2     ' low byte
symbol hDEEPSKYBLUE           = $05     
symbol lDEEPSKYBLUE           = $FF     ' low byte
symbol hDIMGRAY               = $6B     
symbol lDIMGRAY               = $4D     ' low byte
symbol hDODGERBLUE            = $1C     
symbol lDODGERBLUE            = $9F     ' low byte
symbol hFIREBRICK             = $B1     
symbol lFIREBRICK             = $04     ' low byte
symbol hFLORALWHITE           = $FF     
symbol lFLORALWHITE           = $DE     ' low byte
symbol hFORESTGREEN           = $24     
symbol lFORESTGREEN           = $44     ' low byte
symbol hFUCHSIA               = $F8     
symbol lFUCHSIA               = $1F     ' low byte
symbol hGAINSBORO             = $DE     
symbol lGAINSBORO             = $FB     ' low byte
symbol hGHOSTWHITE            = $FF     
symbol lGHOSTWHITE            = $DF     ' low byte
symbol hGOLD                  = $FE     
symbol lGOLD                  = $A0     ' low byte
symbol hGOLDENROD             = $DD     
symbol lGOLDENROD             = $24     ' low byte
symbol hGRAY                  = $84     
symbol lGRAY                  = $10     ' low byte
symbol hGREEN                 = $04     
symbol lGREEN                 = $00     ' low byte
symbol hGREENYELLOW           = $AF     
symbol lGREENYELLOW           = $E5     ' low byte
symbol hHONEYDEW              = $F7     
symbol lHONEYDEW              = $FE     ' low byte
symbol hHOTPINK               = $FB     
symbol lHOTPINK               = $56     ' low byte
symbol hINDIANRED             = $CA     
symbol lINDIANRED             = $EB     ' low byte
symbol hINDIGO                = $48     
symbol lINDIGO                = $10     ' low byte
symbol hIVORY                 = $FF     
symbol lIVORY                 = $FE     ' low byte
symbol hKHAKI                 = $F7     
symbol lKHAKI                 = $31     ' low byte
symbol hLAVENDER              = $E7     
symbol lLAVENDER              = $3F     ' low byte
symbol hLAVENDERBLUSH         = $FF     
symbol lLAVENDERBLUSH         = $9E     ' low byte
symbol hLAWNGREEN             = $7F     
symbol lLAWNGREEN             = $E0     ' low byte
symbol hLEMONCHIFFON          = $FF     
symbol lLEMONCHIFFON          = $D9     ' low byte
symbol hLIGHTBLUE             = $AE     
symbol lLIGHTBLUE             = $DC     ' low byte
symbol hLIGHTCORAL            = $F4     
symbol lLIGHTCORAL            = $10     ' low byte
symbol hLIGHTCYAN             = $E7     
symbol lLIGHTCYAN             = $FF     ' low byte
symbol hLIGHTGOLD             = $FF     
symbol lLIGHTGOLD             = $DA     ' low byte
symbol hLIGHTGREEN            = $97     
symbol lLIGHTGREEN            = $72     ' low byte
symbol hLIGHTGREY             = $D6     
symbol lLIGHTGREY             = $9A     ' low byte
symbol hLIGHTPINK             = $FD     
symbol lLIGHTPINK             = $B8     ' low byte
symbol hLIGHTSALMON           = $FD     
symbol lLIGHTSALMON           = $0F     ' low byte
symbol hLIGHTSEAGREEN         = $25     
symbol lLIGHTSEAGREEN         = $95     ' low byte
symbol hLIGHTSKYBLUE          = $86     
symbol lLIGHTSKYBLUE          = $7F     ' low byte
symbol hLIGHTSLATEGRAY        = $74     
symbol lLIGHTSLATEGRAY        = $53     ' low byte
symbol hLIGHTSTEELBLUE        = $B6     
symbol lLIGHTSTEELBLUE        = $3B     ' low byte
symbol hLIGHTYELLOW           = $FF     
symbol lLIGHTYELLOW           = $FC     ' low byte
symbol hLIME                  = $07     
symbol lLIME                  = $E0     ' low byte
symbol hLIMEGREEN             = $36     
symbol lLIMEGREEN             = $66     ' low byte
symbol hLINEN                 = $FF     
symbol lLINEN                 = $9C     ' low byte
symbol hMAGENTA               = $F8     
symbol lMAGENTA               = $1F     ' low byte
symbol hMAROON                = $80     
symbol lMAROON                = $00     ' low byte
symbol hMEDIUMAQUAMARINE      = $66     
symbol lMEDIUMAQUAMARINE      = $75     ' low byte
symbol hMEDIUMBLUE            = $00
symbol lMEDIUMBLUE            = $19     ' low byte
symbol hMEDIUMORCHID          = $BA     
symbol lMEDIUMORCHID          = $BA     ' low byte
symbol hMEDIUMPURPLE          = $93     
symbol lMEDIUMPURPLE          = $9B     ' low byte
symbol hMEDIUMSEAGREEN        = $3D     
symbol lMEDIUMSEAGREEN        = $8E     ' low byte
symbol hMEDIUMSLATEBLUE       = $7B     
symbol lMEDIUMSLATEBLUE       = $5D     ' low byte
symbol hMEDIUMSPRINGGREEN     = $07     
symbol lMEDIUMSPRINGGREEN     = $D3     ' low byte
symbol hMEDIUMTURQUOISE       = $4E     
symbol lMEDIUMTURQUOISE       = $99     ' low byte
symbol hMEDIUMVIOLETRED       = $C0     
symbol lMEDIUMVIOLETRED       = $B0     ' low byte
symbol hMIDNIGHTBLUE          = $18     
symbol lMIDNIGHTBLUE          = $CE     ' low byte
symbol hMINTCREAM             = $F7     
symbol lMINTCREAM             = $FF     ' low byte
symbol hMISTYROSE             = $FF     
symbol lMISTYROSE             = $3C     ' low byte
symbol hMOCCASIN              = $FF     
symbol lMOCCASIN              = $36     ' low byte
symbol hNAVAJOWHITE           = $FE     
symbol lNAVAJOWHITE           = $F5     ' low byte
symbol hNAVY                  = $00
symbol lNAVY                  = $10     ' low byte
symbol hOLDLACE               = $FF     
symbol lOLDLACE               = $BC     ' low byte
symbol hOLIVE                 = $84     
symbol lOLIVE                 = $00     ' low byte
symbol hOLIVEDRAB             = $6C     
symbol lOLIVEDRAB             = $64     ' low byte
symbol hORANGE                = $FD     
symbol lORANGE                = $20     ' low byte
symbol hORANGERED             = $FA     
symbol lORANGERED             = $20     ' low byte
symbol hORCHID                = $DB     
symbol lORCHID                = $9A     ' low byte
symbol hPALEGOLDENROD         = $EF     
symbol lPALEGOLDENROD         = $55     ' low byte
symbol hPALEGREEN             = $9F     
symbol lPALEGREEN             = $D3     ' low byte
symbol hPALETURQUOISE         = $AF     
symbol lPALETURQUOISE         = $7D     ' low byte
symbol hPALEVIOLETRED         = $DB     
symbol lPALEVIOLETRED         = $92     ' low byte
symbol hPAPAYAWHIP            = $FF     
symbol lPAPAYAWHIP            = $7A     ' low byte
symbol hPEACHPUFF             = $FE     
symbol lPEACHPUFF             = $D7     ' low byte
symbol hPERU                  = $CC     
symbol lPERU                  = $27     ' low byte
symbol hPINK                  = $FE     
symbol lPINK                  = $19     ' low byte
symbol hPLUM                  = $DD     
symbol lPLUM                  = $1B     ' low byte
symbol hPOWDERBLUE            = $B7     
symbol lPOWDERBLUE            = $1C     ' low byte
symbol hPURPLE                = $80     
symbol lPURPLE                = $10     ' low byte
symbol hRED                   = $F8     
symbol lRED                   = $00     ' low byte
symbol hROSYBROWN             = $BC     
symbol lROSYBROWN             = $71     ' low byte
symbol hROYALBLUE             = $43     
symbol lROYALBLUE             = $5C     ' low byte
symbol hSADDLEBROWN           = $8A     
symbol lSADDLEBROWN           = $22     ' low byte
symbol hSALMON                = $FC     
symbol lSALMON                = $0E     ' low byte
symbol hSANDYBROWN            = $F5     
symbol lSANDYBROWN            = $2C     ' low byte
symbol hSEAGREEN              = $2C     
symbol lSEAGREEN              = $4A     ' low byte
symbol hSEASHELL              = $FF     
symbol lSEASHELL              = $BD     ' low byte
symbol hSIENNA                = $A2     
symbol lSIENNA                = $85     ' low byte
symbol hSILVER                = $C6     
symbol lSILVER                = $18     ' low byte
symbol hSKYBLUE               = $86     
symbol lSKYBLUE               = $7D     ' low byte
symbol hSLATEBLUE             = $6A     
symbol lSLATEBLUE             = $D9     ' low byte
symbol hSLATEGRAY             = $74     
symbol lSLATEGRAY             = $12     ' low byte
symbol hSNOW                  = $FF     
symbol lSNOW                  = $DF     ' low byte
symbol hSPRINGGREEN           = $07     
symbol lSPRINGGREEN           = $EF     ' low byte
symbol hSTEELBLUE             = $44     
symbol lSTEELBLUE             = $16     ' low byte
symbol hTAN                   = $D5     
symbol lTAN                   = $B1     ' low byte
symbol hTEAL                  = $04     
symbol lTEAL                  = $10     ' low byte
symbol hTHISTLE               = $DD     
symbol lTHISTLE               = $FB     ' low byte
symbol hTOMATO                = $FB     
symbol lTOMATO                = $08     ' low byte
symbol hTURQUOISE             = $47     
symbol lTURQUOISE             = $1A     ' low byte
symbol hVIOLET                = $EC     
symbol lVIOLET                = $1D     ' low byte
symbol hWHEAT                 = $F6     
symbol lWHEAT                 = $F6     ' low byte
symbol hWHITE                 = $FF     
symbol lWHITE                 = $FF     ' low byte
symbol hWHITESMOKE            = $F7     
symbol lWHITESMOKE            = $BE     ' low byte
symbol hYELLOW                = $FF     
symbol lYELLOW                = $E0     ' low byte
symbol hYELLOWGREEN           = $9E     
symbol lYELLOWGREEN           = $66     ' low byte

