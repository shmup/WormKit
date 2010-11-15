{}
const msgnames:array[1..387]of record name:string;value:Integer end=(
(name:'WM_NULL';value:$0000),
(name:'WM_CREATE';value:$0001),
(name:'WM_DESTROY';value:$0002),
(name:'WM_MOVE';value:$0003),
(name:'WM_SIZE';value:$0005),
(name:'WM_ACTIVATE';value:$0006),
(name:'WM_SETFOCUS';value:$0007),
(name:'WM_KILLFOCUS';value:$0008),
(name:'WM_ENABLE';value:$000A),
(name:'WM_SETREDRAW';value:$000B),
(name:'WM_SETTEXT';value:$000C),
(name:'WM_GETTEXT';value:$000D),
(name:'WM_GETTEXTLENGTH';value:$000E),
(name:'WM_PAINT';value:$000F),
(name:'WM_CLOSE';value:$0010),
(name:'WM_QUERYENDSESSION';value:$0011),
(name:'WM_QUIT';value:$0012),
(name:'WM_QUERYOPEN';value:$0013),
(name:'WM_ERASEBKGND';value:$0014),
(name:'WM_SYSCOLORCHANGE';value:$0015),
(name:'WM_ENDSESSION';value:$0016),
(name:'WM_SYSTEMERROR';value:$0017),
(name:'WM_SHOWWINDOW';value:$0018),
(name:'WM_CTLCOLOR';value:$0019),
(name:'WM_WININICHANGE';value:$001A),
(name:'WM_SETTINGCHANGE';value:WM_WININICHANGE),
(name:'WM_DEVMODECHANGE';value:$001B),
(name:'WM_ACTIVATEAPP';value:$001C),
(name:'WM_FONTCHANGE';value:$001D),
(name:'WM_TIMECHANGE';value:$001E),
(name:'WM_CANCELMODE';value:$001F),
(name:'WM_SETCURSOR';value:$0020),
(name:'WM_MOUSEACTIVATE';value:$0021),
(name:'WM_CHILDACTIVATE';value:$0022),
(name:'WM_QUEUESYNC';value:$0023),
(name:'WM_GETMINMAXINFO';value:$0024),
(name:'WM_PAINTICON';value:$0026),
(name:'WM_ICONERASEBKGND';value:$0027),
(name:'WM_NEXTDLGCTL';value:$0028),
(name:'WM_SPOOLERSTATUS';value:$002A),
(name:'WM_DRAWITEM';value:$002B),
(name:'WM_MEASUREITEM';value:$002C),
(name:'WM_DELETEITEM';value:$002D),
(name:'WM_VKEYTOITEM';value:$002E),
(name:'WM_CHARTOITEM';value:$002F),
(name:'WM_SETFONT';value:$0030),
(name:'WM_GETFONT';value:$0031),
(name:'WM_SETHOTKEY';value:$0032),
(name:'WM_GETHOTKEY';value:$0033),
(name:'WM_QUERYDRAGICON';value:$0037),
(name:'WM_COMPAREITEM';value:$0039),
(name:'WM_GETOBJECT';value:$003D),
(name:'WM_COMPACTING';value:$0041),
(name:'WM_COMMNOTIFY';value:$0044),{ obsolete in Win32}
(name:'WM_WINDOWPOSCHANGING';value:$0046),
(name:'WM_WINDOWPOSCHANGED';value:$0047),
(name:'WM_POWER';value:$0048),
(name:'WM_COPYDATA';value:$004A),
(name:'WM_CANCELJOURNAL';value:$004B),
(name:'WM_NOTIFY';value:$004E),
(name:'WM_INPUTLANGCHANGEREQUEST';value:$0050),
(name:'WM_INPUTLANGCHANGE';value:$0051),
(name:'WM_TCARD';value:$0052),
(name:'WM_HELP';value:$0053),
(name:'WM_USERCHANGED';value:$0054),
(name:'WM_NOTIFYFORMAT';value:$0055),
(name:'WM_CONTEXTMENU';value:$007B),
(name:'WM_STYLECHANGING';value:$007C),
(name:'WM_STYLECHANGED';value:$007D),
(name:'WM_DISPLAYCHANGE';value:$007E),
(name:'WM_GETICON';value:$007F),
(name:'WM_SETICON';value:$0080),
(name:'WM_NCCREATE';value:$0081),
(name:'WM_NCDESTROY';value:$0082),
(name:'WM_NCCALCSIZE';value:$0083),
(name:'WM_NCHITTEST';value:$0084),
(name:'WM_NCPAINT';value:$0085),
(name:'WM_NCACTIVATE';value:$0086),
(name:'WM_GETDLGCODE';value:$0087),
(name:'WM_NCMOUSEMOVE';value:$00A0),
(name:'WM_NCLBUTTONDOWN';value:$00A1),
(name:'WM_NCLBUTTONUP';value:$00A2),
(name:'WM_NCLBUTTONDBLCLK';value:$00A3),
(name:'WM_NCRBUTTONDOWN';value:$00A4),
(name:'WM_NCRBUTTONUP';value:$00A5),
(name:'WM_NCRBUTTONDBLCLK';value:$00A6),
(name:'WM_NCMBUTTONDOWN';value:$00A7),
(name:'WM_NCMBUTTONUP';value:$00A8),
(name:'WM_NCMBUTTONDBLCLK';value:$00A9),
(name:'WM_NCXBUTTONDOWN';value:$00AB),
(name:'WM_NCXBUTTONUP';value:$00AC),
(name:'WM_NCXBUTTONDBLCLK';value:$00AD),
(name:'WM_INPUT';value:$00FF),
//(name:'WM_KEYFIRST';value:$0100),
(name:'WM_KEYDOWN';value:$0100),
(name:'WM_KEYUP';value:$0101),
(name:'WM_CHAR';value:$0102),
(name:'WM_DEADCHAR';value:$0103),
(name:'WM_SYSKEYDOWN';value:$0104),
(name:'WM_SYSKEYUP';value:$0105),
(name:'WM_SYSCHAR';value:$0106),
(name:'WM_SYSDEADCHAR';value:$0107),
//(name:'WM_KEYLAST';value:$0108),
(name:'WM_INITDIALOG';value:$0110),
(name:'WM_COMMAND';value:$0111),
(name:'WM_SYSCOMMAND';value:$0112),
(name:'WM_TIMER';value:$0113),
(name:'WM_HSCROLL';value:$0114),
(name:'WM_VSCROLL';value:$0115),
(name:'WM_INITMENU';value:$0116),
(name:'WM_INITMENUPOPUP';value:$0117),
(name:'WM_MENUSELECT';value:$011F),
(name:'WM_MENUCHAR';value:$0120),
(name:'WM_ENTERIDLE';value:$0121),
(name:'WM_MENURBUTTONUP';value:$0122),
(name:'WM_MENUDRAG';value:$0123),
(name:'WM_MENUGETOBJECT';value:$0124),
(name:'WM_UNINITMENUPOPUP';value:$0125),
(name:'WM_MENUCOMMAND';value:$0126),
(name:'WM_CHANGEUISTATE';value:$0127),
(name:'WM_UPDATEUISTATE';value:$0128),
(name:'WM_QUERYUISTATE';value:$0129),
(name:'WM_CTLCOLORMSGBOX';value:$0132),
(name:'WM_CTLCOLOREDIT';value:$0133),
(name:'WM_CTLCOLORLISTBOX';value:$0134),
(name:'WM_CTLCOLORBTN';value:$0135),
(name:'WM_CTLCOLORDLG';value:$0136),
(name:'WM_CTLCOLORSCROLLBAR';value:$0137),
(name:'WM_CTLCOLORSTATIC';value:$0138),
//(name:'WM_MOUSEFIRST';value:$0200),
(name:'WM_MOUSEMOVE';value:$0200),
(name:'WM_LBUTTONDOWN';value:$0201),
(name:'WM_LBUTTONUP';value:$0202),
(name:'WM_LBUTTONDBLCLK';value:$0203),
(name:'WM_RBUTTONDOWN';value:$0204),
(name:'WM_RBUTTONUP';value:$0205),
(name:'WM_RBUTTONDBLCLK';value:$0206),
(name:'WM_MBUTTONDOWN';value:$0207),
(name:'WM_MBUTTONUP';value:$0208),
(name:'WM_MBUTTONDBLCLK';value:$0209),
(name:'WM_MOUSEWHEEL';value:$020A),
//(name:'WM_MOUSELAST';value:$020A),
(name:'WM_PARENTNOTIFY';value:$0210),
(name:'WM_ENTERMENULOOP';value:$0211),
(name:'WM_EXITMENULOOP';value:$0212),
(name:'WM_NEXTMENU';value:$0213),
(name:'WM_SIZING';value:532),
(name:'WM_CAPTURECHANGED';value:533),
(name:'WM_MOVING';value:534),
(name:'WM_POWERBROADCAST';value:536),
(name:'WM_DEVICECHANGE';value:537),
(name:'WM_IME_STARTCOMPOSITION';value:$010D),
(name:'WM_IME_ENDCOMPOSITION';value:$010E),
(name:'WM_IME_COMPOSITION';value:$010F),
(name:'WM_IME_KEYLAST';value:$010F),
(name:'WM_IME_SETCONTEXT';value:$0281),
(name:'WM_IME_NOTIFY';value:$0282),
(name:'WM_IME_CONTROL';value:$0283),
(name:'WM_IME_COMPOSITIONFULL';value:$0284),
(name:'WM_IME_SELECT';value:$0285),
(name:'WM_IME_CHAR';value:$0286),
(name:'WM_IME_REQUEST';value:$0288),
(name:'WM_IME_KEYDOWN';value:$0290),
(name:'WM_IME_KEYUP';value:$0291),
(name:'WM_MDICREATE';value:$0220),
(name:'WM_MDIDESTROY';value:$0221),
(name:'WM_MDIACTIVATE';value:$0222),
(name:'WM_MDIRESTORE';value:$0223),
(name:'WM_MDINEXT';value:$0224),
(name:'WM_MDIMAXIMIZE';value:$0225),
(name:'WM_MDITILE';value:$0226),
(name:'WM_MDICASCADE';value:$0227),
(name:'WM_MDIICONARRANGE';value:$0228),
(name:'WM_MDIGETACTIVE';value:$0229),
(name:'WM_MDISETMENU';value:$0230),
(name:'WM_ENTERSIZEMOVE';value:$0231),
(name:'WM_EXITSIZEMOVE';value:$0232),
(name:'WM_DROPFILES';value:$0233),
(name:'WM_MDIREFRESHMENU';value:$0234),
(name:'WM_MOUSEHOVER';value:$02A1),
(name:'WM_MOUSELEAVE';value:$02A3),
(name:'WM_NCMOUSEHOVER';value:$02A0),
(name:'WM_NCMOUSELEAVE';value:$02A2),
(name:'WM_WTSSESSION_CHANGE';value:$02B1),
//(name:'WM_TABLET_FIRST';value:$02C0),
//(name:'WM_TABLET_LAST';value:$02DF),
(name:'WM_CUT';value:$0300),
(name:'WM_COPY';value:$0301),
(name:'WM_PASTE';value:$0302),
(name:'WM_CLEAR';value:$0303),
(name:'WM_UNDO';value:$0304),
(name:'WM_RENDERFORMAT';value:$0305),
(name:'WM_RENDERALLFORMATS';value:$0306),
(name:'WM_DESTROYCLIPBOARD';value:$0307),
(name:'WM_DRAWCLIPBOARD';value:$0308),
(name:'WM_PAINTCLIPBOARD';value:$0309),
(name:'WM_VSCROLLCLIPBOARD';value:$030A),
(name:'WM_SIZECLIPBOARD';value:$030B),
(name:'WM_ASKCBFORMATNAME';value:$030C),
(name:'WM_CHANGECBCHAIN';value:$030D),
(name:'WM_HSCROLLCLIPBOARD';value:$030E),
(name:'WM_QUERYNEWPALETTE';value:$030F),
(name:'WM_PALETTEISCHANGING';value:$0310),
(name:'WM_PALETTECHANGED';value:$0311),
(name:'WM_HOTKEY';value:$0312),
(name:'WM_PRINT';value:791),
(name:'WM_PRINTCLIENT';value:792),
(name:'WM_APPCOMMAND';value:$0319),
(name:'WM_THEMECHANGED';value:$031A),
//(name:'WM_HANDHELDFIRST';value:856),
//(name:'WM_HANDHELDLAST';value:863),
//(name:'WM_PENWINFIRST';value:$0380),
//(name:'WM_PENWINLAST';value:$038F),
//(name:'WM_COALESCE_FIRST';value:$0390),
//(name:'WM_COALESCE_LAST';value:$039F),
//(name:'WM_DDE_FIRST';value:$03E0),
(name:'WM_DDE_INITIATE';value:WM_DDE_FIRST + 0),
(name:'WM_DDE_TERMINATE';value:WM_DDE_FIRST + 1),
(name:'WM_DDE_ADVISE';value:WM_DDE_FIRST + 2),
(name:'WM_DDE_UNADVISE';value:WM_DDE_FIRST + 3),
(name:'WM_DDE_ACK';value:WM_DDE_FIRST + 4),
(name:'WM_DDE_DATA';value:WM_DDE_FIRST + 5),
(name:'WM_DDE_REQUEST';value:WM_DDE_FIRST + 6),
(name:'WM_DDE_POKE';value:WM_DDE_FIRST + 7),
(name:'WM_DDE_EXECUTE';value:WM_DDE_FIRST + 8),
//(name:'WM_DDE_LAST';value:WM_DDE_FIRST + 8),
(name:'WM_APP';value:$8000),{ NOTE: All Message Numbers below 0x0400 are RESERVED }{ Private Window Messages Start Here }
(name:'WM_USER';value:$0400),{ Button Notification Codes }

(name:'BN_CLICKED';value:0),
(name:'BN_PAINT';value:1),
(name:'BN_HILITE';value:2),
(name:'BN_UNHILITE';value:3),
(name:'BN_DISABLE';value:4),
(name:'BN_DOUBLECLICKED';value:5),
(name:'BN_PUSHED';value:BN_HILITE),
(name:'BN_UNPUSHED';value:BN_UNHILITE),
(name:'BN_DBLCLK';value:BN_DOUBLECLICKED),
(name:'BN_SETFOCUS';value:6),
(name:'BN_KILLFOCUS';value:7),{ Button Control Messages }

(name:'BM_GETCHECK';value:$00F0),
(name:'BM_SETCHECK';value:$00F1),
(name:'BM_GETSTATE';value:$00F2),
(name:'BM_SETSTATE';value:$00F3),
(name:'BM_SETSTYLE';value:$00F4),
(name:'BM_CLICK';value:$00F5),
(name:'BM_GETIMAGE';value:$00F6),
(name:'BM_SETIMAGE';value:$00F7),{ Listbox Notification Codes }

(name:'LBN_ERRSPACE';value:(-2)),
(name:'LBN_SELCHANGE';value:1),
(name:'LBN_DBLCLK';value:2),
(name:'LBN_SELCANCEL';value:3),
(name:'LBN_SETFOCUS';value:4),
(name:'LBN_KILLFOCUS';value:5),{ Listbox messages }

(name:'LB_ADDSTRING';value:$0180),
(name:'LB_INSERTSTRING';value:$0181),
(name:'LB_DELETESTRING';value:$0182),
(name:'LB_SELITEMRANGEEX';value:$0183),
(name:'LB_RESETCONTENT';value:$0184),
(name:'LB_SETSEL';value:$0185),
(name:'LB_SETCURSEL';value:$0186),
(name:'LB_GETSEL';value:$0187),
(name:'LB_GETCURSEL';value:$0188),
(name:'LB_GETTEXT';value:$0189),
(name:'LB_GETTEXTLEN';value:$018A),
(name:'LB_GETCOUNT';value:$018B),
(name:'LB_SELECTSTRING';value:$018C),
(name:'LB_DIR';value:$018D),
(name:'LB_GETTOPINDEX';value:$018E),
(name:'LB_FINDSTRING';value:$018F),
(name:'LB_GETSELCOUNT';value:$0190),
(name:'LB_GETSELITEMS';value:$0191),
(name:'LB_SETTABSTOPS';value:$0192),
(name:'LB_GETHORIZONTALEXTENT';value:$0193),
(name:'LB_SETHORIZONTALEXTENT';value:$0194),
(name:'LB_SETCOLUMNWIDTH';value:$0195),
(name:'LB_ADDFILE';value:$0196),
(name:'LB_SETTOPINDEX';value:$0197),
(name:'LB_GETITEMRECT';value:$0198),
(name:'LB_GETITEMDATA';value:$0199),
(name:'LB_SETITEMDATA';value:$019A),
(name:'LB_SELITEMRANGE';value:$019B),
(name:'LB_SETANCHORINDEX';value:$019C),
(name:'LB_GETANCHORINDEX';value:$019D),
(name:'LB_SETCARETINDEX';value:$019E),
(name:'LB_GETCARETINDEX';value:$019F),
(name:'LB_SETITEMHEIGHT';value:$01A0),
(name:'LB_GETITEMHEIGHT';value:$01A1),
(name:'LB_FINDSTRINGEXACT';value:$01A2),
(name:'LB_SETLOCALE';value:$01A5),
(name:'LB_GETLOCALE';value:$01A6),
(name:'LB_SETCOUNT';value:$01A7),
(name:'LB_INITSTORAGE';value:$01A8),
(name:'LB_ITEMFROMPOINT';value:$01A9),
(name:'LB_MSGMAX';value:432),{ Combo Box Notification Codes }

(name:'CBN_ERRSPACE';value:(-1)),
(name:'CBN_SELCHANGE';value:1),
(name:'CBN_DBLCLK';value:2),
(name:'CBN_SETFOCUS';value:3),
(name:'CBN_KILLFOCUS';value:4),
(name:'CBN_EDITCHANGE';value:5),
(name:'CBN_EDITUPDATE';value:6),
(name:'CBN_DROPDOWN';value:7),
(name:'CBN_CLOSEUP';value:8),
(name:'CBN_SELENDOK';value:9),
(name:'CBN_SELENDCANCEL';value:10),{ Combo Box messages }

(name:'CB_GETEDITSEL';value:$0140),
(name:'CB_LIMITTEXT';value:$0141),
(name:'CB_SETEDITSEL';value:$0142),
(name:'CB_ADDSTRING';value:$0143),
(name:'CB_DELETESTRING';value:$0144),
(name:'CB_DIR';value:$0145),
(name:'CB_GETCOUNT';value:$0146),
(name:'CB_GETCURSEL';value:$0147),
(name:'CB_GETLBTEXT';value:$0148),
(name:'CB_GETLBTEXTLEN';value:$0149),
(name:'CB_INSERTSTRING';value:$014A),
(name:'CB_RESETCONTENT';value:$014B),
(name:'CB_FINDSTRING';value:$014C),
(name:'CB_SELECTSTRING';value:$014D),
(name:'CB_SETCURSEL';value:$014E),
(name:'CB_SHOWDROPDOWN';value:$014F),
(name:'CB_GETITEMDATA';value:$0150),
(name:'CB_SETITEMDATA';value:$0151),
(name:'CB_GETDROPPEDCONTROLRECT';value:$0152),
(name:'CB_SETITEMHEIGHT';value:$0153),
(name:'CB_GETITEMHEIGHT';value:$0154),
(name:'CB_SETEXTENDEDUI';value:$0155),
(name:'CB_GETEXTENDEDUI';value:$0156),
(name:'CB_GETDROPPEDSTATE';value:$0157),
(name:'CB_FINDSTRINGEXACT';value:$0158),
(name:'CB_SETLOCALE';value:345),
(name:'CB_GETLOCALE';value:346),
(name:'CB_GETTOPINDEX';value:347),
(name:'CB_SETTOPINDEX';value:348),
(name:'CB_GETHORIZONTALEXTENT';value:349),
(name:'CB_SETHORIZONTALEXTENT';value:350),
(name:'CB_GETDROPPEDWIDTH';value:351),
(name:'CB_SETDROPPEDWIDTH';value:352),
(name:'CB_INITSTORAGE';value:353),
(name:'CB_MSGMAX';value:354),{ Edit Control Notification Codes }

(name:'EN_SETFOCUS';value:$0100),
(name:'EN_KILLFOCUS';value:$0200),
(name:'EN_CHANGE';value:$0300),
(name:'EN_UPDATE';value:$0400),
(name:'EN_ERRSPACE';value:$0500),
(name:'EN_MAXTEXT';value:$0501),
(name:'EN_HSCROLL';value:$0601),
(name:'EN_VSCROLL';value:$0602),{ Edit Control Messages }

(name:'EM_GETSEL';value:$00B0),
(name:'EM_SETSEL';value:$00B1),
(name:'EM_GETRECT';value:$00B2),
(name:'EM_SETRECT';value:$00B3),
(name:'EM_SETRECTNP';value:$00B4),
(name:'EM_SCROLL';value:$00B5),
(name:'EM_LINESCROLL';value:$00B6),
(name:'EM_SCROLLCARET';value:$00B7),
(name:'EM_GETMODIFY';value:$00B8),
(name:'EM_SETMODIFY';value:$00B9),
(name:'EM_GETLINECOUNT';value:$00BA),
(name:'EM_LINEINDEX';value:$00BB),
(name:'EM_SETHANDLE';value:$00BC),
(name:'EM_GETHANDLE';value:$00BD),
(name:'EM_GETTHUMB';value:$00BE),
(name:'EM_LINELENGTH';value:$00C1),
(name:'EM_REPLACESEL';value:$00C2),
(name:'EM_GETLINE';value:$00C4),
(name:'EM_LIMITTEXT';value:$00C5),
(name:'EM_CANUNDO';value:$00C6),
(name:'EM_UNDO';value:$00C7),
(name:'EM_FMTLINES';value:$00C8),
(name:'EM_LINEFROMCHAR';value:$00C9),
(name:'EM_SETTABSTOPS';value:$00CB),
(name:'EM_SETPASSWORDCHAR';value:$00CC),
(name:'EM_EMPTYUNDOBUFFER';value:$00CD),
(name:'EM_GETFIRSTVISIBLELINE';value:$00CE),
(name:'EM_SETREADONLY';value:$00CF),
(name:'EM_SETWORDBREAKPROC';value:$00D0),
(name:'EM_GETWORDBREAKPROC';value:$00D1),
(name:'EM_GETPASSWORDCHAR';value:$00D2),
(name:'EM_SETMARGINS';value:211),
(name:'EM_GETMARGINS';value:212),
(name:'EM_SETLIMITTEXT';value:EM_LIMITTEXT),//win40 Name change
(name:'EM_GETLIMITTEXT';value:213),
(name:'EM_POSFROMCHAR';value:214),
(name:'EM_CHARFROMPOS';value:215),
(name:'EM_SETIMESTATUS';value:216),
(name:'EM_GETIMESTATUS';value:217),{ Scroll bar messages }
(name:'SBM_SETPOS';value:224), { not in win3.1}
(name:'SBM_GETPOS';value:225), { not in win3.1}
(name:'SBM_SETRANGE';value:226), { not in win3.1}
(name:'SBM_SETRANGEREDRAW';value:230), { not in win3.1}
(name:'SBM_GETRANGE';value:227), { not in win3.1}
(name:'SBM_ENABLE_ARROWS';value:228),{ not in win3.1}
(name:'SBM_SETSCROLLINFO';value:233),
(name:'SBM_GETSCROLLINFO';value:234),{ Dialog messages }
(name:'DM_GETDEFID';value:(WM_USER+0)),
(name:'DM_SETDEFID';value:(WM_USER+1)),
(name:'DM_REPOSITION';value:(WM_USER+2)),
(name:'PSM_PAGEINFO';value:(WM_USER+100)),
(name:'PSM_SHEETINFO';value:(WM_USER+101)),

(name:'WM_DWMCOMPOSITIONCHANGED';value:($0000031E))
);