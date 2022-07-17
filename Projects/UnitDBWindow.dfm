object DBWindow: TDBWindow
  Left = 0
  Top = 0
  Caption = 'DBWindow'
  ClientHeight = 753
  ClientWidth = 782
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -12
  Font.Name = 'Segoe UI'
  Font.Style = []
  PixelsPerInch = 96
  TextHeight = 15
  object LabelBaseCr: TLabel
    Left = 40
    Top = 16
    Width = 213
    Height = 28
    Caption = #1041#1072#1079#1072' '#1087#1088#1077#1089#1090#1091#1087#1085#1080#1082#1086#1074
    Font.Charset = RUSSIAN_CHARSET
    Font.Color = clWindowText
    Font.Height = -23
    Font.Name = 'Lucida Sans Unicode'
    Font.Style = []
    ParentFont = False
  end
  object LabelBaseSquad: TLabel
    Left = 40
    Top = 488
    Width = 344
    Height = 28
    Caption = #1041#1072#1079#1072' '#1087#1088#1077#1089#1090#1091#1087#1085#1099#1093' '#1075#1088#1091#1087#1087#1080#1088#1086#1074#1086#1082
    Font.Charset = RUSSIAN_CHARSET
    Font.Color = clWindowText
    Font.Height = -23
    Font.Name = 'Lucida Sans Unicode'
    Font.Style = []
    ParentFont = False
  end
  object ArchiveButton: TButton
    Left = 40
    Top = 360
    Width = 257
    Height = 41
    Caption = #1044#1086#1073#1072#1074#1080#1090#1100' '#1074' '#1072#1088#1093#1080#1074
    Font.Charset = RUSSIAN_CHARSET
    Font.Color = clWindowText
    Font.Height = -17
    Font.Name = 'Lucida Sans Unicode'
    Font.Style = []
    ParentFont = False
    TabOrder = 0
  end
  object DelButton: TButton
    Left = 441
    Top = 360
    Width = 296
    Height = 41
    Caption = #1059#1076#1072#1083#1080#1090#1100' '#1087#1088#1077#1089#1090#1091#1087#1085#1080#1082#1072' '#1080#1079' '#1073#1072#1079#1099
    Font.Charset = RUSSIAN_CHARSET
    Font.Color = clWindowText
    Font.Height = -17
    Font.Name = 'Lucida Sans Unicode'
    Font.Style = []
    ParentFont = False
    TabOrder = 1
  end
  object DBCriminalGreed: TStringGrid
    Left = 40
    Top = 64
    Width = 697
    Height = 273
    ColCount = 14
    FixedCols = 0
    RowCount = 10
    Options = [goFixedVertLine, goFixedHorzLine, goVertLine, goHorzLine, goRangeSelect, goEditing, goFixedRowDefAlign]
    TabOrder = 2
  end
  object DBSquadGreed: TStringGrid
    Left = 40
    Top = 552
    Width = 625
    Height = 121
    ColCount = 2
    DefaultColWidth = 300
    TabOrder = 3
  end
end
